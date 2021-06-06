/******************************************************************************

Basicamente, para calcular a quantidade de telhas para uma cobertura, 
precisamos saber a inclinação do telhado e o que determina a inclinação 
mínima de um telhado é o tipo de telha. A figura abaixo apresenta as telhas
mais comuns encontradas no mercado brasileiro e cada uma delas tem suas 
características particulares quanto ao material de fabricação, inclinação 
máxima e mínima, tipo de uso, etc. Como exemplo, suponha que um fabricante 
de uma determinada telha tenha informado que a inclinação (I) mínima da telha 
é de 30%, então para cada metro, o telhado precisa subir 0,30 metros. Veja a 
figura 2. De modo geral, quanto maior a telha, menor a inclinação necessária, 
e para o cálculo da quantidade de telhas precisamos considerar também a 
informação do fabricante para a quantidade de peças por metro quadrado. 
Por exemplo: 1-Romana: 16 pçs/m2; 2-Italiana: 14 pçs/m2; 3-Colonial pequena: 
24 pçs/m2; 4-Colonial grande: 16 pçs/m2; 5-Francesa: 16 pçs/m2; 6-Portuguesa:
17 pçs/m2; 7-Americana: 12,5 pçs/m2. Não esqueça de considerar também o desnível 
da cobertura no calculo da metragem total do telhado. Faça um programa que calcule 
a quantidade de telhas necessárias para uma determinada cobertura considerando: 
A- tipo de telha; B-Largura da base; C-Comprimento do telhado; D-Inclinação 
mínima indicada pelo fabricante. Crie neste programa uma estratégia para que o 
usuários tenham a possibilidade de usar o programa várias vezes até escolher 
encerrar(como sugestão, use uma estrutura de repetição).



Autor:Willian Santos
data: 12/03/21
*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{

float column[50][6];

column[0][0] = 0;
int run = 1, select = 0, _vec = 0, _auxU = 0, flag = 0;


    while (run){
        
    //UI
    printf ("\n\nCALCULO DE ORCAMENTO PRELIMINAR DE TELHAS \n\n");
    printf      ("ADICIONAR                                 1\n");
    printf      ("VER ORCAMENTOS                            2\n");
    printf      ("SAIR                                      0\n");

    scanf ("%d", &select);
      
      
        switch (select){

	        // ADICIONAR
	        case 1:
	        
	        _vec++;
	        
	        //entrada de dados
	        printf ("\nEntre com a largura do lote:");
	        scanf ("%f", &column[_vec][0]);
	        printf ("\nEntre com o comprimento do lote:");
	        scanf ("%f", &column[_vec][1]);

	        //UI
	        printf ("\nEscolha o tipo de telha:");
	        printf ("\nRomana                1");
	        printf ("\nItaliana              2");
	        printf ("\nColonial Pequena      3");
	        printf ("\nColonial Grande       4");
	        printf ("\nFrancesa              5");
	        printf ("\nPortuguesa            6");
	        printf ("\nAmericana             7\n");
	        
	        //EntD
	        scanf ("%d", &select);
  
                //Escolha da telha 
                switch (select){
                case 1: 
                printf ("\nVoce escolheu a Telha Romana");
                printf ("\nInsira a inclinacao minima recomendada pelo fabricante:");
                scanf("%f", &column[_vec][2]);
                column[_vec][3] = 16;
                column[_vec][6] = 1;
                break;
                
                case 2: 
                printf ("\nVoce escolheu a Telha Italiana");
                printf ("\nInsira a inclinacao minima recomendada pelo fabricante:");
                scanf("%f", &column[_vec][2]);
                column[_vec][3] = 14;
                column[_vec][6] = 2;
                break;
                
                case 3: 
                printf ("\nVoce escolheu a Telha Colonial Pequena");
                printf ("\nInsira a inclinacao minima recomendada pelo fabricante:");
                scanf("%f", &column[_vec][2]);
                column[_vec][3] = 24;
                column[_vec][6] = 3;
                break;
                
                case 4: 
                printf ("\nVoce escolheu a Telha Colonial Grande");
                printf ("\nInsira a inclinacao minima recomendada pelo fabricante:");
                scanf("%f", &column[_vec][2]);
                column[_vec][3] = 16;
                column[_vec][6] = 4;
                break;
                
                case 5: 
                printf ("\nVoce escolheu a Telha Francesa");
                printf ("\nInsira a inclinacao minima recomendada pelo fabricante:");
                scanf("%f", &column[_vec][2]);
                column[_vec][3] = 16;
                column[_vec][6] = 5;
                break;
                
                case 6: 
                printf ("\nVoce escolheu a Telha Portuguesa");
                printf ("\nInsira a inclinacao minima recomendada pelo fabricante:");
                scanf("%f", &column[_vec][2]);
                column[_vec][3] = 17;
                column[_vec][6] = 6;
                break;
                    
                case 7: 
                printf ("\nVoce escolheu a Telha Americana");
                printf ("\nInsira a inclinacao minima recomendada pelo fabricante:");
                scanf("%f", &column[_vec][2]);
                column[_vec][3] = 12.5;
                column[_vec][6] = 7;
                break;    
                    
                default:
                
                printf ("\nVoce nao selecionou uma telha");
                }
            
            
            //calculos
            float altura, h = 0;
            
            altura = (column[_vec][2]/100) * column[_vec][1]; 
            h = sqrt((column[_vec][1] * column[_vec][1]) + (altura * altura));
            column[_vec][4] = (h * column[_vec][0]);
            column[_vec][5] = column[_vec][4] * column[_vec][3];
            case 2:
            
            
            
            printf("\n\n============================================================== VISUALIZACAO DE DADOS =====================================================\n");

            printf(    "----------------------------------------------------------------- DADOS INDIVIDUAIS ------------------------------------------------------\n\n");
                
                for(int i = 1; i<_vec+1  ; i++ ){
                printf("%d | Largura:%.2f m | Comprimento: %.2f m | Inclinacao: %.2f%% | Area da Coberta %.2f m2 | Quantidade de telhas %.2f un\n",
                ++_auxU,column[i][0],column[i][1],column[i][2],column[i][4],column[i][5]);
                }            
            
            _auxU = 0;
            
            break;
            
            default :

                if(flag ==0){
                printf ("\n\nDeseja realmente sair? seus %d dados inseridos serao perdidos\n", _vec);
                printf ("Sim = 1 Nao = 0 \n");
                scanf("%d",&flag);

                    if(flag == 0){
                        break;
                    }
                }
            printf ("Voce saiu!\n");
            run = 0;
            
            
            
        }
    
    }


    return 0;
}