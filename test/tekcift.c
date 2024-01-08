#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x;

    printf("bir adet sayi giriniz\n");
    scanf("%d",&x);

    if (x%2 == 0)
   {
      printf("%d sayisi cift sayidir",x) ;

    }
    else
    {
        printf ("%d sayisi tek sayidir", x);

    }
    return 0;
}
