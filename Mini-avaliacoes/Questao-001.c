/* Fundamentos Questão 1

Autor: Willian J. dos Santos
ano:   2021 


1) Faça um programa em C que realize a conversão monetária de Real para Dollar,
use a taxa de conversão do dia. 

*/


#include <stdio.h>

float real,dollar;
float txDollar = 5.37;

int main(void)
{
    printf("Insira um valor em Real R$ ");
    scanf("%f", &real);
    dollar = real / txDollar;
    
    printf("\nO valor inserido convertido para Dollar eh = U$ %.2f", dollar);

    return 0;
}