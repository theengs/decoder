# read the contents of your README file
from pathlib import Path


from packaging import version
from skbuild import setup
from skbuild.cmaker import get_cmake_version
from skbuild.exceptions import SKBuildError

this_directory = Path(__file__).parent
long_description = (this_directory / "README.md").read_text(encoding="utf-8")
setup_requires = ["setuptools_scm"]
# Add CMake as a build requirement if cmake is not installed
# or is too low a version
try:
    if version.parse(get_cmake_version()) < version.parse("3.4"):
        setup_requires.append("cmake")
except SKBuildError:
    setup_requires.append("cmake")

setup(
    name="TheengsDecoder",
    long_description=long_description,
    long_description_content_type="text/markdown",
    description="A message decoder for the Internet of Things",
    author='Theengs',
    license=" GPL-3.0 License",
    packages=['TheengsDecoder'],
    use_scm_version={"root": "..", "version_scheme": "no-guess-dev"},
    setup_requires=setup_requires,
)
