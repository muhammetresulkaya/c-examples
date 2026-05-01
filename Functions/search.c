#include <stdio.h>

// Aranan elemanı bulursa indeksini, bulamazsa -1 döndürür
int elemanBul(int dizi[], int boyut, int aranan) {
    for (int i = 0; i < boyut; i++) {
        // Eğer mevcut eleman aradığımız değere eşitse
        if (dizi[i] == aranan) {
            return i; // Bulunduğu indeksi geri gönder ve fonksiyondan çık
        }
    }
    
    // Döngü bittiğinde hala hiçbir şey dönmediyse, eleman dizide yoktur
    return -1; 
}

int main() {
    int sayilar[] = {15, 42, 8, 99, 23, 7, 56};
    
    // Dizinin boyutunu hesaplıyoruz (önceki kuralı hatırlayın)
    int boyut = sizeof(sayilar) / sizeof(sayilar[0]);
    
    int arananDeger = 23;
    
    // Fonksiyonu çağırıyoruz
    int sonuc = elemanBul(sayilar, boyut, arananDeger);
    
    // Sonucu kontrol ediyoruz
    if (sonuc != -1) {
        printf("Aranan %d degeri dizinin %d. indeksinde bulundu.\n", arananDeger, sonuc);
    } else {
        printf("Aranan %d degeri dizide bulunamadi.\n", arananDeger);
    }
    
    // Olmayan bir değeri arayalım
    int olmayanDeger = 100;
    int sonuc2 = elemanBul(sayilar, boyut, olmayanDeger);
    
    if (sonuc2 != -1) {
        printf("Aranan %d degeri dizinin %d. indeksinde bulundu.\n", olmayanDeger, sonuc2);
    } else {
        printf("Aranan %d degeri dizide bulunamadi.\n", olmayanDeger);
    }

    return 0;
}