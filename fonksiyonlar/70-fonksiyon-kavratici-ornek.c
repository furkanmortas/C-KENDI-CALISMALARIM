#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/* klavyeden girilen iki tamsayýný toplamýný,farkýný,carpýmýný ve bolumunu
gerceklestiren c programýný fonk kullanarak ve kullanmadan yazýnýz*/
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
    printf("yanlýs operator girdiniz");
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


