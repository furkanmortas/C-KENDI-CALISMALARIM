#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a,b;

    printf("iki adet sayi giriniz\n");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf(" a sayisi b sayisindan buyuktur\n");
    }

    else if(b>a)
    {
        printf("a sayisi b sayisindan kucuktur\n");
    }

    else
    {
        printf("sayilar birbirine esittir\n");
    }
    return 0;
}
