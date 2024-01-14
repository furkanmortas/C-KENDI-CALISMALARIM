#include<stdio.h>
#include<stdlib.h>

//klavyeden negatif bir sayi girilene kadar kullanýcýdan sürekli sayi isteyen program

sayi_iste()
{
    int sayi;
    while(1)
    {
        printf("sayi gir\n");
        scanf("%d",&sayi);
        if(sayi<0)
            {
                break;
            }
        }
}

int main()
{
 sayi_iste();
 return 0;
}



