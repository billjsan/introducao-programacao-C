/* Fundamentos Questão 5

Autor: Willian J. dos Santos
ano:   2021 

5) Faça um programa em C que calcule a correção do salário mínimo a partir da Taxa informada pelo usuário.

*/

#include <stdio.h>

#define SM 1100.00

int main()
{

float Tx, SMCorrigido = 0;

    printf("Entre com a taxa de correcao do salario minimo: ");
    scanf("%f",&Tx);
    SMCorrigido =  SM + ((Tx/100) * SM);
    printf("\n o valor corrigido eh = R$ %.2f", SMCorrigido);

    return 0;
}

