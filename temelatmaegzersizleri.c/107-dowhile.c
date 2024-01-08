#include<stdio.h>
#include<stdlib.h>
/*kullanýcýya bir n degeri girmesini iste
1+1/2+1/3+1.....1/n degerini hesapla */
int main()
{
  int n;
  int i;
  float sonuc ;

  do
  {
   printf(" n degerini giriniz\n");
  scanf("%d",&n);

  } while(n<1);


  for(i=1;i<=n;i++)
  {
      sonuc =sonuc+(float)1/i;
  }
  printf("sonucumuz = %f",sonuc );

return 0;

}
