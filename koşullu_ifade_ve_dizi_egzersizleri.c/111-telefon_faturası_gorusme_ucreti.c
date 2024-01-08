#include<stdio.h>
#include<stdlib.h>


int main()
{
    float t;
    float ucret;

    printf("gorusmenin kac dakika oldugunu giriniz\n");
    scanf("%f",&t);

    if(t<=3)
    {
     printf("gorusme ucreti = 0.25 tl ");
    }
    else
    {
     ucret=0.25+(t-3)*(0.08);
     printf("gorusme ucreti= %.4f",ucret);
    }
    return 0;

}
