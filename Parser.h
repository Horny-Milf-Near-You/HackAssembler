/*Created by Enea Guidi on 31/07/2019, this part of the code is used to normalize and clean strings read from the user's
input to avoid error caused to "dirty" input, it also helps define which type of instruction are the program currently
working on so the main will dispatch properly*/

#ifndef HACKASSEMBLER_PARSER_H
#define HACKASSEMBLER_PARSER_H

void normalizeStrings(char toClean[]);
void change(char toDel, char new, char input[]);
void clearSpaces(char toClean[]);
void eliminateComment(char toEliminate[]);
void emptyLine(char input[]);
int determineInstType(char input[]);
void separateAndClean(char input[], char LHS[], char RHS[], char breakpoint);
int contains(char line[], char contained);
void pasteTheString(char destStr[], char inputStr[], int indexToStart);
int str_to_int(char toCast[]);

#endif //HACKASSEMBLER_PARSER_H
