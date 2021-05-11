/* Operadores Questão 15

Autor: Willian J. dos Santos
ano:   2021 

15) Faça um programa em C que receba do usuário o valor de uma compra e o metodo de pagamento, e ofereça 10% de desconto em compras à vista.  

*/


#include <stdio.h>

int main()
{

float compra = 0.0; 
int pay = 0;
printf("Entre com valor da compra: \n");
scanf("%f",&compra);

printf("forma de pagamento? \n");
printf("1 a vista \n");
printf("2 a prazo \n");
scanf("%d",&pay);

    if (pay == 1){
    compra = (compra - (compra * 10/100)); 
    printf("Valor final: %.2f \n",compra);
    }
    
    else
    printf("Valor final: %.2f \n",compra);

    return 0;
}