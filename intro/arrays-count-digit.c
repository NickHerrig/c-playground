#include <stdio.h>


main()
{

    int c, i, cntwhite, cntother;
    int cntdigit[10];

    cntwhite = cntother = 0;
    for (i=0; i < 10; ++i)
        cntdigit[i] = 0;

    while((c = getchar()) != EOF)
        if (c > '0' || c <= '9')
            ++cntdigit[c-'0'];

    for (i = 0; i < 10; ++i)
        printf("%d   ", cntdigit[i]);
}
