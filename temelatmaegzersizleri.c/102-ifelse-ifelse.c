#include<stdio.h>
#include<stdlib.h>
/*kullanýcýdan pozitif bir tamsayý girdi olarak alýp
bu sayýnýn 13 ve veya 17 ye bölünüp bölünmediðini bularak mesaj ile belirtin */
int main()
{
  int sayi;

  printf("bir adet sayi giriniz\n");
  scanf("%d",&sayi);

  if(sayi%13==0 && sayi%17==0)
  {
      printf("sayi hem 13 e hem 17 ye tam bolunur\n");

  }
  else if(sayi%13==0)
  {
      printf("sayi 13 e tam bolunur\n");
  }
  else if(sayi%17==0)
  {
      printf("sayi 17 ye tam bolunur\n");
  }
  else
  {
      printf("sayi 13 e ve 17 ye tam bolunmez\n");
  }
  return 0;
}
