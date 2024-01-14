#include<stdio.h>
#include<stdlib.h>

//bir sayýnýn kendinden onceki sayi ile toplanamsý sonuc fýbonacci olusur
//fonksiyon kullanarak klavyeden girilen sayý kadar fibonacci uretilen
//kodu yazýn

int fibonacci(int sayi)
{
   int i;
   int ilk=0;
   int ikinci=1;
   int sonraki;

   printf("uretilecek fibonacci sayilari\n");
  for(i=0;i<sayi;i++)
  {
     if(i<=1)
   {
     sonraki=i;
   }
   else
   {
       sonraki=ilk+ikinci;
       ilk=ikinci;
       ikinci=sonraki;
   }
   printf("%d\n",sonraki);
  }


}




int main()
{
   int sayi;
   printf("kac adet fibonacci sayisi uretilecek\n");
   scanf("%d",&sayi);

   fibonacci(sayi);
   return 0;
}
