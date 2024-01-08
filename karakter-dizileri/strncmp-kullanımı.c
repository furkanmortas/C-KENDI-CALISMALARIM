 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int sonuc;
   char furkan[15]="abcdef";
   char mehmet[15]="ABCDEF";

   sonuc=strncmp(furkan,mehmet,4);


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

