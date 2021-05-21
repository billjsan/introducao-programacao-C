/* Operadores Questão 25

Autor: Willian J. dos Santos
ano:   2021 

25) Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.
*/
#include <stdio.h>


long fat (int input);


int main()
{
    int num = 0;
    printf("\nEntre com um inteiro positivo: ");
    scanf("%d",&num);
        while(num<0){
        printf("\nEntre com um inteiro positivo: ");
        scanf("%d",&num);
        }
    printf("\nO fatorial de %d eh: %ld", num, fat(num));
        
    return 0;
}


long fat (int user){

    if(user <= 1){
    return 1;   
    }
    
    else {
    return user * fat(user -1);
    }
    
}
