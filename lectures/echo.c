/*
   Inputs: command line arguments
   Outputs: command line arguments
   Purpose: This program resembles the unix util "echo"
*/

#include <stdio.h> // for printf

int main(int args, char *argv[]) {
    for (int i = 1; i < args; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");
}
