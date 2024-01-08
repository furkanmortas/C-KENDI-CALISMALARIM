#include<stdio.h>
#include<stdlib.h>
#define tam 150
int main()
{
    int cm,ogno,fark,minboy,minogno;


    printf("ogrenci no:\n");
    scanf("%d",&ogno);

    printf("ogrenci boy:\n");
    scanf("%d",&cm);

    minogno=ogno;
    fark=abs(cm-tam);

    while(ogno>0)
    {
        printf("\nOgrenci no:");
        scanf("%d",&ogno);
        printf("\nOgrenci boy :");
        scanf("%d",&cm);

        if(abs(cm-tam)<fark)
        {
            fark=abs(cm-tam);
            minogno=ogno;
            minboy=cm;
        }


    }
    printf("%d numarali ogrenci %d cm boyu ile 150 e en yakindir",minogno,minboy);





}
