#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a,b,h;

    printf("dikdortgen prizmanin a b ve h uzunluklarini giriniz\n");
    scanf ("%d%d%d",&a,&b,&h);

    printf("taban alani= %d\n",a*b);
    printf("yanal alanlar toplami =%d\n",2*a*h+2*b*h);
    printf("toplam alanim= %d\n",2*a*b+2*a*h+2*b*h);
    printf("hacmim=%d\n",a*b*h);


    return 0;

}
