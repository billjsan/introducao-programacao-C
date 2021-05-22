/* Operadores Questão 29

Autor: Willian J. dos Santos
ano:   2021 

29)  Criar uma função que receba um vetor de caracteres
(palavra, vetor de char) e retorne a quantidade de caracteres
*/

#include <stdio.h>

#define SIZE 40

int countString(char[SIZE]);

int main()
{

    char palavra[SIZE] = {0};

    
    printf("\nDigite uma palavra: ");
    scanf("%39s", palavra);
        
    printf("\nVoce digitou uma palavra com: %d letras ", countString(palavra));

    return 0;
}


int countString(char *palavra){
     
    int cnt = 0;
    
    while(palavra[cnt] != '\0'){
    cnt++;    
    }
    return cnt;
}

