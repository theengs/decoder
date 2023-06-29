import json
import re
import sys


def fix_json_strings(decoder_source):
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

        # Parse the raw JSON string and convert it back to unindented string
        json_data = json.loads(raw_string)
        normalized_data = json.dumps(
            json_data, separators=(",", ":"), ensure_ascii=False, indent=None
        )

        # Escape quotes
        normalized_data = normalized_data.replace('"', '\\"')

        # Replace the original JSON string by the normalized raw string
        decoder_source = decoder_source.replace(declaration + "\"" + json_string, declaration + "\"" + normalized_data)

    return decoder_source


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Please provide a filename as command-line argument.")
        sys.exit()

    filename = sys.argv[1]

    with open(filename, "r") as file:
        content = file.read()

    try:
        new_decoder_source = fix_json_strings(content)
    except json.decoder.JSONDecodeError as error:
        print(f"Invalid JSON at: {error.doc[:error.pos]}")
        print(f"Error message: {error.msg}")
        sys.exit(1)

    # Write the result back to the file
    if new_decoder_source != content:
        with open(filename, "w") as file:
            file.write(new_decoder_source)
        print(f"Fixing JSON string in decoder {filename}...")
        sys.exit(1)
