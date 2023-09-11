//Gazizyanov Vladislav, RUDN, NPIbd-01-23, 09.09.23, 14:47
#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Russian");
    double x;
    printf("Сумма продаж в ноябре:");
    scanf("%lf", &x);
    double y;
    y = x / 1.15;
    printf("Сумма продаж в октябре:");
    printf("%lf", y);
}