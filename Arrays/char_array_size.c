#include <stdio.h>

int main() {
    char a[5] = {'R','E','S','U','L'}; //5 karakterli bir dizi oluşturdum.
    int c;

    printf("Ilk harf: %c\n", a[0]); // Dizimizin ilk harfi 0.elemanı yazdırıyoruz

    c = (sizeof(a)) / (sizeof(a[0])); // sizeof(a) tüm dizinin kapladığı alanı verir, sizeof(a[0]) bir elemanın boyutunu verir, bölerek kaç eleman olduğunu buluyorum.

    printf("Dizinin eleman sayisi: %d\n", c);//Dizimin kaç eleman olduğunu yazdırır.

    return 0;
}
