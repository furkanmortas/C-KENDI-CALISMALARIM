#include<stdio.h>
#include<stdlib.h>

int ikisayitoplam(int sayi1,int sayi2)
{
    int toplam;
    toplam=sayi1+sayi2;
    return toplam;
}




int main()
{
    int sayi1,sayi2;
    int toplam;

    printf("iki adet sayi giriniz\n");
    scanf("%d %d",&sayi1,&sayi2);

    ikisayitoplam(sayi1,sayi2);

    printf("sayilarin toplami = %d",ikisayitoplam(sayi1,sayi2));
    return 0;
}
