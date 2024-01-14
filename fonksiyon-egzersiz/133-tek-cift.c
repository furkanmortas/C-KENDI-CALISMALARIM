#include<stdio.h>
#include<stdlib.h>

int tekmiciftmi(int sayi)
{
    if(sayi%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}





int main()
{
    int sayi;
    int sonuc;
    printf("sayi gir\n");
    scanf("%d",&8sayi);

    sonuc=tekmiciftmi(sayi);

    if(sonuc==1)
    {
        printf("sayi cifttir");
    }
    else
    {
        printf("sayi tektir");
    }
return 0;
}
