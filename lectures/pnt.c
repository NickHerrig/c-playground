#include <stdio.h>
#include <string.h>

int main() {

    char buf[strlen("Nicholas") + 1];
    strcpy(buf, "Nizzzlas");
    printf("%s\n", buf);

    char *mid = buf + 2;
    strncpy(mid, "cho", 3);
    printf("%s\n", buf);
}
