#include<stdio.h>
#include<stdlib.h>

int main()
{
    int day=4;

    switch(day)
    {
        case 1:printf("PAZARTES�");
        break;

        case 2:printf("SAL�");
        break;

        case 3:printf("CARSAMBA");
        break;

        case 4:printf("PERSEMBE");
        break;

        case 5:printf("CUMA");
        break;

        case 6:printf("CUMARTES�");
        break;

        case 7:printf("PAZAR");
        break;

        default:printf("GECERS�Z GUN");
        break;
    }



    return 0;
}
