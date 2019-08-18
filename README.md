# HackAssembler
A program to convert .asm file (written in the nand2tetris Hack language) into .hack file. The output.hack file is then executable in CPUEmulator, the above program is included in the [nand2tetris](https://www.nand2tetris.org) suite alongside other useful executables.

## What is
This program is my personal implementation of the sixth nand2tetris project, the goal consist on creating a sort of "compiler" for the Hack assembler language and translate this one to binary sequence that can be executed on the set of tools that can be downloaded on their sites

## How-To
After building the .c source file into executable, simply open your terminal, go to the location where the executable is and write:
**"HackAssembler input_path output_path"**

## Implementation
The program scan two times the input file, the first time only add a label to the SymbolTable map when the label is declared in the code.
The label is added only when declared and if a memory address is free.
The second time instead the program translate instruction to instruction translating every instruction to the zeros and ones sequence that corresponds, eventually the program should handle different types of error and permit a fluent execution, nontheless bug and errors could happen.

## Others
Please consider that this software comes with absolutely no warranty and was made only for fun pourpose, I decline any responsability.
**Feel free to contribute as you prefer and report any bugs/problem.**
For further indormation on the nand2tetris project click this link: https://www.nand2tetris.org
