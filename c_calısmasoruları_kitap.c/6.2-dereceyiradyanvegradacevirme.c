#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
    float derece;
    float radyan;
    float grad;



    printf("derece olarak aciyi giriniz\n");
    scanf("%f",&derece);

    radyan= pi*derece/180;
    grad =derece*(10/9);

    printf("radyan:  %f\n",radyan);
    printf("grad: %f\n",grad);
    return 0;
}

