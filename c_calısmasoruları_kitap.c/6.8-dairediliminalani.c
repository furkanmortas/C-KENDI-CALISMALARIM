#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14

int main()
{
    float r,aci,alan;

    printf("daire diliminin yaricapini giriniz\n");
    scanf("%f",&r);


    printf("derece cinsinden aciyi giriniz\n");
    scanf("%f",&aci);

    alan=(aci*pi*r*r)/360;

    printf("daire diliminin alani :%f",alan);
    return 0;
}
