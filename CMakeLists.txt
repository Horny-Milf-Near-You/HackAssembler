cmake_minimum_required(VERSION 3.14)
project(HackAssembler C)

set(CMAKE_C_STANDARD 99)

add_executable(HackAssembler main.c Parser.c Parser.h A-Instruction.c A-Instruction.h strmap.c strmap.h C-Instruction.c C-Instruction.h)