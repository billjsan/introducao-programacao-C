/* Operadores Questão 27

Autor: Willian J. dos Santos
ano:   2021 

27)  Crie uma função que retorne o valor total de uma aplicação na poupança baseado na sua idade de contribuição trabalhista daqui à 65 anos (na aposentadoria). O programa deve receber um valor inicial da aplicação na poupança (ex.: R$5000,00), o valor do juros mensal e a quantidade de meses. Baseado na fórmula https://goo.gl/EFd26p retorne o valor total de quanto terá na poupança até o ano de aposentadoria.
*/
#include <stdio.h>


//protótipos de função 
float juros (float P, float taxa, int tempo);
float Pot (float base, int expoente);


//função principal 
int main()
{
    
float capital, Tx = 0;

int tempo = 0;

printf("\nEntre com o valor inicial da aplicação: ");
scanf("%f",&capital);
    while(capital< 0){
    printf("\nO valor deve ser positivo!");
    printf("\nEntre com o valor inicial da aplicação: ");
    scanf("%f",&capital);
    }
printf("\nEntre com a taxa de juros ao mes: ");
scanf("%f",&Tx);
    while(Tx< 0){
    printf("\nO valor deve ser positivo!");
    printf("\nEntre com a taxa de juros ao mes: ");
    scanf("%f",&Tx);
    }
printf("\nEntre com a quantidade de meses: ");
scanf("%d",&tempo);
    while(tempo< 0){
    printf("\nO valor deve ser positivo!");
    printf("\nEntre com a quantidade de meses: ");
    scanf("%d",&tempo);
    }
   
printf("\nO montante apos %d meses sera: R$ %.2f", tempo, juros(capital,Tx,tempo));

return 0;
}

//função do calculo do juros
float juros (float P, float taxa, int tempo){
    
float aux = (1 +(taxa/100));
float montante = Pot(aux,tempo) * P;
return montante;    
}

//função de potência
float Pot (float _base, int _exp){
    
float aux2 = 1.0;

    for(int i = 0; i<_exp; i++){
        aux2 = aux2 * _base;
    }

return aux2;
}
