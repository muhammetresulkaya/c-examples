#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Palindrom ise true (1), degilse false (0) dondurur
bool isPalindrome(char metin[]) {
    int bas = 0;
    int son = strlen(metin) - 1;

    while (bas < son) {
        if (metin[bas] != metin[son]) {
            return false; // Eslesmeyen ilk karakterde false dondur ve cik
        }
        bas++;
        son--;
    }
    return true; // Tum karakterler eslesti
}

int main() {
    char kelime1[] = "kayak";
    char kelime2[] = "araba";

    if (isPalindrome(kelime1)) printf("%s bir palindromdur.\n", kelime1);
    else printf("%s bir palindrom degildir.\n", kelime1);

    if (isPalindrome(kelime2)) printf("%s bir palindromdur.\n", kelime2);
    else printf("%s bir palindrom degildir.\n", kelime2);

    return 0;
}