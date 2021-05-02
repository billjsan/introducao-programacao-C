/* Fundamentos Questão 2

Autor: Willian J. dos Santos
ano:   2021 

2) Faça um programa em C que realize a conversão de temperatura de Celsius para Kelvin.

*/

#include <stdio.h>

int main()
{

float Celsius, kelvin = 0;
    printf("Entre com temperaturam em Celsius = ");
    scanf("%f",&Celsius);
    kelvin = Celsius + 273.15;
    printf("\n %.2f Celsius em Kelvin = %.2f", Celsius, kelvin);

    return 0;
}
