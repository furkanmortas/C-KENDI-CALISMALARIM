#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14

int main()

{
    int a;
    int b;
    float aci;
    float alan ;

    printf("birinci kenarý giriniz\n");
    scanf("%d",&a);

    printf("ikinci kenarý giriniz\n");
    scanf("%d",&b);

    printf("iki kenarýn arasýndaki aciyi giriniz\n");
    scanf("%f",&aci);

    alan=a*b*sin(pi*aci/180)/2;

    printf("alan:%f",alan);

    return 0;


}
