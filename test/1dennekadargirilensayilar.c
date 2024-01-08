#include<stdio.h>
#include<stdlib.h>
int main()
{ /* kullanýcýdan 1 sayý girmesini isteyiniz 1 den gireceðiniz
sayýya kadar toplamýný for döngüsüyle hesaplayýnýz */

int sayim ;
int i,toplam=0 ;



printf("lutfen bir sayi giriniz\n");
scanf("%d", &sayim);

for(i=1;i<=sayim;i++)

{
toplam= toplam + i ;
}
printf ("toplam:%d",toplam);

return 0;
}




