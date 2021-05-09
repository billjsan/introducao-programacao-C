/* Fundamentos Questão 7

Autor: Willian J. dos Santos
ano:   2021 

7) Faça um programa em C que calcule o IMC do usuário que deve inserir o peso em Kg e a altura em metros. 
*/

1) 

#include <stdio.h>

int main()

{
    
    float imc, peso, altura = 0;
    
    printf("Entre com peso em Kg: ");
    scanf("%f", &peso);
    printf("Entre com a altura em metros: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf ("o Seu IMC é igual a: %.2f", imc);
    

    return 0;
}
