#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*bir pozitif tamsayý olan n degeri ile bir reel sayý olan x degerini
girdi olarak alan
1/x^2+3/x^4+5/x^6+7/x^8+........+2n-1/x^2n serisini hesapla */


int main()
{
  int n;
  int i ;
  float x,seri;

  printf("pozitif sayi giriniz\n");
  scanf("%d",&n);

  printf("reelsayi giriniz :\n");
  scanf("%f",&x);

  for (i=1;i<=2*n-1;i+=2)
  {
    seri=seri+i/pow(x,i+1);
  }
  printf("seri = %f",seri);
  return 0;


}

