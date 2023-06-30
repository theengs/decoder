"""Helper script to check validity of JSON strings in a decoder.

Run this on any .h file in src/devices/ to check the decoder file.
"""
import json
import re
import sys
from pathlib import Path


def normalize_json_string(json_string: str) -> str:
    """Normalize a JSON string by escaping quotes and removing whitespace."""
    in_quotes = False
    normalized_json_string = ""

    for character in json_string:
        if character == '"':
            in_quotes = not in_quotes

        if not in_quotes and character in [" ", "\n", "\t"]:
            continue

        normalized_json_string += character

    return normalized_json_string.replace('"', '\\"')


def fix_json_strings(decoder_source: str) -> str:
    """Check whether declaration in decoder source file conforms to raw string.

    This returns the complete decoder source code with the JSON declaration
    replaced by the escaped version of the corresponding raw string.
    """
    # Find all const char* declarations followed by a raw string in a multi-line
    # comment.
    code_structures = re.findall(
        r'(const char\* \w+ = )"(.*?)";\s*\/\*\s*R""""\(([\s\S]*?)\)"""";',
        decoder_source,
        re.DOTALL | re.MULTILINE,
    )

    for declaration, json_string, raw_string in code_structures:

        # Parse the raw JSON string.
        # If it's not valid JSON, this raises a json.decoder.JSONDecodeError.
        _ = json.loads(raw_string)

        # Normalize JSON string
        # Don't use json.dumps because this changes floats to scientific notation.
        normalized_data = normalize_json_string(raw_string)

        # Replace the original JSON string by the normalized raw string
        decoder_source = decoder_source.replace(
            declaration + '"' + json_string,
            declaration + '"' + normalized_data,
        )

    return decoder_source


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Please provide one or more filenames as command-line arguments.")
        sys.exit(1)

    has_error = False

    for filename in sys.argv[1:]:
        with Path(filename).open() as file:
            content = file.read()

        try:
            new_decoder_source = fix_json_strings(content)

            # Write the result back to the file
            if new_decoder_source != content:
                with Path(filename).open("w") as file:
                    file.write(new_decoder_source)
                print(f"Fixing JSON string in decoder {filename}...")
                has_error = True
        except json.decoder.JSONDecodeError as error:
            print(f"Can't automatically fix decoder {filename}")
            print(f"Invalid JSON at: {error.doc[:error.pos]}")
            print(f"Error message: {error.msg}")
            has_error = True

    if has_error:
        sys.exit(1)
