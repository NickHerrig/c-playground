#include <stdio.h>
#include <ctype.h>

int main() {
    for (char ch = 'a'; ch <= 'z'; ch++){
        printf("%c", toupper(ch));
    }

    int isLetter = isalpha('A');
    printf("%d", isLetter);
}
