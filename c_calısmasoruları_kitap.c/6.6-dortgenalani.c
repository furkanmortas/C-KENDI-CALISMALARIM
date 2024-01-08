#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14


int main()

{
    float e,f,aci,alan;

    printf("e kosegenini giriniz\n");
    scanf("%f",&e);


    printf("f kosegenini giriniz\n");
    scanf("%f",&f);

    printf("kosegenler arasinda kalan aciyi giriniz\n");
    scanf("%f",&aci);

    alan=e*f*sin(aci*pi/180)/2;

    printf("dortgenin alani: %f",alan);

    return 0;


}
