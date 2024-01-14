#include<stdio.h>
#include<stdlib.h>

/*kullanýcý  tarafýndan bolunen ve bolen degereleri girilerek bolme islemi yapýlmak
istenmektedir . buna göre verilen protoripi kullanrak bolum ve kalanýn
elde edilmesini saðlayan c programý yazý
void bolmeislem(int bolunen,int bolen)*/

void bolmeislemi(int bolunen,int bolen)
{
    int kalan,sonuc;
   kalan=bolunen%bolen;
   sonuc=bolunen/bolen;

    printf("kalan = %d sonuc = %d",kalan,sonuc);
}

int main()
{
  int bolunen,bolen;

  printf("bolunen ve bolen degerini giriniz\n");
  scanf(" %d %d",&bolunen,&bolen);

  bolmeislemi(bolunen,bolen);
}
