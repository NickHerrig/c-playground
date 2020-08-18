#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{

    int c, cl, cw, cc, state;
    
    state = OUT;
    cl =  cw =  cc = 0; 
    while ((c = getchar()) != EOF){
        ++cc;
        if (c == '\n')
            ++cl;
        if (c == ' ' || c == '\t' || c == 'n')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++cw;
        }
    }

    printf("Lines: %d  Words: %d Characters %d \n", cl, cw, cc);
}


        
