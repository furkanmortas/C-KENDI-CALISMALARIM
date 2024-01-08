#include<stdio.h>
#include<stdlib.h>
#define pi 3.141

int main()

{
 float r;
 float alan;

 printf("dairenin yaricapini giriniz\n");
 scanf("%f",&r);

 alan=pi*r*r;

 printf("dairenin alani=%.3f",alan);

 return 0;

}
