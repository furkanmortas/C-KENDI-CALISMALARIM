#include<stdio.h>
#include<stdlib.h>
//kullanýcý tarafýndan n elemanlý bir diziye alýnan tamsayýlarýn ort bulunmasýný saglayan fonk
//protipi verilmiþtir .protipi
//ortalama (int *dizim,int boyut4)
int ortalamabul(int *dizim,int boyut)
{
   int toplam=0;
   int i;
   for(i=0;i<boyut;i++)
   {
       toplam=toplam+dizim[i];
   }

   return (float) toplam/boyut;
}




int main()
{
  float ort;
  int n;
  int i;
  printf("kac adet eleman girilecek\n");
  scanf("%d",&n);
  int dizi[n];
  for(i=0;i<n;i++)
  {
      printf("%d. sayi giriniz:\n",i+1);
      scanf("%d",&dizi[i]);
  }
  ort=ortalamabul(dizi,n);
  printf("girdigimiz sayilarin ortalamasi %.3f",ort);

}
