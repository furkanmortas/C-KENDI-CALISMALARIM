#include<stdio.h>
#include<stdlib.h>
/*halinin metrekaresi 40 tl ayr�ca
d��emek i�in 200 tl ekstra i�cilik �creti al�n�r */

int main()

{
    int metrekare,fiyat;
    printf("dosenecek halinin metrekaresini giriniz\n");
    scanf("%d",&metrekare);

    fiyat=40*metrekare+200;

    printf("odenecek tutar=%d tl ",fiyat);

    return 0;
}
