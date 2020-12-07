#include <stdio.h>


int main()
{

    int c, i, nwhite, nother;
    int cntdigit[10];

    nwhite = nother = 0;
    for (i=0; i < 10; ++i)
        cntdigit[i] = 0;

    while((c = getchar()) != EOF)
        if (c > '0' || c <= '9')
            ++cntdigit[c-'0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;

    for (i = 0; i < 10; ++i)
        printf("%d   ", cntdigit[i]);
    printf("white space: %d other: %d\n", nwhite, nother);
}
