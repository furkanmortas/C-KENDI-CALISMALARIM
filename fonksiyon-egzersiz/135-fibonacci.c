#include<stdio.h>
#include<stdlib.h>

//bir say�n�n kendinden onceki sayi ile toplanams� sonuc f�bonacci olusur
//fonksiyon kullanarak klavyeden girilen say� kadar fibonacci uretilen
//kodu yaz�n

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
