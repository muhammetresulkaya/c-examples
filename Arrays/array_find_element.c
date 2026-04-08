#include <stdio.h>

int main() {
    int dizi[7] = {10, 25, 48, 7, 92, 15, 60};
    int i;
    int aranan; // Kullanıcının gireceği sayı için belirlediğimiz değişken.
    int sonuc = 0;

    printf("Aramak istediginiz sayi nedir= ");
    scanf("%d", &aranan); // Kullanıcının girdiği sayıyı scanf ile aranandan aldık

    for (i = 0; i < 7; i++) {
        if (dizi[i] == aranan) {// Kullanıcının girdiği sayı bizim dizimizde varmı onu kontrol ediyorum.
            sonuc = 1;//Bu satırda sonuc 1 çıkarsa kullanıcının girdiği sayı dizide var demektir.
            break;// Bulduysak daha aramaya gerek yok dögüyü bitir.
        }
    }

    if (sonuc == 1) {
        printf("Sonuc: true \n");

    } else {// Eğer döngümü komple gezdim baktım yoksa else devreye girdi false yazdı.
        printf("Sonuc: false\n");
    }

    return 0;
}
