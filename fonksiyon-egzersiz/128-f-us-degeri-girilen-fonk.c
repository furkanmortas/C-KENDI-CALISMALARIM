#include<stdio.h>
#include<stdlib.h>


int us_alma(int taban,int us)
{
    int sonuc=1;
    int i;
    for(i=1;i<=us;i++)
    {
        sonuc=taban*sonuc;

    }
    return sonuc;

}




int main()
{
    int taban,us;

    printf("taban ve us degerini girin\n");
    scanf("%d %d",&taban,&us);
    printf("us alinmis hali =%d",us_alma(taban,us));
   return 0;
}
