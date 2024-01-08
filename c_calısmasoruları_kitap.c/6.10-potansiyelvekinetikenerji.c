#include<stdio.h>
#include<stdlib.h>

int main()

{
    float m,v,h,pot,kin;

    printf("maddenin kutlesini giriniz\n");
    scanf("%f",&m);

    printf("maddenin hizini giriniz\n");
    scanf("%f",&v);

    printf("maddenin yuksekligini giriniz\n");
    scanf("%f",&h);

    pot=m*9.8*h;
    kin=(m*v*v)/2;

    printf("potansiyel enerji: %f kinetik enerji:%f",pot,kin);
    return 0;

}


