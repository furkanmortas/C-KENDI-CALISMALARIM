#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,c;

    printf("birinci dik kenari giriniz\n");
    scanf("%d",&a);

    printf("ikinci dik kenari giriniz\n");
    scanf("%d",&b);

    c=sqrt(a*a+b*b);

    printf("%d",c);
    return 0;

}
