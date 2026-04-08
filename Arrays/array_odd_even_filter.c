//Kullanıcının belirlediği sayıların çift mi tek mi olduğunu yazdıran program.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            printf("cift= %d\n",a[i]);
        }
       if(a[i]%2==1){
            printf("tek = %d\n",a[i]);
        }

    }

    return 0;
}
