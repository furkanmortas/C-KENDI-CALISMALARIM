#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*kenar uzunluklar� birbirinden farkl� eskenar bir �cgenin
alan�n�n bulunmas�n� saglayan c program�n� fonk kullnarak yazd�r
u=(a+b+c)/2
alan^2=u*(u-a)*(u-b)*(u-c)
*/



float alan(int A,int B,int C)

{
   float u;
   float alan;
   u=(A+B+C)/2;
   alan=sqrt(u*(u-A)*(u-B)*(u-C));
   return alan;
}
int main()
{
    int a,b,c;


    printf("a,b,c kenarlarini girin\n"),
    scanf("%d %d %d",&a,&b,&c);
    printf("eskenar ucgenin alani= %.2f",alan(a,b,c));
    return 0;

}

