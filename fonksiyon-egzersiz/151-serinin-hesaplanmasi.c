#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* asagýda verilen serinin hesaplayan c programýný fonksiyon olarak yaz*/
//1^2+2^2+3^2+4^2
int seritoplam(int n)
{
    int i;
    int toplam=0;
    for(i=1;i<=n;i++)
    {
        toplam=toplam+pow(i,2);
    }
    return toplam;

}



int main()
{
 int n;
 printf("n degerini girin\n");
 scanf("%d",&n);
 printf("serinin toplami: %d ",seritoplam(n));
}
