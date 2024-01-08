#include<stdio.h>
#include<stdlib.h>

int main()

{
  float en,boy,yukseklik,hacim;

  printf("havuzumuzun eni boyu ve yuksekligini giriniz\n");
  scanf("%f %f %f",&en,&boy,&yukseklik);

  hacim=en*boy*yukseklik;

  printf("havuzumuz %.2f kadar su alabilir\n",hacim);



    return 0;
}
