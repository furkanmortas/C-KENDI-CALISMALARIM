#include <stdio.h>
#include <stdlib.h>

int main()
{
   float m,ma,mol;

   printf("maddenin kutlesini giriniz\n");
   scanf("%f",&m);

   printf("maddenin molekul agirligini giriniz\n");
   scanf("%f",&ma);

   mol=m/ma;

   printf("%.2f",mol);

    return 0;
}

