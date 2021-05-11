/* Operadores Questão 13
Autor: Willian J. dos Santos
ano:   2021 
13) Faça um programa em C que receba um inteiro de 1 a 12 e retorne qual o mes do ano.
*/


#include <stdio.h>

int main()
{
    int mes = 0;
    printf("Entre com um numero de 1 a 12: ");
    scanf("%d", &mes);
    
    switch (mes){
        case 1:
        printf("\nJaneiro");
        break;
    
        case 2:
        printf("\nFevereiro");
        break;

        case 3:
        printf("\nMarco");
        break;

        case 4:
        printf("\nAbril");
        break;
        
        case 5:
        printf("\nMaio");
        break;
        
        case 6:
        printf("\nJunho");
        break;
        
        case 7:
        printf("\nJulho");
        break;
        
        case 8:
        printf("\nAgosto");
        break;
        
        case 9:
        printf("\nSetembro");
        break;
        
        case 10:
        printf("\nOutubro");
        break;
        
        case 11:
        printf("\nNovembro");
        break;
        
        case 12:
        printf("\nDezembro");
        break;
        
        default:
        printf("\nNumero fora do intervalo");
        break;
        
    }
     
    return 0;
}