#include<stdio.h>
#include<stdlib.h>
int main()
{ /* kullan�c�dan 1 say� girmesini isteyiniz 1 den girece�iniz
say�ya kadar toplam�n� for d�ng�s�yle hesaplay�n�z */

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




