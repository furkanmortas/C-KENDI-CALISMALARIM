#include<stdio.h>
#include<stdlib.h>

int main ()

{
    float yas;

   printf ("kisinin yasini giriniz\n ");
   scanf ("%f",&yas);

   if (yas >= 18)
   {
       printf("kisi yasal olarak oy kullanabilir");

   }
    else
    {
        printf ("kisinin yasi uygun olamdigi icin yasal olarak oy kullanamaz");
    }

    return 0;
}
