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

    printf("birinci kenar� giriniz\n");
    scanf("%d",&a);

    printf("ikinci kenar� giriniz\n");
    scanf("%d",&b);

    printf("iki kenar�n aras�ndaki aciyi giriniz\n");
    scanf("%f",&aci);

    alan=a*b*sin(pi*aci/180)/2;

    printf("alan:%f",alan);

    return 0;


}
