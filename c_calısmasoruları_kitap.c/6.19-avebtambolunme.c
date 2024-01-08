#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;

   printf("a sayisini giriniz\n");
   scanf("%d",&a);


   printf("b sayisini giriniz\n");
   scanf("%d",&b);

   if (a%b==0)
   {
       printf("a sayisi b sayisina tam bolunur\n");

   }

   else
   {
       printf("a sayisi b sayisina tam bolunmez\n");
   }
    return 0;
}

