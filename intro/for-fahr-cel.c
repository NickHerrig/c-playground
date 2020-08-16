#include <stdio.h>

/* print fahrenheit-celsius table with floating point arithmetic
   for 20, 40, ... 300 */

main() {

    float fahr;

    printf("Fahrenheit   Celcius\n");
    printf("____________________\n");

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%6.0f \t %10.2f \n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
