/* Operadores Questão 16

Autor: Willian J. dos Santos
ano:   2021 

16) Faça um programa em C receba do usurario um caracter f/F ou m/M e retorne se é Masculino ou Feminino  

*/


int main()
{

char gen = ' ';
float compra = 0.0; 
int pay = 0;
printf("Entre com o genero >> M - masculino  F - feminino \n");
scanf("%c",&gen);

    switch (gen){
        
        case 'M':
        printf("genero masculino\n");
        break;
    
        case 'm':
        printf("genero masculino\n");
        break;
        
        case 'F':
        printf("genero feminino\n");
        break;
    
        case 'f':
        printf("genero feminino\n");
        break;
        
        default:
        printf("genero nao encontrado");
        break;
    }
    
    return 0;
}
