#include <stdio.h>

int main () {

char r[5] = {'R','E','S','U','L'};//Bu satırımızda 5 karakterli bir dizi belirlediğimi söylüyorum.

for (int i=0; i<5; i++) { //Burada ise for döngümle 0.elemandan başlayıp 4.elemana kadar elemanlarımı alıyorum.
   printf("%c\n", r[i]); //Bu satırımda printf ile r dizimin elemanlarını \n ile alt alta yazdırıyorum.
}
return 0; // Program başarıyla tamamlandı sinyali veriyor.
}
