/*Created by Enea Guidi on 18/08/2019, this part of code takes care of translating the C-Instruction of the Hack language.
 3 different StrMaps are used one for Arithmetic, Destination (where the value will be stored), and Jump instructions.
 In the case of a jump instruction or operation + assignment the jump/dest bit, after they had been gotten from the map,
 are transferred to the "translated" string, that then is returned to main*/

#include "strmap.h"
#ifndef HACKASSEMBLER_C_INSTRUCTION_H
#define HACKASSEMBLER_C_INSTRUCTION_H

void translateCInst(char line[]);
void setupInstMap();
int determineSubType(char inst[]);
void findInstMap(char instToFind[], char translated[]);
void translateJump(char LHS[], char condition[], char translated[]);
void setupJT();
void translateInstAssignment(char LHS[], char RHS[], char translated[]);
void setupDT();

#endif //HACKASSEMBLER_C_INSTRUCTION_H
