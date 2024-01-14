#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define tam 150
#include<time.h>

/*int main()
{
    int no,boy,minboy,minno,fark;

    printf("ogrenci no : \n"),
    scanf("%d",&no);
    printf("ogrenci boy : \n"),
    scanf("%d",&boy);

    minno=no;
    fark=abs(boy-tam);



     while(no>0)
    {
    printf("ogrenci no : \n"),
    scanf("%d",&no);
    printf("ogrenci boy : \n"),
    scanf("%d",&boy);


    if(fark>abs(boy-tam))
    {
        fark=abs(boy-tam);
        minno=no;
        minboy=boy;
    }

    }
    printf("%d numarali ogrenci %d boyu ile 150 e en yakindir\n",minno,minboy);

}*/

int main()
{
    int i,n;

    srand(time(0));
    printf(" 10 tane random sayi yaz\n");

    for(i=1;i<=10;i++)
    {
        n=rand()%200;
        printf("%d\n",n);
    }
    return 0;

}



