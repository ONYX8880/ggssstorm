//Gazizyanov Vladislav, RUDN, NPIbd-01-23, 10.09.23, 21:43
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Russian");
    float x;
    printf("������� �������� ���� ����(%):");
    scanf("%f", &x );
    float y;
    printf("������� ����� ��������:");
    scanf("%f", &y);
    x = x / 100;
    float salt_mass;
    salt_mass = x * y;
    float water_mass;
    water_mass = y - salt_mass;
    printf("����� ����:%f", salt_mass);
    printf("����� ����:%f", water_mass);
}