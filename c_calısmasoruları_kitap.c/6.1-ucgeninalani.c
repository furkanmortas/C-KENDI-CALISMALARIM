#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kenaruzunluk;
    float yukseklik;
    float alan;

    printf("Kenar uzunlugunu giriniz\n");
    scanf("%f", &kenaruzunluk);

    printf("Yuksekligi giriniz\n");
    scanf("%f", &yukseklik);

    alan = kenaruzunluk * yukseklik / 2;
    printf("Alan: %f\n", alan);

    return 0;
}


