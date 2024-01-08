#include<stdio.h>
#include<stdlib.h>

int main ()
{

float a,b;
char op;

printf("lutfen bir operator giriniz\n");
scanf ("%c",&op);

printf("lutfen iki adet sayi giriniz \n");
scanf("%f%f",&a,&b);

switch(op){

case '+':printf("%.2f + %.2f = %.2f ",a,b,a+b);
break;
case '-':printf("%.2f - %.2f = %.2f ",a,b,a-b);
break;
case '/':printf("%.2f / %.2f = %.2f ",a,b,a/b);
break;
case '*':printf("%.2f * %.2f = %.2f",a,b,a*b);
break;
default:printf("yanlýs secim yaptýnýz");
break;

}
return 0;

}
