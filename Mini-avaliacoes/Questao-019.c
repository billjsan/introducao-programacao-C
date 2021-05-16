/* Operadores Questão 19

Autor: Willian J. dos Santos
ano:   2021 

19) Faça um programa em que receba um inteiro de 0 a 20 e desenhe na tela um quadrado proporcional ao valor digitado. 

*/
#include <stdio.h>

int main()
{
    int dado = 0;
    char dot ='*';    
    
printf("entre com um inteiro entre 1 e 20:");
scanf("%d",&dado);


char display[dado][dado];


    for(int i = dado; i>0; i-- ){

    printf("\n\t\t");
        for (int i = dado; i>0; i-- ){
        printf(" %c ",dot);    
        
        }        
        
    }


    return 0;
}