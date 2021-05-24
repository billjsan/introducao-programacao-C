/* Operadores Questão 31

Autor: Willian J. dos Santos
ano:   2021 

31) Criar uma função que receba um vetor de inteiros e retorne o menor valor?
*/
#include <stdio.h>

#define SIZE 280

//prototipo da funcao
int findMinn(int[SIZE]);

//função principal 
int main()
{

    int vetor[SIZE] = {0};
    int Q = 0;
    
    printf("\nEntre com a quantidade de numeros que deseja inserir: ");
    scanf("%d",&Q);
    
        while(Q<=0){
        printf("\nE necessario entrar com um valor maior que zero: ");
        scanf("%d",&Q);   
        }
        
    vetor[0] = Q;
    printf("\nEntre com os valores inteiros seguidos de enter: ");
    
        for (int i = Q; i> 0 ; i--){
        printf("\nEntre com o proximo numero: ");
        scanf("%d",&Q);
        vetor[i] = Q;    
        }
        
    printf("\nO menor numero digitado foi: %d", findMinn(vetor));

    return 0;
}


//função que acha menor valor do vetor
int findMinn(int *vetor){ 
int ret = 0;    
int min= 0;

    min = vetor[1];
    for(int i = vetor[0]; i>0; i--){
        if(vetor[i]< min){
        min =  vetor[i];  
        }
    }

return min ;    
}

