#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()

{
    char can[100];
    printf("lutfen bir text giriniz\n");
    scanf("%s",&can);

    printf("girdiginiz ifade %s\n",can);
    printf("girdiginiz ifadenin ters cevrilmis hali :  %s\n",strrev(can));

    return 0;
}
