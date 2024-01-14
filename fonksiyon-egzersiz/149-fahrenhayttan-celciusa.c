#include<stdio.h>
#include<stdlib.h>

//kullanýcý tarafýndan derece olarak girilen bir degerin fahrenhayt a
//fahrenhayt olarak girileni celciýusa cevirme
float fdencye(float f)
{
    float celcius;
    celcius=(0.5555)*(f-32);
    return celcius;

}
float cdenfye(float c)
{
    float fahrenheit;
    fahrenheit=(1.8*c)+32;
    return fahrenheit;
}










int main()
{
    float f,c;
    int secim;

    printf("1 fahrenhayttan celciusa cevirme\n");
    printf("2 celciusdan fahrenhayta cevirme\n");
    scanf("%d",&secim);

    if(secim==1)
    {
        printf("fahrenhayt degeri:\n");
        scanf("%f",&f);
        printf("%f F= %f C dur",f,fdencye(f));

    }
    else if(secim==2)
    {
        printf("celcius degeri:\n");
        scanf("%f",&c);
        printf("%f C= %f F dir",c,cdenfye(c));

    }
    else
    {
        printf("yanlis secim yaptiniz\n");
    }

}
