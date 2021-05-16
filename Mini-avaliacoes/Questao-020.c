/* Operadores Questão 20

Autor: Willian J. dos Santos
ano:   2021 

20) Faça um programa em que receba um inteiro de 5 digitos e retorne e é um palíndromo ou não.  

*/
#include <stdio.h>

int main()
{
    int dado,d1,d2,d3,d4,d5 = 0;
    
printf("entre com um inteiro de 5 digidos:");
scanf("%d",&dado);

//tratamento do dado 
d1 = dado/10000;

d2 = dado/1000;
d2 = d2 % 10;

d3 = dado / 100;
d3 = d3 % 100;
d3 = d3 %10;

d4 = dado/10;
d4 = d4 %1000;
d4 = d4 %100;
d4 = d4 %10;

d5 = dado % 1000;
d5 = d5 %100;
d5 = d5%10;

    if(d1==d5 && d2==d4){
        printf("\nVoce digitou um palindromo");
    }
    
    else 
    printf("\nVoce nao digitou um palindromo");

    return 0;
}