/*Created by Enea Guidi on 31/07/2019, this part of code takes care of everything related to the translation of an
A-Instruction, that regards finding the symbol/memory address in the Table or add non existing label, or also translate
 the memory address that is stored as an int to the resultant binary number and so on*/

#ifndef HACKASSEMBLER_A_INSTRUCTION_H
#define HACKASSEMBLER_A_INSTRUCTION_H
#include "strmap.h"

void setupST();
void translateAInst(char toTranslate[]);
void labelHandler(char labelDec[]);
void labelCleaner(char toClean[]);
char* binaryConverter(int toConvert);

#endif //HACKASSEMBLER_A_INSTRUCTION_H
