#include<stdio.h>
#include<stdlib.h>

float dortislem(int sayi1,int sayi2,char islem)
{
float sonuc;
 if(islem=='+')
 {
   return sonuc=sayi1+sayi2;
 }
 else if(islem=='-')
 {
     return sonuc=sayi1-sayi2;
 }
 else if(islem=='*')
 {
    return sonuc=sayi1*sayi2;

 }
 else if(islem=='/')
 {
     return sonuc=sayi1/sayi2;
 }
 else
 {
     printf("yanlis operator sectiniz\n");
 }

}




int main()
{
    int sayi1,sayi2;
    char islem;
    printf("islem tipini seciniz (+,-,*,/)\n");
    scanf("%c",&islem);

    printf("iki adet tam sayi giriniz\n");
    scanf("%d %d",&sayi1,&sayi2);


    printf("isleminizin sonucu = %.2f",dortislem(sayi1,sayi2,islem));
    return 0;

}
