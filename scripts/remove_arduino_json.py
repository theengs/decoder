from pathlib import Path
import shutil

dirpath = Path('../src') / 'arduino_json'
if dirpath.exists() and dirpath.is_dir():
    shutil.rmtree(dirpath)
