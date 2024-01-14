#include<stdio.h>
#include<stdlib.h>

int floyducgen(int satir)
{
    int i=1;
    int j;
    int a=1;

    while(i<=satir)
    {
        j=1;
        while(j<=i)
        {
            printf("%3d",a);
            a++;
            j++;
        }
        printf("\n");
        i++;


    }




}





int main()
{
    int satir;
    printf("satir sayisini giriniz\n");
    scanf("%d",&satir);

    floyducgen(satir);
}
