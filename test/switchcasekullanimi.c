#include<stdio.h>
#include<stdlib.h>

int main()
{
    int day=4;

    switch(day)
    {
        case 1:printf("PAZARTESÝ");
        break;

        case 2:printf("SALÝ");
        break;

        case 3:printf("CARSAMBA");
        break;

        case 4:printf("PERSEMBE");
        break;

        case 5:printf("CUMA");
        break;

        case 6:printf("CUMARTESÝ");
        break;

        case 7:printf("PAZAR");
        break;

        default:printf("GECERSÝZ GUN");
        break;
    }



    return 0;
}
