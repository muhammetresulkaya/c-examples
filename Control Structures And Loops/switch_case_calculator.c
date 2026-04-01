#include <stdio.h>

int main() {
    char islem;
    double sayi1, sayi2;

    // Yapýlacak iþlem operatörümüzü seçiyoruz.
    printf("Bir islem secin (+, -, *, /): ");
    scanf("%c", &islem);

    // Yapýlacak iþlem için iki sayý alýyoruz.
    printf("iki adet sayi girin: ");
    scanf("%lf %lf", &sayi1, &sayi2);

    // Seçtiðimiz operatöre göre ilgili case bloðu çalýþýr
    switch (islem) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", sayi1, sayi2, sayi1 + sayi2);
            break; // Bu satýrlardaki brak'leri demezsek altýndaki diðer iþlemleride yapar

        case '-':
            printf("%.1lf - %.1lf = %.1lf", sayi1, sayi2, sayi1 - sayi2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", sayi1, sayi2, sayi1 * sayi2);
            break;

        case '/':
            if (sayi2 != 0)  // Bölme iþleminde 0'a bölünümde hata vericez.
                {
                printf("%.1lf / %.1lf = %.1lf", sayi1, sayi2, sayi1 / sayi2);
            } else {
                printf("Hata");
            }
            break;
    }

    return 0;
}
