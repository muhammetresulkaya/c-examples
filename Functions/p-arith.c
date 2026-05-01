#include <stdio.h>

int main() {
    int sayi = 42;          // Normal bir tam sayı değişkeni
    int *ptr = &sayi;       // sayi değişkeninin bellek adresini tutan pointer

    printf("--- Degerler ---\n");
    printf("sayi degiskeninin degeri: %d\n", sayi);
    printf("ptr pointer'inin isaret ettigi deger (*ptr): %d\n\n", *ptr);

    printf("--- Bellek Adresleri ---\n");
    // Bellek adreslerini yazdirmak icin %p formati kullanilir
    printf("sayi degiskeninin bellek adresi (&sayi): %p\n", (void*)&sayi);
    printf("ptr pointer'inin icinde tutulan adres (ptr): %p\n", (void*)ptr);

    // Pointer üzerinden orijinal değeri değiştirme
    *ptr = 100;
    printf("\nPointer uzerinden deger 100 yapildi.\n");
    printf("sayi degiskeninin yeni degeri: %d\n", sayi);

    return 0;
}