#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    char temp;

    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char text[] = "merhaba";

    reverseString(text);
    printf("Ters hali: %s\n", text);

    return 0;
}