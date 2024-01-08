#include<stdio.h>
#include<stdlib.h>

/*iki sayının çarpım degerinin pozitifmi  negatifmi oldugunu gösteren
her iki sayıdan biri pozitifse çarpım degeri 0
her iki sayı negatif veya pozitifse çarpım değeri pozitif
degilse carpım degeri negatif */
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
