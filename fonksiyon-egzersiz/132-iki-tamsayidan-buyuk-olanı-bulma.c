#include<stdio.h>
#include<stdlib.h>

int kucukbuyuk(int sayi1,int sayi2)
{
    if(sayi1<sayi2)
    {
      return 1;
    }
    else if(sayi1>sayi2)
    {
        return 0;
    }
    else
    {
        return 2;
    }
}


int main()
{
    int sayi1,sayi2;
    int sonuc;
    printf(" iki adet sayi giriniz\n");
    scanf("%d %d",&sayi1,&sayi2);

   sonuc=kucukbuyuk(sayi1,sayi2);

   if(sonuc==1)
   {
       printf("sayi2 sayi1 den buyuktur\n");
   }
   else if(sonuc==0)
   {
       printf("sayi1 sayi2 den buyuktur\n");

   }

   else
   {
       printf("sayilar esittir");
   }
   return 0;
}
