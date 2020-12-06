/*
 * Inputs: command line arguments 
 * Outputs: command line arguments
 * Purpose: This program takes command line arguments and prints them to std out.
*/

#include <stdio.h>

int main(int args, char *argv[]) {
    printf("Arguments %d\n", args);
    
    for (int i = 0; i < args; i++) {
        printf("argument number %d, value: %s \n", i, argv[i]);
    }
}
