#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int total;
    
    printf("1. sayiyi giriniz: ");
    scanf("%d", &num1);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &num2);
    
    total = num1 + num2;
    printf("Toplam : %d" , total);
}