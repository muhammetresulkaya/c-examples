//kullanıcıdan alınan sayıları büyükten küçüğe yazdırma.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5];

    printf("Bes Sayi Giriniz. \n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

         for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("\n");

    for(int j=4;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}
