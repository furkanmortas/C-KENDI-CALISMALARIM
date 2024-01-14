#include<stdio.h>
int main()
{
    int ogrenci[10][2];
    int ortalamaboy=0;
    int ortalamakilo=0;
    int sayac=0;

    for (int i = 0; i < 10; i++)
    {
        printf("%d ogrencinin boyunu giriniz:",i+1);
        scanf("%d",&ogrenci[i][0]);
        ortalamaboy+=ogrenci[i][0];

    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ogrencinin kilosunu giriniz:",i+1);
        scanf("%d",&ogrenci[i][1]);
        ortalamakilo+=ogrenci[i][1];
    }

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            printf(" %d",ogrenci[i][j]);


        }

    }
    ortalamaboy=ortalamaboy/10;
    ortalamakilo=ortalamakilo/10;
    printf("ortalama boy %d\n",ortalamaboy);
    printf("ortalama kilo %d",ortalamakilo);
    return 0 ;
}
