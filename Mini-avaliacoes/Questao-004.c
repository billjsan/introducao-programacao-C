/* Fundamentos Questão 4

Autor: Willian J. dos Santos
ano:   2021 

4) Faça um programa em C que calcule a área da circunferência a partir do raio em centímetros.

*/

#include <stdio.h>

#define PI 3.1415

int main()
{

float r, area = 0;

    printf("Entre com raio da circunferencia em cm: ");
    scanf("%f",&r);
    area =  PI * (r * r);
    printf("\n o valor da area eh = %.2f cm2", area);

    return 0;
}
