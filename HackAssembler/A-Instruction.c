#include "A-Instruction.h"
#include "Parser.h"
#include <stdio.h>

int currentMemAddress = 16;
const int INST_SIZE = 16;

//Symbol table for Label Mapping, the memAddress are converted at first to binary and then to string, so as searching
//for a label address a complete A-Instruction will be returned
StrMap* SymbolTable = NULL;

void setupST() {
    SymbolTable = sm_new(500);

    sm_put(SymbolTable, "R0", "0000000000000000");
    sm_put(SymbolTable, "R1", "0000000000000001");
    sm_put(SymbolTable, "R2", "0000000000000010");
    sm_put(SymbolTable, "R3", "0000000000000011");
    sm_put(SymbolTable, "R4", "0000000000000100");
    sm_put(SymbolTable, "R5", "0000000000000101");
    sm_put(SymbolTable, "R6", "0000000000000110");
    sm_put(SymbolTable, "R7", "0000000000000111");
    sm_put(SymbolTable, "R8", "0000000000001000");
    sm_put(SymbolTable, "R9", "0000000000001001");
    sm_put(SymbolTable, "R10", "0000000000001010");
    sm_put(SymbolTable, "R11", "0000000000001011");
    sm_put(SymbolTable, "R12", "0000000000001100");
    sm_put(SymbolTable, "R13", "0000000000001101");
    sm_put(SymbolTable, "R14", "0000000000001110");
    sm_put(SymbolTable, "R15", "0000000000001111");

    sm_put(SymbolTable, "SCREEN", "0100000000000000");
    sm_put(SymbolTable, "KBD", "0110000000000000");

    sm_put(SymbolTable, "SP", "0000000000000000");
    sm_put(SymbolTable, "LCL", "0000000000000001");
    sm_put(SymbolTable, "ARG", "0000000000000010");
    sm_put(SymbolTable, "THIS", "0000000000000011");
    sm_put(SymbolTable, "THAT", "0000000000000100");
}

//A sort of "sub-main" for the translation to binary of an A Instruction
void translateAInst(char toTranslate[]) {
    change('@', ' ', toTranslate);
    clearSpaces(toTranslate);

    char translatedInst[INST_SIZE + 1];
    translatedInst[INST_SIZE] = '\0';

    if(sm_get(SymbolTable, toTranslate, translatedInst, sizeof(translatedInst)) == 1) {
        //If the label is already in the Map
        toTranslate[INST_SIZE] = '\0';
        strncpy(toTranslate, translatedInst, INST_SIZE);
    } else {
       //If the label is not in the map then is a "@93", "@32", and so on
       printf("Error, label %s not found", toTranslate); //TODO REMOVE
       int respective_int = str_to_int(toTranslate);
       printf("%d is the respective int translation, in binary %s", respective_int, binaryConverter(respective_int)); //TODO REMOVE
       strncpy(toTranslate, binaryConverter(respective_int), INST_SIZE);
    }
}

void labelHandler(char labelDec[]) {
    labelCleaner(labelDec);
    if(sm_exists(SymbolTable, labelDec)) {
        printf("Label already in SymbolTable, error a label could be declared only once\n");
    } else {
        sm_put(SymbolTable, labelDec, binaryConverter(currentMemAddress));
        currentMemAddress++;
    }
}

//Delete the parenthesis so only the label name is used in the map
void labelCleaner(char toClean[]) {
    change('(', ' ', toClean);
    change(')', ' ', toClean);
    clearSpaces(toClean);
}

char* binaryConverter(int toConvert) {
    int unused = toConvert;
    char* memAddress_bin = (char*) malloc(sizeof(char) * (INST_SIZE + 1));
    memAddress_bin[INST_SIZE] = '\0';

    for(int i = INST_SIZE - 1; i >= 0; i--) {
        memAddress_bin[i] = (toConvert % 2) + 48; //Casting the number to a char
        toConvert = toConvert / 2;
    }

    printf("The binary address is: %s, and the memAdd is %d \n",memAddress_bin, unused);
    return(memAddress_bin);
}