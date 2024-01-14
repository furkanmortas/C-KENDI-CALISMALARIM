#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*kullan�c� taraf�ndan girilen bir n pozitif tamsay�s�n�n karekokunun bulunmas�n�
saglayan sqrt() kullanmadan fonk kullanrak yaz�n.(A:G�R�LEN SAY�)

K=A/2;
karek�k=Toplam 1 den 50 ye kadar K^2+A/2K*/

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
