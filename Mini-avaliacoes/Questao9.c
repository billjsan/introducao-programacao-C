/* Fundamentos Questão 9

Autor: Willian J. dos Santos
ano:   2021 

9) Faça um programa em C que receba do usuário uma inteiro e retorne se o número é ímpar ou par.

*/


#include <stdio.h>
#include <stdlib.h>

int main(){

int num, par, esq = 0;


    while(!esq){

    printf("Entre com um inteiro: ");
    scanf("%d", &num);

    par = num % 2;

        if(par == 0){
        printf("voce inseriu um numero par\n");
        }

        else {
        printf("voce inseriu um numero impar\n");
        }

    printf("\nInserir mais numeros? 1/0 \n");
    scanf("%d", &esq);

        if (esq == 1 ){
        esq = 0;
        }

        else {
        esq = 1;
        }
    }
return 0;
}
