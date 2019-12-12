#include <stdio.h>
#include <stdbool.h>
#include "Parser.h"
#include "A-Instruction.h"
#include "strmap.h"
#include "C-Instruction.h"

const int EMPTY_LINE = 0;
const int A_INST = 1;
const int C_INST = 2;
const int LABEL_DECLARATION = 3;
int lineCurrent = 1;

typedef FILE* p_file;
bool checkInput(int argNumber);
void dispatcher(int instType, char instruction[]);

int main(int argc, char **argv) {
    p_file input = NULL, output = NULL;
    char line[80] = "\0";

    if(checkInput(argc)) {
        setupST(); //Creates the Symbol Table with the predefined values
        input = fopen(argv[1], "r");

        //First scan, used to find and assign memory address to users's label
        while(fgets(line, sizeof(line), input) != NULL) {
            normalizeStrings(line);
            if(determineInstType(line) == LABEL_DECLARATION) {
                labelHandler(line);
            }
        }

        fclose(input);
        input = fopen(argv[1], "r");
        output = fopen(argv[2], "w");

        //Setup the three table needed for C-Instructions translation
        setupInstMap(); setupDT(); setupJT();

        //Second scan used to translate the instructions to binary
        while(fgets(line, sizeof(line), input) != NULL) {
            normalizeStrings(line);
            int type = determineInstType(line);
            dispatcher(type, line);

            //Prints on the file only if useful (means if it's an instruction)
            if((type == A_INST) || (type == C_INST)) {
                fprintf(output, line);
                fprintf(output, "\n");
            }

            lineCurrent++;
        }
    }

    //Incorrect input, error message returned
    else
        printf("Incorrect input, please try again");

    return 0;
}

bool checkInput(int argNumber) {
    if(argNumber == 3)
        return (true);

    else return(false);
    //There's no control over the correct input and output type (.asm, .hack) that is leaved up to the user
}

void dispatcher(int instType, char instruction[]) {
    if(instType == A_INST)
        translateAInst(instruction);

    else if(instType == C_INST)
        translateCInst(instruction);

    else if (instType == EMPTY_LINE || instType == LABEL_DECLARATION)
        strncpy(instruction, "\0", 80);

    else printf("Well a serious error happened at line %d\n", lineCurrent);
}