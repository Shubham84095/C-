import subprocess
import os
from src.color_print import cprint

# Compile C++ file
def compile(file_path):
    if not file_path.endswith(".cpp"):
        return -1
    
    file = os.path.splitext(file_path)[0]
    cmd = f"g++ -std=c++17 -DONLINE_JUDGE \"{file_path}\" -o \"{file}.out\""
    
    print('\nCompiling ', end = '')
    cprint(file_path, clr = "purple")
    subprocess.run(cmd, check=True, shell=True)
    print('Compilation done')

# Run compiled file and return output
def run(executable_path, std_input=None):
    cmd = executable_path
    try:
        if std_input:
            result = subprocess.run(cmd, input=std_input, capture_output=True, shell=True, text=True, check=True)
        else:
            result = subprocess.run(cmd, capture_output=True, shell=True, text=True, check=True)
        return result
    except subprocess.CalledProcessError as e:
        cprint(f"Error running {cmd}: {e}", clr="red")
        cprint(f"Output: {e.output}", clr="red")
        cprint(f"Error: {e.stderr}", clr="red")
        raise
