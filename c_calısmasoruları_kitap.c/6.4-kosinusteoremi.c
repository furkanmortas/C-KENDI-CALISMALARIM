#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14

int main()

{
    float a,b,aci,c;

    printf("birinci kenari giriniz\n");
    scanf("%f",&a);
     printf("ikinci kenari giriniz\n");
    scanf("%f",&b);
     printf("iki kenar arasindaki aciyi giriniz\n");
    scanf("%f",&aci);

   c=sqrt(a*a+b*b-2*a*b*cos(pi*aci/180));

    printf("%f",c);

    return 0;

}
