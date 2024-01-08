#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    int dizi1[3][4]={{1,2,5,7},{5,4,8,6},{7,1,6,5}};
    int dizi2[3][4]={{3,5,8,9},{7,6,3,2},{4,2,5,9}};
    int toplam[3][4];


    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
          toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }

        }
         for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
         printf("%4d",toplam[i][j]);
        }
        printf("\n");

        }
    return 0 ;

}

