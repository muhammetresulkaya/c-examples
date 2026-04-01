#include <stdio.h>

int main()
{
    int i, j;    //Burada 2 deðiþken aldým i ve j, i benim satýrlarýmý tutacak ,j ise her satýrda kaç yýldýz çizeceðimi tutacak.
    for(i=1;i<=5 ;i++)//Bu satýrda ise i'yi birden alýp for döngüsü ile 5 satýr aþaðýya indiriyorum .
    {
        for(j=1;j<=i;j++)//Bu satýrda ise j, i'nin satýr numarasý kadar yýldýz çizdiriyoruz.
        {
            printf("*");//Bu basamakta print olacak sekilimizi belirtiyoruz.
        }
        printf("\n");// Bu satýrda kodumuz döngüden çýktýktan sonra bir satýr boþluk býrakýyor.
    }
    return 0;
}
