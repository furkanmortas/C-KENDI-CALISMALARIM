#include<stdio.h>
#include<stdlib.h>
/* kullanýcýnýn girdiði bir n sayýsýnýa kadar olan tüm sayýlarýn
toplamýný veren c kodunu yazýnýz */
int main()

{
    int a,i,sonuc;



    printf("lutfen bir adet sayi giriniz\n");
    scanf("%d",&a);
    i=1;
    sonuc=0;
    while(i<=a)
    {
      if(i==a)
      {
          printf("%d",a);
      }
      else
      {
          printf("%d+",i);
      }
       sonuc=sonuc+i;
        i++;
    }

    printf("=%d ",sonuc);

    return 0;
}
