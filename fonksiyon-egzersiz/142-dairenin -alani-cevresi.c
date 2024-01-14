#include<stdio.h>
#include<stdlib.h>
#define PI 3.14


void hesapla(float r)
{ float alan,cevre;
    alan=PI*r*r;
    cevre=2*PI*r;

    printf("alan= %.2f\n",alan);
    printf("cevre= %.2f",cevre);
}
int main()
{
    float r;
    printf("dairenin yaricapini giriniz\n");
    scanf("%f",&r);

    hesapla(r);
}
