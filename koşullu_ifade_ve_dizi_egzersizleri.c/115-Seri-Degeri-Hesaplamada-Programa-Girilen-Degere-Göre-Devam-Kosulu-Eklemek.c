#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*bir �nceki egzerside vereilen seri hesaplams�n� birden fazla n ve x �iftleri i�in
hesaplayacak �ekilde yeniden yaz�n programda her seri hesaplamas�ndan
sonra kullanc�ya devam edilip edilmeyeceg�n� sorun kullan�c� devam etmek
istiyorsa e veya E girmelidir
di�er karakter giri�lerinde program sonlanmal�d�r. */

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

