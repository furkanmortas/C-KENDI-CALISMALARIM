#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x;
   int y;
   int z;

   printf (" x sayisini giriniz\n");
   scanf ("%d",&x);

   printf (" y sayisini giriniz\n");
   scanf ("%d",&y);

   printf (" z sayisini giriniz\n");
   scanf ("%d",&z);

    if (x>y && x>z)
    {
        printf ("x sayisi en buyuk sayidir");
    }
    else if (y>x && y>z)
    {
    printf ("y sayisi en buyuk sayidir");
    }


    else if(z>x && z>y)
    {
        printf ("z sayisi en buyuk sayidir");
    }

    else
    {
        printf ("butun sayilar birbirine esittir");

    }
return 0;
}
