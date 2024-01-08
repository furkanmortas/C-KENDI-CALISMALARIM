#include<stdio.h>
#include<stdlib.h>

int main()

{
 int sayi;
 int birlerbas;
 int onlarbas;

  printf("sayiyi giriniz\n");
  scanf("%d",&sayi);

  birlerbas=sayi%10;
  onlarbas=sayi%100/10;

  printf("birler basamagimiz=%d\n",birlerbas);
  printf("onlar basamagimiz=%d",onlarbas);

  return 0;


}
