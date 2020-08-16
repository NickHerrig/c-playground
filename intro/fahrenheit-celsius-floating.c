#include <stdio.h>

/* print fahrenheit-celsius table with floating point arithmetic
   for 20, 40, ... 300 */

main() {

    float fahr, celcius;
    int lower, upper, step; 

    lower = 0;
    upper = 300;
    step =  20;

    fahr =  lower;

    printf("Fahrenheit   Celcius\n");
    printf("____________________\n");

    while (fahr <= upper) {
        celcius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.0f \t %10.3f \n", fahr, celcius);
        fahr = fahr + step;
    }
}
