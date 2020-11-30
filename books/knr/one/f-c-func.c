#include <stdio.h>

/* print fahrenheit-celsius table with floating point arithmetic
   for 20, 40, ... 300 */

int convert(float f);

int convert(float fahrenheit)
{
    float celcius;
    celcius = (5.0 / 9.0) * (fahrenheit - 32.0);
    return celcius;
}

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
        celcius = convert(fahr); 
        printf("%6.0f \t %10.3f \n", fahr, celcius);
        fahr = fahr + step;
    }
}
