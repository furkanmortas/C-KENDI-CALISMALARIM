#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char can[100];

    printf("lutfen bir text giriniz\n");
    //scanf("%s",can);emer
    fgets(can, sizeof(can),stdin);

    printf("girdiðiniz ifade %s\n",can);
    printf("girdiginiz ifadenin buyuk harflere donusturulmus hali  : %s",strupr(can));

    return 0;
}

