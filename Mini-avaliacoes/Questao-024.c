/* Operadores Questão 24

Autor: Willian J. dos Santos
ano:   2021 

24) Faça uma função que leia 50 valores inteiros e retorna o maior deles.
*/

#include <stdio.h>

int maximo (void);

int main()
{

printf("\nO maior numero digitado foi: %d",maximo());
 
    return 0;
}

int maximo (void){
int cnt = 0;
int max = 0;
int num = 0;

printf("\nEntre com 50 numeros inteiros seguidos de ENTER: ");

    while(cnt < 50){
    scanf("%d",&num);
        if(cnt == 0){
        max = num;    
        }
        if(num>max){
        max = num;
        }
    cnt++;
    }

return max;   
}

