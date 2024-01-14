#include<stdio.h>
#include<stdlib.h>

/*kullanıcı tarafından saniye olarak girilen bir degerin
saat:dakika:saniye(hh:mm:ss)formatında donusturulmus halini fonk kullanrak yaz*/
int hesaplama(int saniye)
{
    int saat,dakika,sn,zaman;

    saat=saniye/3600;
    zaman=saniye%3600;
    dakika=zaman/60;
    sn=zaman%60;

    printf("%dsaat:%ddakika:%dsaniye",saat,dakika,sn);



}

int main()

{
    int saniye;

    printf("saniye olarak degeri giriniz\n");
    scanf("%d",&saniye);

    hesaplama(saniye);
}
