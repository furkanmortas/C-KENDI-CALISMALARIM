#include<stdio.h>
#include<stdlib.h>
/*halinin metrekaresi 40 tl ayrýca
döþemek için 200 tl ekstra iþcilik ücreti alýnýr */

int main()

{
    int metrekare,fiyat;
    printf("dosenecek halinin metrekaresini giriniz\n");
    scanf("%d",&metrekare);

    fiyat=40*metrekare+200;

    printf("odenecek tutar=%d tl ",fiyat);

    return 0;
}
