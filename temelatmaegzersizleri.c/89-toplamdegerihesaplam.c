#include<stdio.h>
#include<stdlib.h>
/* kullan�c�n�n girdi�i bir n say�s�n�a kadar olan t�m say�lar�n
toplam�n� veren c kodunu yaz�n�z */
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
