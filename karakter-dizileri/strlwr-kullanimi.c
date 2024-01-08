#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char can[100];

    printf("lutfen bir text giriniz\n");
    //scanf("%s",can);
    fgets(can, sizeof(can),stdin);

    printf("girdiðiniz ifade %s\n",can);
    printf("girdiginiz ifadenin kucuk harflere donusturulmus hali  : %s",strlwr(can));

    return 0;
}

