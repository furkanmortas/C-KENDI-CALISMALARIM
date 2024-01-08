#include<stdio.h>
#include<stdlib.h>

int main()
/*{
    int can [5]={1,3,5,7,9};


    printf("%d",can[1]);
    return 0;
}*/
//ilk 10 çift elemaný yazdrma
/*{
    int can[10];
    int i;

    for(i=0;i<10;i++)
    {
        can[i]=2*i;
        printf("can[%d]=%d\n",i,can[i]);
    }

    return 0;
}*/
//yeni deger atama
/*{
    int can[5]={1,2,3,4,5};
    int i;
    can[2]=38;

    for(i=0;i<5;i++)
    {
        printf("can[%d]=%d\n",i,can[i]);
    }
    return 0;
}*/
/*{
    int sayilarim[3];
    int i;

    for(i=0;i<3;i++)
    {
        scanf("%d",&sayilarim[i]);
        printf("sayilarim[%d]=%d\n",i,sayilarim[i]);
    }
}*/
/*{
    int sayilarim[3];
    int i=0;

    while(i<3)
    {
        scanf("%d",&sayilarim[i]);
        i++;

    }
    i=0;

    while(i<3)
    {
        printf("%d\n",sayilarim[i]);
        i++;
    }
    return 0;
}*/

/*{
    int sayilarim[3];
    int i=0;

    do
    {
        scanf("%d",&sayilarim[i]);
        i++;
    }while(i<3);
    i=0;

    do
    {
        printf("%d\n",sayilarim[i]);
        i++;
    }while(i<3);
}*/

//ornek 110

/*{
    float a,b,c;


    printf("ucgenin acilarini giriniz");
    scanf("%f %f %f",&a,&b,&c);

    if(a+b+c==180)
    {
        if(a==60 && b==60 && c==60)
        {
            printf("eskenar ucgendir");
        }
        else if(a==b||b==c||a==c)
        {
            printf("ikizkenar ucgendir");
        }
        else
          {
              printf("cesitkenar ucgendir");
          }

    }
    else
    {
        printf("ucgen olusturmaz");
    }
}*/
/*{
    float dk,ucret;

    printf("telefon gorusmenin kac dakika oldugunu giriniz:");
    scanf("%f",&dk);

    if(dk<=3)
    {
        ucret=0.25  ;
    }
    else
    {
        ucret=0.25+(dk-3)*(0.08) ;

    }
    printf("odenecek tutar = %.4f",ucret);
return 0;
}*/


//basit kesirlerle 4 islem
/*{
    char op;
    int a,b ;

    printf("lutfen + veya - islem tipini seciniz\n");
    scanf("%c",&op);

    printf("lutfen iki tam sayi giriniz\n");
    scanf("%d%d",&a,&b);

    if(a==0 || b==0)
    {
        printf("0 degerini girdiginiz icin islem yapilmaz");
    }
    else
    {
        printf("1/%d %c 1/%d",a,op,b);
        switch(op)
        {
        case '+' :
            {
                printf("=%d/%d",a+b,a*b);
            }
            break;
        case '-':
            {
                printf("=%d/%d",a-b,a*b);
            }
            break;
        default :
            {
                printf("yanlis operator girdiniz\n");
            }
        }

    }




}*/



/*{
    int sira ;
    char ch ;

    printf("lutfen bir harf giriniz\n");
    scanf("%c",&ch);

    if ((ch>='A')&&(ch<='Z'))
    {
        sira=(int)ch-(int)'A'+1;
    }
    else if((ch>='a')&&(ch<='z'))
    {
        sira=(int)ch-(int)'a'+1;
    }
    else
    {
        printf("yanlis karakter girdiniz\n");
    }

    printf("%c alfabede %d. harftir",ch,sira);

    return 0;



}*/
//serinin toplam degeri
/*{
    int i,n;
    float x ,seri;

    printf("pozitif sayi giriniz:\n");
    scanf("%d",&n) ;
    printf("reel sayi:");
    scanf("%f",&x);

    for(i=1;i<=2*n-1;i+=2)
    {
        seri=seri+i/pow(x,i+1);
    }
        printf("seri= %f",seri);


}*/


