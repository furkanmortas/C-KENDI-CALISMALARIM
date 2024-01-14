#include<stdio.h>

//klavyeden girilen sayýnýn faktoriyelini bulma

int fak(int sayi)
{
  int i;
  int sonuc=1;

  for(i=1;i<=sayi;i++)
  {
      sonuc=sonuc*i;
  }

 return sonuc;
}



int main()
{
    int sayi;

    printf("sayi gir\n");
    scanf("%d",&sayi);

    printf("sayinin faktoriyeli =%d",fak(sayi));

}
