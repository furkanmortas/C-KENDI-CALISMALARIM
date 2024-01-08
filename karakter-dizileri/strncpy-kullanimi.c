#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char furkan[]="benim adým FURKAN MORTAS";
    char mehmet[124]="";

    strncpy(mehmet,furkan,5);
    printf("%s",mehmet);


    return 0;
}
