#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*sonuc dogruysa 1 degerini verir asc� tablsoundak� say�sal degerine gore
kars�last�rma yapar */
int main()
{
    int sonuc;
   char furkan[15]="abcdef";
   char mehmet[15]="ABCDEF";

   sonuc=strcmp(furkan,mehmet);


   if(sonuc<0)
   {
       printf("furkan mehmet ten dah kucuktur\n");

   }
   else if(sonuc >0)
   {
      printf("furkan mehmet ten daha buyuktur\n");
   }
   else
   {
       printf("ikiside birbirine esittir\n");
   }

   return 0;

}
