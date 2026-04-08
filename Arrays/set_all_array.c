#include <stdio.h>

int main()
{

    int a[5]; // 5 elemanlı bir dizi oluşturdum

    for (int i = 0; i < 5; i++)  // Dizinin tüm elemanlarını sırayla gezdiriyoruz
    {
        a[i] = 34; // Dizinin tüm elemanlarını sırayla işleyip 34 ile değiştiriyoruz
    }
    for (int i = 0; i < 5; i++) // Diziyi sırayla okuyup ekrana yazdır
    {
        printf("%d\n", a[i]); // Her elemanı ekrana yazdır, \n ile alt satıra geçir

    }
    return 0;
}
