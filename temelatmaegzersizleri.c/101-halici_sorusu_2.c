#include<stdio.h>
#include<stdlib.h>

int main()

{
    char kod;
    float alan,ucret=0;

    printf("hali tipi T B S seciniz\n ");
    scanf("%c",&kod);

    printf("lutfen alani giriniz\n");
    scanf("%f",&alan);

    if(kod=='T')
    {
      ucret=alan*18;
    }
    else if(kod=='B')
    {
        ucret=alan*17;
    }
    else if (kod=='S')
     {
        ucret=alan*19;
    }
    else
    {
        printf("kod dogru degil");
    }
    printf("odenmesi gereken ucret %.2f",ucret);


    return 0;
}
