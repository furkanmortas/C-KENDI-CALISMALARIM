#include<stdio.h>
#include<stdlib.h>

int main()
{
    float x,y,z;
    printf("ucgenin acilarini giriniz\n");
    scanf("%f %f %f",&x,&y,&z);

    if(x+y+z==180 )
    {
     if(x==60 && y==60 && z==60)
     {
         printf("bu bir eskenar ucgendir\n");
     }
     else if(x==y || x==z || y==z)
     {
     printf("bu bir ikizkenar ucgendir");
     }
     else
     {
         printf("bu bir cesitkenar ucgendir ");
     }
    }
     else
     {
         printf("acilar ucgen olusturmaz\n");
     }

}
