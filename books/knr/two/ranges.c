#include <stdio.h>
#include <limits.h>


int main(void){
    printf("The ranges for char are %d through  %d \n", CHAR_MIN, CHAR_MAX);
    printf("The ranges for short are %d through  %d \n", SHRT_MIN, SHRT_MAX);
    printf("The ranges for int are %d through  %d \n", INT_MIN, INT_MAX);
    printf("The ranges for long are %ld through  %ld \n", LONG_MIN, LONG_MAX);
}
