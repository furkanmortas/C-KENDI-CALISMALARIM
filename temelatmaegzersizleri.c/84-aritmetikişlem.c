#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;

    printf("lutfen a b c ve x degerlerini giriniz\n");
    scanf("%d%d%d%d",&a,&b,&c,&x);

    printf("ax^2+bx+c degerim=%d ",a*x*x+b*x+c);


   return 0;
}
