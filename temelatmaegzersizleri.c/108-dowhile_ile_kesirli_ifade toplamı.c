#include<stdio.h>
#include<stdlib.h>
/*kullanýcýdan pozitfi bir sayý girmesini iste
girdiðin syýnýn karekokunu hesapla
girdiðin sayý negatifse tekrar girmesini iste
girdiðin sayý 0 ise program dursun */

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
