/*
Questão 22 

Faça uma função que receba por parâmetro um inteiro 
positivo e retorne a raiz quadrada desse número.
(sem utilizar funções ou operadores de potência prontos). 
Pense numa estratégia de aproximação.

*/

#include<stdlib.h>
#include<stdio.h>

// prototipo da funcao 
float raizq (int a); 

// função principal  
int main(){
    
//variaveis
int num =0;


printf("\nEntre com um inteiro ");
scanf("%d", &num);

    if(num<0){
    num = num * -1;    
    }

printf("\nA raiz quadrada aproximada de %d = %.1f",num, raizq(num));
return 0;    
}

// função que calcula raiz quadrada aproximada
float raizq(int a){

//variaveis locais
float ret = 0.0;
float auxH = 0.0;
float auxL = 0.0;
float valFrac = 0.0;
int cnt = 0;
int run = 1;
int run2 = 1;
int valInt = 0;

   
    while(run){
        
        //acha raiz exata
        if (cnt * cnt == a){
        ret = (float)cnt;
        run = 0;
        }
        else
        
        //acha inteiro da raiz aproximada
        if(cnt * cnt > a){ 
        valInt = cnt -1;  
        valFrac = (float)valInt;
        run = 0;

            //acha parte fracionada aproximada
            while(run2){
            valFrac+= 0.1;
            
                if((valFrac * valFrac)>a){

                auxH = (valFrac * valFrac);  
                auxL = (valFrac - 0.1) * (valFrac - 0.1); 
                auxH = auxH - (float)a ; 
                auxL = (float)a - auxL;   
                    
                    if(auxH > auxL){
                    ret = valFrac - 0.1;    
                    }
                    
                    else{
                    ret = valFrac;    
                    }
                        
                run2 =0;    
                }
            }
        }
    cnt++;
    }
return ret;
}