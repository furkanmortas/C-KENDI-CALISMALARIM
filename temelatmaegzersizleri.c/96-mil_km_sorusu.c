#include<stdio.h>
#include<stdlib.h>

int main()
{
  int mil;
  int km;

  printf("mil cinsinden degeri giriniz\n");
  scanf("%d",&mil);

  km=1.609*mil;

  printf("km=%d",km);
  return 0;
}
