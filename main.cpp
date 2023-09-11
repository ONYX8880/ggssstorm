//Gazizyanov Vladislav, RUDN, NPIbd-01-23, 10.09.23, 21:43
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Russian");
    float x;
    printf("Введите массовую долю соли(%):");
    scanf("%f", &x );
    float y;
    printf("Введите массу раствора:");
    scanf("%f", &y);
    x = x / 100;
    float salt_mass;
    salt_mass = x * y;
    float water_mass;
    water_mass = y - salt_mass;
    printf("Масса соли:%f", salt_mass);
    printf("Масса воды:%f", water_mass);
}