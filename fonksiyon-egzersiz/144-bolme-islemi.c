#include<stdio.h>
#include<stdlib.h>

/*kullan�c�  taraf�ndan bolunen ve bolen degereleri girilerek bolme islemi yap�lmak
istenmektedir . buna g�re verilen protoripi kullanrak bolum ve kalan�n
elde edilmesini sa�layan c program� yaz�
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
