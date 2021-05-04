/* Fundamentos Questão 8

Autor: Willian J. dos Santos
ano:   2021 

8) Faça um programa em C que receba do usuário uma nota e retorne se o aluno foi aprovado ou reprovado. Considere a nota mínima como 7. 
*/


#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a = 0;
    float nota = 0;
    int esq = 0 ;

    while(!esq){
        printf("Entre com nota: ");
        scanf("%f", &nota);

        if(nota>=7 && nota<=10){
            printf("Aluno Aprovado\n");
        }

        else if (nota<7 && nota>= 0){
            printf("Aluno Reprovado!\n");
        }

        else {
            printf ("Voce nao digitou uma nota valida!\n");
        }

        printf("\nInserir mais notas? 1/0 \n");
        scanf("%d", &a);

        if(a == 1){
            esq = 0;
        }

        else{
            esq = 1;
        }
    }
  return 0;
}

