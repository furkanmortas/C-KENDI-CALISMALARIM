#include <stdio.h>
#include <stdlib.h>

int main()
{


  /* if(x>y) {

   printf ( "x sayisi y sayisindan buyuktur");
   }
   else
   {
       printf ("x sayisi y sayisindan kucuktur veya esittir");
   } */
  int x ;
  int y ;

  printf ("x sayisini giriniz\n");
  scanf ("%d",&x);

  printf ("y sayisini giriniz\n");
  scanf("%d",&y);

   if(x>y)
    {

   printf ( "x sayisi y sayisindan buyuktur");
   }

   else if (x==y)
    {
  printf ( "x sayisi y sayisina esittir");
   }

   else
   {
       printf ("x sayisi y sayisindan kucuktur");
   }

   return 0;}



