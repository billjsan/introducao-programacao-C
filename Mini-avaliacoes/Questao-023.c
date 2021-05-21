/* Operadores Questão 23

Autor: Willian J. dos Santos
ano:   2021 

23) Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e 
retorna o valor de S. S = 1 + 1/1! + ½! + 1/3! + 1 /N!

*/

#include <stdio.h>

long fat (int input);
double findS (int a);

int main()
{
int N = 0;
    
printf("\nEntre com um inteiro positivo "); 
scanf("%d", &N);
    
    while(N<0){
    printf("\nEntre com um inteiro positivo ");    
    scanf("%d", &N);
    }

printf("\nS = %.3lf",findS(N));


return 0;
}

//funcao acha S
double findS (int b){

double sum = 0;

double N = fat(b);
double fat3  = fat(3);
double fat2 = fat(2);
double fat1 = fat(1);

sum = 1 + (1/fat1) + (1/fat2) + (1/fat3) + (1/N);

return sum;    
}

//funcao fatorial
long fat (int user){
    float aux = 0.0;
    
    if(user <= 1){
    return 1;   
    }
    
    else {
    return user * fat(user -1);
    }
    
}
