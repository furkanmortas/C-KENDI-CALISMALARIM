#include<stdio.h>
#include<stdlib.h>

int main()

{
    int sayi1,sayi2;
    char  op;

    printf("lutfen isleminizi seciniz (+,-):");
    scanf("%c",&op);

    printf("lutfen iki tam sayi giriniz\n");
    scanf("%d %d",&sayi1,&sayi2);

    if((sayi1==0)||(sayi2==0))
    {
        printf("islem yapilamaz\n");
    }
    else
    {
        printf("1/%d  %c  1/%d",sayi1,op,sayi2);
        switch(op)
        {
        case '+':
            {
            printf("%d/%d\n",sayi1+sayi2,sayi1*sayi2);
            }
            break;
        case '-':
            {
                printf("= %d/%d\n ",sayi1-sayi2,sayi1*sayi2);
            }
            break;
        default:
            {
                printf("yanlis operatör girdiniz\n");
            }

        }
    }


return 0;
}
