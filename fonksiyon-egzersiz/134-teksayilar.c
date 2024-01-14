#include<stdio.h>
#include<stdlib.h>

int teksayi(int sayi)

{
  int i;
  for(i=0;i<=sayi;i++)
  {

      if(i%2==1)

      {
          printf(" %d\n",i);
      }

  }
}
int main()
{
    int sayi;
    printf(" pozitif bir sayi girin\n");
    scanf("%d",&sayi);

    teksayi(sayi);
    return 0;
}

