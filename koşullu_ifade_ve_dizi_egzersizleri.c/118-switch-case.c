#include<stdio.h>
#include<stdlib.h>
#define vergi_kitap 4.0
#define vergi_temelgida 5.6
#define vergi_luks 19.6
#define kitap 0
#define temelgida 1
#define luks 2

int main()
/*7{
   int kod;
   float fiyat;

   printf("urunun fiyatini giriniz\n");
   scanf("%f",&fiyat);

   printf("urunun kodunu giriniz\n");
   scanf("%d",&kod);

   printf("urunumuzun satis fiyati :");

   switch(kod)
   {
    case kitap : printf("fiyat=%f",fiyat+fiyat*vergi_kitap/100);
    break;
    case temelgida : printf("fiyat=%f",fiyat+fiyat*vergi_temelgida/100);
    break;
   case luks : printf("fiyat=%f",fiyat+fiyat*vergi_luks/100);
    break;
    default : printf("lutfen dogru bir kod girin\n");
   }
}*/
{
    int kod ;
    float fiyat;

    printf("urunun fiyatini ve kodunu  giriniz\n");
    scanf("%f %d",&fiyat,&kod);

    if(kod==kitap)
    {
        printf("fiyat=%f",fiyat+fiyat*vergi_kitap/100);
    }
    else if(kod==temelgida)
    {
        printf("fiyat=%f",fiyat+fiyat*vergi_temelgida/100);
    }
    else if(kod==luks)
    {
        printf("fiyat=%f",fiyat+fiyat*vergi_luks/100);
    }
    else
    {
        printf("yanlis kod girdiniz");
    }

}
