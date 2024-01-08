#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14

int main()

{
    float r,alan,hacim;

    printf("kurenin yaricapini giriniz\n");
    scanf("%f",&r);

    alan=4*pi*r*r*r;
    hacim= 4/3*(pi*r*r*r);

    printf("kurenin alani:%f ,kurnein hacmi:%f",alan,hacim);

    return 0;
}
