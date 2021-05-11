/* Operadores Questão 14

Autor: Willian J. dos Santos
ano:   2021 

14) Faça um programa em C que calcule a taxa de mortalidade e de natalidade 

*/

#include <stdio.h>

int main()
{

int func = 0; 

printf("******* CALCULADORA DE TAXA DE MORTALIDADE E NATALIDADE EM C *******\n");
printf("*******                 ESCOLHA A FUNCAO                     *******\n");
printf("*******    MORTALIDADE = 0                NATALIDADE = 1     *******\n");

scanf("%d", &func);

    while(func != 0 && func != 1){
    printf("*******                  ENTRADA INVALIDA!                  *******\n");
    scanf("%d",&func);
    }

    switch(func){
    float TxNasc, TxMort,mortos, hab,nasc = 0;
        //caso seja MORTALIDADE    
        case 0:
    
        printf("*******              ENTRE COM NUMERO DE MORTOS              *******\n");
        scanf("%f", &mortos);
        printf("*******            ENTRE COM NUMERO DE HABITANTES            *******\n");
        scanf("%f", &hab);
        TxMort = (mortos * 1000)/hab;
        printf("*******              A TAXA DE MORTALIDADE E: %.2f %c            *******\n", TxMort, 37 );
        
    
        break;        
            //caso seja NATALIDADE
        case 1:
        printf("*******            ENTRE COM NUMERO DE NASCIDOS              *******\n");
        scanf("%f", &nasc);
        printf("*******            ENTRE COM NUMERO DE HABITANTES            *******\n");
        scanf("%f", &hab);
        
        TxNasc = (nasc * 1000)/hab;
        
        printf("*******              A TAXA DE NATALIDADE E: %.2f %c             *******\n", TxNasc, 37 );
        
        break;
    }
    

    return 0;
}