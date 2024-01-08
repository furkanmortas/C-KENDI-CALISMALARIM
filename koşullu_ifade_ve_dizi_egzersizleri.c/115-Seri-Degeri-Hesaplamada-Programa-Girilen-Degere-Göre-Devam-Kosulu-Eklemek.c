#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*bir önceki egzerside vereilen seri hesaplamsýný birden fazla n ve x çiftleri için
hesaplayacak þekilde yeniden yazýn programda her seri hesaplamasýndan
sonra kullancýya devam edilip edilmeyecegýný sorun kullanýcý devam etmek
istiyorsa e veya E girmelidir
diðer karakter giriþlerinde program sonlanmalýdýr. */

int main()
{
    int i,n;
    float x ,seri;
    char devam ;
  do {
    printf("pozitif sayi giriniz:\n");
    scanf("%d",&n) ;
    printf("reel sayi:");
    scanf("%f %c",&x,&devam);

    for(i=1;i<=2*n-1;i+=2)
    {
        seri=seri+i/pow(x,i+1);
    }
        printf("seri= %f\n",seri);


  }while((devam=='e')||(devam=='E'));
}

