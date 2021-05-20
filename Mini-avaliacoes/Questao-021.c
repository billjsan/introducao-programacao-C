/*

Autor: Willian J. dos Santos
ano:   2021 

21) Escreva uma função que recebe, por parâmetro, 
dois valores X e Z e calcula e retorna X elevadoa z. 
(sem utilizar funções ou operadores de potência prontos)

*/
#include <stdio.h>

int Pot (int _base, int _exp){
    
int aux2 = 1;

    for(int i = 0; i<_exp; i++){
        aux2 = aux2 * _base;
    }

return aux2;
}


int main(){

    int base = 0;
    int expoente =0;
   
    printf("entre com a base: ");
    scanf("%d",&base);
    printf("entre com o expoente: ");
    scanf("%d",&expoente);
    
        while(expoente<0){
        printf("\nentre com um expoente positivo: ");
        scanf("%d",&expoente);   
        }

printf("\n%d ^ %d = %d\n\n",base, expoente, Pot(base, expoente));

    return 0;
}