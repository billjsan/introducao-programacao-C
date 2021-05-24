/* Operadores Questão 32

Autor: Willian J. dos Santos
ano:   2021 

32) Criar uma função que receba um vetor de inteiros por parâmetro e 
ordene esse vetor utilizando a função maior OU a função menor das 
questões anteriores. Inspire-se no método da bolha
*/

#include <stdio.h>

#define SIZE 280

//prototipo da funcao
int ordena(int[SIZE] ,int tamanho);

//função principal 
int main()
{

    int vetor[SIZE] = {0};
    int Q,R = 0;

    printf("\nEntre com a quantidade de numeros que deseja inserir: ");
    scanf("%d",&Q);
    
        while(Q<=0){
        printf("\nE necessario entrar com um valor maior que zero: ");
        scanf("%d",&Q);   
        }
        

    printf("\nEntre com os valores inteiros seguidos de enter: ");
    
        for (int i = 0; i < Q ; i++){
        printf("\nEntre com o valor %d: ",i+1);
        scanf("%d",&R);
        vetor[i] = R;    
        }
        
ordena(vetor,Q);

    return 0;
}

int ordena(int *vetor, int Qtd){ 
    
int ret = 0;    
int min = 0;

int ord [SIZE] = {0};

    for(int i = 0; i < Qtd; i++){
        ord[i] = vetor[i];
    }

    for(int j = 0; j < Qtd; j++){
        printf("%d ", ord[j]);
    }

    for(int i = 0; i < Qtd ; i++){
        
        for(int j = 0; j < Qtd -1 ; j++){
        
        int aux = 0;
            if(ord[j]>ord[j+1]){
            
            aux = ord[j];
            ord[j]=ord[j+1];
            ord[j+1] = aux;
            }

        }
    }

    printf("\nOs numeros digitados em ordem crescente: ");
    for(int j = 0; j < Qtd; j++){
        printf("%d ", ord[j]);
    }
    
return 0 ;    
}
