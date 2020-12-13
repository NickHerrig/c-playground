#include <stdio.h>

int main () {
    int n = 1;
    if ( *(char *)&n ==1) {
        printf("Little Endian\n");
    } else {
        printf("Big Endian\n");
    }
}
