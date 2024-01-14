#include<stdio.h>
#include<stdlib.h>
// x ve y sayisi gir ,x ve y yi degistir
//void yerdegistir(int x int y);

void yerdegistir(int x,int y)
{
    int gecici;
 gecici=x;
 x=y;
 y=gecici;

 printf("x: %d, y :%d",x,y);
}

int main()
{
   int x,y,yenix,yeniy;
   printf("x degerini giriniz\n");
   scanf("%d",&x);

   printf("y degerini giriniz\n");
   scanf("%d",&y);
  printf("\nx:%d, y:%d\n",x,y);
   yerdegistir(x,y);



}
