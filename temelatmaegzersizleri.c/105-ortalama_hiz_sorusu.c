#include<stdio.h>
#include<stdlib.h>
#define yol 450

int main()

{
    float saat,ortalamahiz;


    printf("arabanin ankaradan istanbula kac saatte vardigini giriniz\n");
    scanf("%f",&saat);

    ortalamahiz=yol/saat;

    printf("ortalama hiz = %.2f",ortalamahiz);


}
