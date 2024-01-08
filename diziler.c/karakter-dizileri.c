#include<stdio.h>
#include<stdlib.h>


int main()
{
    char can[]={'c','a','n','a','n','\0'};

    char dizim[]="canan";

    char kullanici[100];

    printf("%s",dizim);
    printf("\n");

    printf("lutfen bir karakter dizisi giriniz\n");
    scanf("%s",&kullanici);

    printf("\n");
    printf("%s",kullanici );

    return 0;
}
