#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*iki boyutlu bir dizi olusturun
dizinin elemanlarý :bir iki uc dort ve bes olsun
dizinin 4. elemanýn 3. karakterini bastrýn */

int main()
{
  char can[100][100]={"bir","iki","uc","dort","bes"};

  printf("dizimin dorduncu elemani : %s\n",can[3]);
  printf("dizimin dorduncu elemaninin ucuncu karakteri: %c",can[3][2]);


  return 0;

}
