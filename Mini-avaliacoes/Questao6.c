/* Fundamentos Questão 6

Autor: Willian J. dos Santos
ano:   2021 

6) Faça um programa em C que receba do usuário uma letra e retorna o seu case complementar. 
*/

#include <stdio.h>

int main()
{

char c = ' ';

    printf("Entre com uma letra: ");
    scanf("%c",&c);
 
    if (c >=65 && c<= 90){
    printf("\nO complemento para essa letra eh: %c", c + 32);    
    }
    else if(c >=97 && c<= 122){
    printf("\nO complemento para essa letra eh: %c", c - 32);     
    }

    else{
    printf("\nvoce nao digitou uma letra");    
    }
    return 0;
}
