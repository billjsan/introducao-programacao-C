/* Operadores Questão 18

Autor: Willian J. dos Santos
ano:   2021 

18) Faça um programa em C que calcule os júros de um empréstimo. 

*/

#include <stdio.h>

int main()
{
    float emp, tx,juros= 0;
    int dias , run = 1;

    
    while(run){

    printf("\nEntre com o valor do emprestimo (-1 para sair): ");
    scanf("%f",&emp);
        if(emp == -1){
        break;
        }
    printf("\nEntre com a taxa de juros (-1 para sair): ");
    scanf("%f",&tx);
        if(emp == -1){
        break;
        }
    printf("\nEntre com o periodo do emprestimo em dias (-1 para sair): ");
    scanf("%d",&dias);
        if(emp == -1){
        break;
        }
    juros = emp * tx* dias /100;

    printf("\nA taxa de juros e: %.2f",juros);
    }
    
    return 0;

}