//Kulanıcıdan alınan sayılardan en büyük olanı yazan program.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[5];
    int max;

    printf("Bes sayi giriniz. \n");
    for( int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    max=arr[0];

    for(int i=0;i<5;i++){
      if(arr[i]>max){
        max=arr[i];

    }
}
printf("En Buyuk Sayi:%d",max);
    return 0;
}
