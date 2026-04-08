#include <stdio.h>
#include <stdlib.h>

int main() {
    int toplam = 0;
    int r[7] = {10, 20, 30, 40, 50, 60, 70};//Bu satırda dizideki elemanları tanımladık

    for(int i = 0; i < 7; i++) { //Bu satırda dizimdeki 0.elemandan itibaren 6.elemana kadar olan elamanları aldım.
        toplam += r[i]; //Sırasıyla elamanlarımızı alıp topluyoruz.
    }
    printf("Toplam = %d", toplam); //Toplamı ekrana yazıyor bu satırımızda.
    return 0;
}
