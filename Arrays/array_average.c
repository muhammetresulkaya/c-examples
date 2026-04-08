//Dizideki sayıların ortalamasını alan programım
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5]={10,15,20,25,30};
    int toplam=0;
    for(int i=0;i<5;i++){
        toplam+=a[i];
    }
    int length= (sizeof(a)/sizeof(a[0]));
    int ortalama= (toplam/length);
    printf("Ortalama= %d\n",ortalama);
    return 0;
}
