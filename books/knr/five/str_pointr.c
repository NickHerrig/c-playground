#include <stdio.h>
#include <string.h>

void updateStr(char *str){
   str[0] = ' '; 
   str[1] = ' '; 
   str[2] = 'b'; 
   str[3] = 'y'; 
   str[4] = 'e'; 
}

int main(){

    char mystr[15] = "hello world";
    printf("%s\n", mystr);
    int len = strlen(mystr);
    printf("%d\n", len);

    updateStr(mystr);
    printf("%s\n", mystr);
    len = strlen(mystr);
    printf("%d\n", len);
    
    
}
