#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a,b,c;
    int min,max;

    printf("lutfen 3 adet sayi giriniz\n");
    scanf("%d%d%d",&a,&b,&c);

    max=a;

    if(b>max)
    {
        max=b;
    }
    if(c>max)
    {
        max=c;
    }

    printf("maximum deger : %d\n ",max);



    min=a;

    if(b<min)
    {
        b=min;

    }
    if(c<min)
    {
        c=min;
    }

    printf("minimum deger : %d\n",min);

    return 0;
}
