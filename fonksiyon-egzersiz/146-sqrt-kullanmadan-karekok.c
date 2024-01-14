#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*kullanýcý tarafýndan girilen bir n pozitif tamsayýsýnýn karekokunun bulunmasýný
saglayan sqrt() kullanmadan fonk kullanrak yazýn.(A:GÝRÝLEN SAYÝ)

K=A/2;
karekök=Toplam 1 den 50 ye kadar K^2+A/2K*/

double karekokbul(double n)
{
    double karekok;
    int i;
    if(n>0.0)
    {
      karekok=n/2;
      for(i=0;i<50;i++)
      {
          karekok=((karekok*karekok)+n)/(2*karekok);
      }
      return karekok;
    }
    else if(n==0)
    {
        return 0;

    }
    else
    {
        printf("lutfen gecerli deger giriniz\n");
    }
}




int main()
{
    double sayi;

    printf("karekoku alinacak sayiyi girin\n");
    scanf("%lf",&sayi);
    printf("%lf karekoku =%.5lf\n",sayi,karekokbul(sayi));



    return 0;

}
