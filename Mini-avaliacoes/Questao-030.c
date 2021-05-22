/* Operadores Questão 30

Autor: Willian J. dos Santos
ano:   2021 

30) Criar uma função que receba um vetor de caracteres 
(frase, vetor de char) e retorne a quantidade de palavras
*/
#include <stdio.h>

#define SIZE 280

int countString(char[SIZE], int tamanho);
int main()
{
    char frase[SIZE] = {0};

    printf("\nDigite uma frase: ");
    fgets (frase, SIZE, stdin); 
    printf("\nVoce digitou uma frase com: %d palavras ", countString(frase, (int)sizeof(frase)));
    return 0;
}

int countString(char *_frase, int tam){
    int wrd = 0;
    int ctr = 0;
    int flag,espaco,letra = 0;
    char copia[SIZE] = {0};

        int i = 0;    
        while(_frase[i]!= '\0'){
        copia[i] = _frase[i];
        i++;
        }
        
        i = 0;    
        while(copia[i] != '\0'){
            
            //acha letra
            if( (copia[i] > 64 && copia[i] < 91) || (copia[i] > 96 && copia[i] < 123) ){
            letra++;    
            }
            //nao letra
            else{
                if(letra>0){
                letra = 0;
                wrd++;
                }
            }   
        i++;
        }
    return wrd;
}
