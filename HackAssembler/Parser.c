#include "Parser.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char COMMENT_BEGIN = '/';
const char END_OF_LINE = '\0';
const char ENTER_CODE = '\n';
const int S_SIZE = 80;

//Eliminates spaces and comment from the line read, it make easier then to work on the strings
void normalizeStrings(char toClean[]) {
    eliminateComment(toClean);
    clearSpaces(toClean);
    change('\n', END_OF_LINE, toClean);
}

//Change all the occurencies of the "toDel" char to "new" char in the input string
void change(char toDel, char new, char input[]) {
    for(int i = 0; input[i] != END_OF_LINE; i++) {
        if(input[i] == toDel)
            input[i] = new;
    }
}

void clearSpaces(char toClean[]) {
   char cleaned[S_SIZE];
   int j = 0;

   for(int i = 0; toClean[i] != END_OF_LINE; i++) {
        if (toClean[i] != ' ') {
            cleaned[j] = toClean[i];
            j++;
        }
   }
   cleaned[j] = END_OF_LINE;

   //Copy the cleaned string into the old one that had spaces
   strncpy(toClean, cleaned, S_SIZE);
}

void eliminateComment(char toEliminate[]) {
    bool isCommented = false;

    //The whole line is a comment or a empty line so must be completely discharged
    if(toEliminate[0] == COMMENT_BEGIN || toEliminate[0] == ENTER_CODE)
        emptyLine(toEliminate);

    //The line has/hasn't a comment but also an instruction
    for(int i = 0; toEliminate[i] != END_OF_LINE; i++) {
        if(toEliminate[i] == COMMENT_BEGIN)
            isCommented = true;
        if(isCommented)
            toEliminate[i] = ' ';
    }
}

void emptyLine(char input[]) {
    char empty[S_SIZE];
    empty[0] = END_OF_LINE;
    strncpy(input, empty, S_SIZE);
}

int determineInstType(char input[]) {
    if(input[0] == '@')
        return(1);

    else if(input[0] == '\0')
        return(0);

    else if(input[0] == '(')
        return(3);

    else return(2);
}

//Divides the input string in 2 substring, for example:
//  separateAndClean("D=M", "", "", '=') will return -> LHS = "D" and RHS = "M"
//I use this function only to split jump or operation + assignation instruction so it will be more easy to translate them separately
void separateAndClean(char input[], char LHS[], char RHS[], char breakpoint) {
    bool breakpointReached = false;
    int j = 0;

    for(int i = 0; input[i] != '\0'; i++) {

        if(input[i] == breakpoint) {
            breakpointReached = true;
            LHS[i] = '\0';
        } else if(breakpointReached) {
            RHS[j] = input[i];
            j++;
        } else LHS[i] = input[i];

    }

    RHS[j] = '\0';

}

int contains(char line[], char contained) {

    for(int i = 0; line[i] != '\0'; i++) {
        if(line[i] == contained)
            return(1);
    }

    return(0);
}

//Paste the "inputStr" to the "destStr" from the index that are given till the end of one of the two
void pasteTheString(char destStr[], char inputStr[], int indexToStart) {
    int i = indexToStart, j = 0;

    while((destStr[i] != '\0') && (inputStr[j] != '\0')) {
        destStr[i] = inputStr[j];
        i++, j++;
    }
}