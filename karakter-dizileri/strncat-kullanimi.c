#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char can[100];
    char canan[100];
    int a;

    printf("lutfen bir yazi giriniz\n");
    scanf("%s",&can);

    printf("lutfen ikinci yaziyi giriniz\n");
    scanf("%s",&canan);

    printf("birinci yazinin sonuna kac karakter eklemek istiyorsunuz\n");
    scanf("%d",&a);

    printf("birlestirmedenonce %s\n",can);

    printf("birlestirmedensonra %s\n",strncat(can,canan,a));

    return 0;
}
