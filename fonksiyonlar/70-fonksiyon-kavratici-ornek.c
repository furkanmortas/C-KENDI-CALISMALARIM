#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* klavyeden girilen iki tamsay�n� toplam�n�,fark�n�,carp�m�n� ve bolumunu
gerceklestiren c program�n� fonk kullanarak ve kullanmadan yaz�n�z*/
float dortislem(float sayi1 ,float sayi2 ,char islem )
{ if(islem== '+')
{
  return sayi1+sayi2;
}
else if (islem== '-')
{
  return sayi1-sayi2;
}
else if (islem== '*')
{
   return sayi1*sayi2 ;
}
else if (islem== '/')
{
   return sayi1/sayi2 ;
}
else
{
    printf("yanl�s operator girdiniz");
}
}



int main()
{
float sayi1,sayi2;
char islem;


printf(" hangi islemi yapmak istiyorsunuz ( + - * /)\n ");
scanf("%c",&islem);

printf("lutfen iki adet sayi giriniz \n");
scanf("%f %f",&sayi1,&sayi2);

printf("islemin sonucu %.2f",dortislem(sayi1,sayi2,islem));




}


