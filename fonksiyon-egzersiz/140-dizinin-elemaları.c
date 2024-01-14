#include<stdio.h>
#include<stdlib.h>

//rastgele n adet sayi uret kucukten buyuge sýrala
//void sirala(int A[],int adet)

void sirala (int A[],int adet)
{
    int i,j,gecici;
   for(i=0;i<=adet-1;i++)
   {
       for(j=0;j<adet-1-i;j++)
       {
         if(A[j]>A[j+1])
       {
         gecici=A[j];
         A[j]=A[j+1];
         A[j+1]=gecici;
       }
       }

   }
}



int main()
{
    int sayi,i;
    int dizi[124];
    printf("kac adet sayi ureteilecegini gir\n");
    scanf("%d",&sayi);

    srand(time(0));
    for (i=0;i<sayi;i++)
    {
       dizi[i]=rand()%100;
       printf("%d\n",dizi[i]);
    }
    printf("dizinin sirali hali\n ");
    sirala(dizi,sayi);

    for(i=0;i<sayi;i++)
    {
      printf("%d\t",dizi[i]);
    }
}
