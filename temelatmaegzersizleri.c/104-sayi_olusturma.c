#include<stdio.h>
#include<stdlib.h>
/* tek haneli 3 sayi olan x y z  girdi oalrak alan ve
y�zler basamag�na x onlar basamag�na y ve birler basamag�na z koyan
ve sonunda say�y� bulan program� yaz�n�z*/

int main()

{
    int x,y,z,sayi;

    printf("x y z sayilarini giriniz\n");
    scanf("%d %d %d",&x,&y,&z);

    sayi= x*100+y*10+z*1;

    printf("sayi= %d",sayi);

    return 0;

}
