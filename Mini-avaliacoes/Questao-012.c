/* Operadores Questão 12

Autor: Willian J. dos Santos
ano:   2021 

12) Faça um programa em C que receba um código de cliente e gere um desconto no valor final de uma compra. 1 = Sem desconto, 2 = 10% de desconto, 3 = 5% de desconto. 

*/

#include <stdio.h>

int main()
{
    float compra, vFinal = 0;
    int cliente = 0;
    short int flag = 0;
    printf("Entre com valor da compra:");
    scanf("%f", &compra);
    
    while(!flag){
        printf("\nEnte com código do cliente:");
        scanf("%d", &cliente);
        
        if(cliente == 1){
        vFinal = compra;
        printf("Valor final da compra: %.2f", vFinal);
        flag = 1;
        }

        else if (cliente == 2){
        vFinal = compra - (0.1*compra);
        printf("Valor final da compra: %.2f", vFinal); 
        flag = 1;
        }
        
        else if (cliente == 3){
        vFinal = compra - (0.05*compra);
        printf("Valor final da compra: %.2f", vFinal);
        flag = 1;
        }
        
        else {
        printf("\nCodigo de cliente invalido!");
        flag = 0;
        }
        
    }
    return 0;
}