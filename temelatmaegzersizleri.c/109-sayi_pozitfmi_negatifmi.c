#include<stdio.h>
#include<stdlib.h>

/*iki say�n�n �arp�m degerinin pozitifmi  negatifmi oldugunu g�steren
her iki say�dan biri pozitifse �arp�m degeri 0
her iki say� negatif veya pozitifse �arp�m de�eri pozitif
degilse carp�m degeri negatif */
int main()
{
    int a,b;
    printf("lutfen 2 adet sayi giriniz\n");
    scanf("%d %d",&a,&b);

    if(a==0 || b==0)
    {
        printf("carpim degeri  0 dir \n");
    }
    else if((a<0) && (b<0)||(a>0)&&(b>0))
    {
        printf("carpim degeri pozitiftir\n");
    }
    else
    {
        printf("carpim degeri negatiftir.");
    }
    return 0;


}
