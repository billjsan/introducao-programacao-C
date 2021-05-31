/******************************************************************************
QUESTÃO PROPOSTA:

O concreto usinado pronto é comprado por m³, ou seja, para descobrir quanto comprar
é necessário calcular o volume das peças que serão construídas. Neste caso as peças 
podem ser as sapatas, viga baldrame, colunas, vigas, lajes, e assim por diante. 
Supondo que você foi contratado para comprar o concreto necessário para encher 
15 colunas de concreto armado de uma casa: Então, o volume de cada coluna será: 
Volume da coluna = largura x comprimento x altura. Faça um programa para ler os 
parâmetros de cada coluna , dados em metros (largura, comprimento e altura) e 
calcule o volume total a ser contratado para as 15 colunas da casa. Não esqueça 
de inserir um fator corretor referente às perdas de 10%. 

Autor:Willian Santos
data: 12/03/21

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    
    float column[50][5];
    column[0][0] = 0;
    int run = 1, select = 0, _vec = 0, _auxU =0, flag = 0;
    while(run){
      
    printf("\n\n CALCULO DE VOLUME DE COLUNAS \n");
    printf(    "    ADICIONAR COLUNA     1\n");
    printf(    "    VER DADOS            2\n");
    printf(    "    SAIR                 0\n"); 
      
    scanf("%d",&select);  
    
        switch(select){

            // adicionar
            case 1:
            
            _vec++;
            printf("\nEntre com a LARGURA, em metros. Ex: [0.18] m:");
            scanf("%f", &column[_vec][0]);
            printf("\nEntre com o COMPRIMENTO, em metros. Ex: [0.70] m:");
            scanf("%f", &column[_vec][1]);
            printf("\nEntre com a ALTURA, em metros. Ex: [3.50] m:");
            scanf("%f", &column[_vec][2]);
            
            column[_vec][3] = (column[_vec][0] * column[_vec][1] * column[_vec][2]);
            column[0][0] = column[0][0] + (column[_vec][3] * 1.5);
            
            case 2:
            printf("\n\n============================================================== VISUALIZACAO DE DADOS =====================================================\n");
            printf(  "\n------------------------------------------------------------------ VALORES TOTAIS ------------------------------------------------------\n\n");
            printf("\n# | VOLUME TOTAL: %.2f m3\n",column[0][0] );
            printf(    "----------------------------------------------------------------- DADOS INDIVIDUAIS ------------------------------------------------------\n\n");
                
                for(int i = 1; i<_vec+1  ; i++ ){
                printf("%d | Largura:%.2f m | altura: %.2f m | comprimento: %.2f m | volume %.2f m3 \n",
                ++_auxU,column[i][0],column[i][1],column[i][2],column[i][3]);
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

