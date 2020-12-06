/*
  Author: Nick Herrig
  ----
  Input: None
  Output: Prints crew changes for 31 days
  Purpose: Displays integer overflow bug in airline systems
           https://arstechnica.com/uncategorized/2004/12/4490-2/
*/

#include <stdio.h>  // for printf
#include <unistd.h> // for

int main(int args, char *argv[]) {
    short crewChanges = 0;

    for (int i = 0; i < 31; i++) {
        crewChanges += 1200;
        printf("Crew changes for day %d: %d\n", i, crewChanges);
    }

    return 0;
}
