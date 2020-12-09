#include <stdio.h>
#include <string.h>

int main() {
    char *mestr = "hello me";
    char *youstr = "hello you";

    //length and comparison
    int len = strlen(mestr);
    int cmp = strcmp(mestr, youstr);
    int cmpn = strncmp(mestr, youstr, 3);
    printf("len: %d cmp:%d cmpn: %d \n", len, cmp, cmpn);

    //character occurance return pointer
    char *ocf = strchr(mestr, 'e');
    char *ocl = strrchr(mestr, 'e');
    printf("first occurance e: %s last occurance e: %s \n", ocf, ocl);

    //needle in haystack
    char *needle = strstr(mestr, "me");
    printf("needle pointer: %c the needle: %s \n", *needle, needle);

    //string copy funcs 
    char newme[12];
    strcpy(newme, mestr);
    printf("mestr: %s  newme: %s \n", mestr, newme);
    char newmen[12];
    strncpy(newmen, mestr, 3);
    printf("mestr: %s  newmen: %s \n", mestr, newmen);
    
    //string concatenation funcs
    char newcat[30] = "hello me, ";
    printf("before cat: %s\n", newcat);
    strcat(newcat, youstr);
    printf("after cat: %s\n", newcat);
    char newcatn[30] = "hello me, ";
    printf("before catn: %s\n", newcatn);
    strncat(newcatn, youstr, 5);
    printf("after catn: %s\n", newcatn);

    //character span funcs
    char *digits = "1234567890";
    char *phone = "123-412-2345";
    int nums = strspn(digits, phone);
    printf("Phone has %d unique digits \n", nums);

}
