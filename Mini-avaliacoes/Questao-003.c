/* Fundamentos Questão 3

Autor: Willian J. dos Santos
ano:   2021 

3) Faça um programa em C que calcule a circunferência a partir do raio em centímetros. 

*/

#include <stdio.h>

#define PI 3.1415

int main()
{

float r, circ = 0;

    printf("Entre com raio da circunferencia em cm: ");
    scanf("%f",&r);
    circ = 2* PI * r;
    printf("\n o valor da circunferencia eh = %.2f cm", circ);

    return 0;
}
