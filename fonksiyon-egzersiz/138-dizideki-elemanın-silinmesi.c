#include<stdio.h>
#include<stdlib.h>

//bilgisayar tarafýndan rastgele uretýlen N ader sayi bir dizide tutulmaktadý
//dizi icersiinde istenilen bir degerin dizideki sýra numarasý
//girilerek ilgili sýradaký degerin silinmesini saglayan c kodunu yaz

int kayitsil(int dizi[] ,int sirano ,int n)
{
    int i;
    if(sirano>=n+1)
    {
      printf("gecerli bir sira no giriniz\n");
    }
    else
    {
        for(i=sirano-1;i<n-1;i++)
        {
            dizi[i]=dizi[i+1];
        }
        printf("kayit silindikten sonraki durum:\n ");

        for(i=0;i<n-1;i++)
        {
            printf("%d\n",dizi[i]);
        }
    }
}


int main()
{
    int n;
    int i;
    int sirano;
    printf("kac adet sayi uretilecek\n");
    scanf("%d",&n);

    int dizi[n];
    srand(time(0));
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }

    printf("silinecek degerin sira numarasini giriniz:");
    scanf("%d",&sirano);

    kayitsil(dizi,sirano,n);

}
