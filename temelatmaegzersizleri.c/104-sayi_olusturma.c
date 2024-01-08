#include<stdio.h>
#include<stdlib.h>
/* tek haneli 3 sayi olan x y z  girdi oalrak alan ve
yüzler basamagýna x onlar basamagýna y ve birler basamagýna z koyan
ve sonunda sayýyý bulan programý yazýnýz*/

int main()

{
    int x,y,z,sayi;

    printf("x y z sayilarini giriniz\n");
    scanf("%d %d %d",&x,&y,&z);

    sayi= x*100+y*10+z*1;

    printf("sayi= %d",sayi);

    return 0;

}
