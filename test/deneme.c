#include<stdio.h>
int main()
{
  int ilksayi;
  int ikincisayi;
  char basharf;

  printf("lutfen ilk sayiyi giriniz\n");
  scanf("%d",&ilksayi);

  printf("lütfen ikinci sayiyi giriniz\n");
  scanf("%d",&ikincisayi);

  printf("lutfen isminizin bas harfini giriniz\n");
  scanf(" %c",& basharf );

  printf("ilk sayi: %d, ikinci sayi: %d , bas harf %c",ilksayi,ikincisayi,basharf);
    return 0;
}
