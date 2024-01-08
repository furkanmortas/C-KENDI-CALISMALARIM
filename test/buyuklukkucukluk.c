#include<stdio.h>
#include<stdlib.h>

int main ()

{
    int x,y;


    printf (" x ve y sayisini giriniz\n");
    scanf ("%d  %d ",&x,&y);

    if (x==y)
    {
        printf ("sayilar birbirine esittir");
    }

    else if (x>y)
    {
        printf ("x sayisi y sayisindan buyuktur");

    }

    else
    {
        printf ("y sayisi x sayisindan buyuktur");
    }

    return 0 ;
}
