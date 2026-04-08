//Kendi belirlediğimiz sayılardan pozitif olanları ve negatif olanları ayrı ayrı toplar.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[7]= {-1,3,8,11,-8,-7,5}; //Bu satırda 6indeksli 7 elemanlı bir dizi tanımladım
    int toplam=0; //Burda pozitif toplamlar için bir değişken tanımladım
    int negatiftop=0;//Burda negatif toplamlar için bir değişken tanımladım
    for(int i=0;i<7;i++){
        if(a[i]>0){
        toplam+=a[i];}

        if(a[i]<0){
            negatiftop+=a[i];
        }

    }
    printf("Toplam=%d",toplam);
    printf("\n");
    printf("Negatif Toplam=%d", negatiftop);

    return 0;
}
