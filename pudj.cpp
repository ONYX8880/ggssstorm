//Gazizyanov Vladislav, RUDN, NPIbd-01-23, 10.09.23, 22:17
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL, "Russian");
    double a, b, ugol;
    printf("Введите длины оснований a и b (a > b) и угол в радианах: ");
    scanf("%lf %lf %lf", &a, &b, &ugol);
    double h = (a - b) / 2 * tan(ugol);
    double P = a + b + 2 * sqrt(pow((a - b) / 2, 2) + pow(h, 2));
    double S = (a + b) / 2 * h;
    printf("Периметр трапеции: %lf", P);
    printf("Площадь трапеции: %lf", S);
}