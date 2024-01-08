#include<stdio.h>
#include<stdlib.h>

int main()

{
    int x,y,z,ortalama;

    printf("x,y,z sayilarini giriniz\n");
    scanf("%d %d %d",&x,&y,&z);

    ortalama=(x+y+z)/3;

    printf("ortlama deger = %d",ortalama);

    return 0;

}
