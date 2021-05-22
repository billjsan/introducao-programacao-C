/* Operadores Questão 28

Autor: Willian J. dos Santos
ano:   2021 

28)  Tendo como base na aplicação acima, crie um programa que calcule o valor 
total da poupança que além do valor inicial e valor do juros, também receba 
valores de aplicações mensais (ex.: R$50,00/mês) durante todo o período da 
sua idade até os 65 anos.
*/

#include <stdio.h>

//prototipos das funcoes
double Pot (float base, int expoente);
float juros (float montante, float _taxa, int _tempo, float aplicacoes);
//funcao principal 
int main()
{
    
float capital, Tx, aplicacaoM = 0;

int idade, meses = 0;

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
printf("\nEntre com a idade atual: ");
scanf("%d",&idade);
    while(idade< 0){
    printf("\nO valor deve ser positivo!");
    printf("\nEntre com a quantidade de meses: ");
    scanf("%d",&idade);
    }
    
    printf("\nDeseja realizar alguma aplicacao mensal no periodo ate a aposentadoria? sim = 1 nao = 0 ");
    int Q = 0;
    scanf("%d",&Q);
    
        if(Q == 1){
        printf("\nEntre com o valor da aplicacao:");
        scanf("%f",&aplicacaoM);
        
            while(aplicacaoM<0){
                
            printf("\nO valor deve ser positivo!");
            printf("\nEntre com o valor da aplicacao:");
            scanf("%f",&aplicacaoM);
            }
        }
        
meses = (65-idade)*12;   
printf("\nO montante apos %d meses sera: R$ %.2f", meses, juros(capital,Tx,idade,aplicacaoM));

    return 0;
}

//função do calculo do juros
float juros (float P, float taxa, int tempo, float depositos){
    
float aux = (1 +(taxa/100));
int aux2 = (65 - tempo) * 12 ;//variavel auxiliar para tratar os meses
float sumAplica = depositos * aux2;

double montante = Pot(aux,aux2) * (P + sumAplica);
return montante;    
}

//função de potência
double Pot (float _base, int _exp){
    
double aux2 = 1.0;

    for(int i = 0; i<_exp; i++){
        aux2 = aux2 * _base ;
    }
return aux2;
}
