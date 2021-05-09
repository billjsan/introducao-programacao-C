/* Fundamentos Questão 11

Autor: Willian J. dos Santos
ano:   2021 

11) Faça um programa em C que receba do usuário dois inteiros e retorne se o primeiro é múltiplo do segundo.

*/

#include <stdio.h>

int main()
{
    
    int num1, num2 ,res= 0;
    
    printf("entre com dois inteiros:\n");
    scanf ("%d", &num1);
    scanf ("%d", &num2);
    
    if(!(res = num1 % num2) == 1){
        printf("%d eh multiplo de %d", num1, num2);
    }
    else{
     printf("%d nao eh multiplo de %d", num1, num2);   
    }
    
    return 0;
}


