#include<stdio.h>
#include<stdlib.h>
#define tavhiz 0.038
#define kushiz 0.012

int main()

{
    int yil=0;
    float tavsan=1042,kus=2272;

    while(tavsan<kus)
    {
       tavsan+=tavhiz*tavsan;
       kus+=kushiz*kus;
       yil++;

       printf("%d. yil: tavsan=%d  kus=%d \n",yil,(int)tavsan,(int)kus);
    }
    printf("Tavsanlar kuslari %d. yilda gecer",yil);
}

