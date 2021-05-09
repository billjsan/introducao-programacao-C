/* Fundamentos Questão 10

Autor: Willian J. dos Santos
ano:   2021 

10) Faça um programa em C que receba do usuário 5 inteiros e retorne o maior e o menor valor digitado.

*/


#include <stdio.h>

int main(){

int vector [4];                     //cria um vetor com 4 itens do tipo inteiro = [0, 1, 2, 3, 4]
int num, maior, menor = 0;          //declaração de variaveis inteiras

    //entrada de dados

    printf("Entre com 5 inteiros:\n");
 
    for(int i = 0; i <= 4; i++){ 
        scanf("%d",&num);           //armazena os valores inseridos no vetor para cada valor de i
        vector[i] = num;
    }
    
    //processamento 

    menor = vector[0];              //atribui um dos valores lidos ao menor numero (arbitrario pois todos serao comparados)
    maior = vector[0];              //atribui um dos valores lidos ao maior numero

    for(int i =0; i <=4; i++){
    
        if (menor > vector[i]){     //testa qual o MENOR valor entre o armazenado e os inseridos pelo usuario
            menor = vector[i];
        }
    }
    
     for(int i =0; i <=4; i++){
    
        if (maior < vector[i]){     //testa qual o MAIOR valor entre o armazenado e os inseridos pelo usuario
            maior = vector[i];
        }
    }

    //saída 
 
    printf("O maior valor foi: %d\n",maior);
    printf("O menor valor foi: %d ",menor);
    return 0;
}
