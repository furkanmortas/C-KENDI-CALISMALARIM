#include<stdio.h>
#include<stdlib.h>
/*kullan�c�dan pozitfi bir say� girmesini iste
girdi�in sy�n�n karekokunu hesapla
girdi�in say� negatifse tekrar girmesini iste
girdi�in say� 0 ise program dursun */

int main()
{
    float x;

    do
    {
        printf("bir pozitif sayi giriniz\n");
        scanf("%f",&x);
        if(x<0)
        {
            printf("lutfen pozitif bir sayi giriniz\n");
        }
        if(x<0)continue;
        printf("sayimizin karekoku : %f\n",sqrt(x));

    }while(x);



}
