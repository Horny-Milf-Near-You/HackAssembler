#include "C-Instruction.h"
#include "Parser.h"
#include <stdio.h>

const int JUMP = 1;
const int ASSIGNMENT = 2;
const int OPERATION_ONLY = 0;
const int INSTR_SIZE = 17;

//Map for the C-Instruction translation (example -> key: D+M, value: 1111000010000000) and so on...
StrMap* InstructionMap = NULL;
StrMap* JumpTable = NULL;
StrMap* DestinationMap = NULL;


//A sub main for C-Instruction translation
void translateCInst(char line[]) {
    int option = determineSubType(line);
    char translatedInst[30] = "                   \0";

    if(option == JUMP) {
        char condition[4] = "   \0";
        char H_register[4] = "   \0";
        separateAndClean(line, H_register, condition, ';');
        translateJump(H_register, condition, translatedInst);
    } else if(option == ASSIGNMENT) {
        char operation[10] = "         \0";
        char assignation[4] = "   \0";
        separateAndClean(line, assignation, operation, '=');
        translateInstAssignment(operation, assignation, translatedInst);
    } else if(option == OPERATION_ONLY) {
        findInstMap(line, translatedInst);
    }

    strncpy(line, translatedInst, INSTR_SIZE);
}

//The jump and confrontation bits are sets to zeros and will be later modified on the execution
void setupInstMap() {
    InstructionMap = sm_new(50);

    sm_put(InstructionMap, "0", "1110101010000000");
    sm_put(InstructionMap, "1", "1110111111000000");
    sm_put(InstructionMap, "-1", "1110111010000000");
    sm_put(InstructionMap, "D", "1110001100000000");
    sm_put(InstructionMap, "A", "1110110000000000");
    sm_put(InstructionMap, "!D", "1110001101000000");
    sm_put(InstructionMap, "!A", "1110110001000000");
    sm_put(InstructionMap, "-D", "1110001111000000");
    sm_put(InstructionMap, "-A", "1110110011000000");
    sm_put(InstructionMap, "D+1", "1110011111000000");
    sm_put(InstructionMap, "A+1", "1110110111000000");
    sm_put(InstructionMap, "D-1", "1110001110000000");
    sm_put(InstructionMap, "A-1", "1110110010000000");
    sm_put(InstructionMap, "D+A", "1110000010000000");
    sm_put(InstructionMap, "D-A", "1110010011000000");
    sm_put(InstructionMap, "A-D", "1110000111000000");
    sm_put(InstructionMap, "D&A", "1110000000000000");
    sm_put(InstructionMap, "D|A", "1110010101000000");
    sm_put(InstructionMap, "M", "1111110000000000");
    sm_put(InstructionMap, "!M", "1111110001000000");
    sm_put(InstructionMap, "-M", "1111110011000000");
    sm_put(InstructionMap, "M+1", "1111110111000000");
    sm_put(InstructionMap, "M-1", "1111110010000000");
    sm_put(InstructionMap, "D+M", "1111000010000000");
    sm_put(InstructionMap, "D-M", "1111010011000000");
    sm_put(InstructionMap, "M-D", "1111000111000000");
    sm_put(InstructionMap, "D&M", "1111000000000000");
    sm_put(InstructionMap, "D|M", "1111010101000000");
}

//Determine which type of instruction are we going to translate
int determineSubType(char line[]) {
    if(contains(line, ';') == 1)
        return(JUMP);

    else if (contains(line, '=') == 1)
        return(ASSIGNMENT);

    else return(OPERATION_ONLY);
}

//Find the "main" instruction from InstructionMap and copy the value associated onto "translated" string, that will
//be eventually further modified
void findInstMap(char instToFind[], char translated[]) {
    if(sm_get(InstructionMap, instToFind, translated, strlen(translated)) == 0)
        printf("ERROR, could not find instruction %s in the map", instToFind);
}

void translateJump(char reg[], char condition[], char translated[]) {
    findInstMap(reg, translated);
    char condition_bit[5] = "0000\0";

    if(sm_get(JumpTable, condition, condition_bit, strlen(condition_bit)) == 1) {
        condition_bit[3] = '\0';
        //Copy the 3 jump bits into "translated" instructions
        pasteTheString(translated, condition_bit, 13);
    }
}

void setupJT() {
    JumpTable = sm_new(8);

    sm_put(JumpTable, "\0", "000");
    sm_put(JumpTable, "JMP", "111");
    sm_put(JumpTable, "JGT", "001");
    sm_put(JumpTable, "JEQ", "010");
    sm_put(JumpTable, "JLT", "100");
    sm_put(JumpTable, "JGE", "011");
    sm_put(JumpTable, "JLE", "110");
    sm_put(JumpTable, "JNE", "101");
}

void translateInstAssignment(char RHS[], char LHS[], char translated[]) {
    findInstMap(RHS, translated);
    char dest_bit[5] = "0000\0";

    if(sm_get(DestinationMap, LHS, dest_bit, strlen(dest_bit)) == 1) {
        pasteTheString(translated, dest_bit, 10);
    }
}

void setupDT() {
    DestinationMap = sm_new(8);

    sm_put(DestinationMap, "\0", "000");
    sm_put(DestinationMap, "A", "100");
    sm_put(DestinationMap, "D", "010");
    sm_put(DestinationMap, "M", "001");
    sm_put(DestinationMap, "MD", "011");
    sm_put(DestinationMap, "AM", "101");
    sm_put(DestinationMap, "AD", "110");
    sm_put(DestinationMap, "AMD", "111");
}
