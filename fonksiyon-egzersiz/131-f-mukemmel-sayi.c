#include<stdio.h>
#include<stdlib.h>
//kendisi hari� pozitif tam b�lenlerin toplam� kendisine e�it olan say�lara
//m�kemmel sayi denir.klavyeden girilen ssya�n�n fonk kullanarak yaz�n.

 int mukemmel(int sayi)
 {
   int i=1;
   int toplam=0;

   while(i<sayi)
   {
       if(sayi%i==0)
       {
           toplam=toplam+i;
       }
       i++;
   }
   if(toplam==sayi)
   {
       return 1;
   }
   else
   {
       return 0;
   }

 }

int main()
{
    int sayi;
    int sonuc;
 printf("bir sayi giriniz\n");
 scanf("%d",&sayi);
 sonuc=mukemmel(sayi);
if (sonuc==1)
    {
 printf("mukemmel sayidir");
    }
    else{printf("sayi mukemmel degil");}
 return 0;
}
