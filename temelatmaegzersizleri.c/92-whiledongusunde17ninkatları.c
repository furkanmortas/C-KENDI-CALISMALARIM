#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n;
    int i=0;
    int satir=0;

    printf("lutfen n degerini giriniz\n");
    scanf("%d",&n);

    while(i<=n)
    {
      if(i%17==0)
      {
       printf("%5d",i);
       satir++;
       if(satir%10==0)
       {
           printf("\n");
       }
      }
      i++;
    }







    return 0;
}
