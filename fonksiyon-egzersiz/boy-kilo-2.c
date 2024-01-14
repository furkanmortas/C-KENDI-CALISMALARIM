#include<stdio.h>

int main()
{
    int dizi[10][2];
    int i,j;
    int boytoplam=0,kilotoplam=0;

    for(i=0;i<10;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&dizi[i][j]);
            if(j==0)
            {
                boytoplam=boytoplam+dizi[i][j];
            }
            else
            {
                kilotoplam=kilotoplam+dizi[i][j];
            }
        }
    }
    printf("%d %d ",boytoplam/10,kilotoplam/10);





}
