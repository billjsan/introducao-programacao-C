/* Operadores Questão 21

Autor: Willian J. dos Santos
ano:   2021 

21) Faça um programa em que receba do usuário informações de cosumo de um carro como: Quilometragem percorrida, litros abastecidos e os valores gastos e imprima na tela.

*/


#include <stdio.h>

int main()
{


float data[50][5]; //Dados

data[0][0] = 0;  
data[0][1] = 0;
data[0][2] = 0;
data[0][3] = 0;
data[0][4] = 0;

int run = 1; 
int selector = 0;
int _ptr = 1;
int _auxU =0;
float _auxSum = 0;
int flag = 0;
float $cons_med, $pay_med = 0;

    //menu principal
    while(run){
    printf("\n\nRegistro de consumo\n");
    printf("ADICIONAR     1\n");
    printf("VER DADOS     2\n");
    printf("SAIR          0\n");
    
  
    scanf("%d",&selector);

        switch(selector){

            // adicionar
            case 1:
            
            _ptr++;
            printf("\nEntre com a quilometragem, Ex: [35.500] km:");
            scanf("%f", &data[_ptr][0]);
            printf("\nEntre com a qde. de combustivel, Ex: [50.5] l:");
            scanf("%f", &data[_ptr][1]);
            printf("\nEntre com o preco do litro, Ex: [6.50] R$:");
            scanf("%f", &data[_ptr][2]);
            
            //calculos
            
                //consumo medio instantaneo = km/l
            data[_ptr][3] = data[_ptr][0] / data[_ptr][1];
            
                // pagamento medio instantaneo = km/R$
            data[_ptr][4] = data[_ptr][0] / data[_ptr][2];

                    // soma total  de Km
            _auxSum = 0; 
                for(int i = _ptr; i>1; i-- ){
                _auxSum = _auxSum + data[i][0];
                }
            data[0][0] = _auxSum;
                
                     //fazendo a soma total de l
            _auxSum = 0 ;
                for(int i = _ptr; i>1; i-- ){
                _auxSum = _auxSum + data[i][1];
                }
            data[0][1] = _auxSum;
            
            
                    //fazendo a soma total de R$
            _auxSum = 0 ;
                for(int i = _ptr; i>1; i-- ){
                 _auxSum =  _auxSum + data[i][2];
                }
            data[0][2] = _auxSum;


                    //media das medias do consumo
            _auxSum = 0 ;
                for(int i = _ptr; i>1; i-- ){
                _auxSum = _auxSum + data[i][3];
                }
            data[0][3] = _auxSum / (_ptr -1);
                
                
                //media das medias do pagamento 
            _auxSum = 0 ;
                for(int i = _ptr; i>1; i-- ){
                _auxSum = _auxSum + data[i][4];
                }
            data[0][4] = _auxSum / (_ptr -1);
                

                //avisos ao usuario
                if(data[0][3] <8.0 ){
                printf("\nO consumo esta muito alto, melhor ir a um mecanico!\n\n");
                }
                else if(data[0][3] > 12){
                printf("\nO consumo esta otimo!\n\n");
                }
                else{
                printf("\nO consumo esta ok!\n\n");
                }
                break;
                
                
            //ver
            case 2:
            
            printf("\n\n============================================================== VISUALIZACAO DE DADOS =====================================================\n");
            printf(  "\n------------------------------------------------------------------ VALORES TOTAIS ------------------------------------------------------\n\n");
            printf("# | Distancia total:%.2f Km | Combustivel total: %.2f l | Valor total R$: %.2f | Consumo medio %.2f Km/l | Custo medio R$: %.2f Km/R$ \n\n",
            data[0][0],data[0][1],data[0][2],data[0][3],data[0][4]);
            printf(    "----------------------------------------------------------------- DADOS INDIVIDUAIS ------------------------------------------------------\n\n");
                
                for(int i = 2; i<_ptr+1  ; i++ ){
                printf("%d | Distancia:%.2f Km | Combustivel: %.2f l | Valor R$: %.2f | Consumo %.2f Km/l | Custo R$: %.2f Km/R$ \n",
                ++_auxU,data[i][0],data[i][1],data[i][2],data[i][3],data[i][4] );
                }            
            
            _auxU = 0;
            break;

           
            default :

                if(flag ==0){
                printf ("\n\nDeseja realmente sair? seus %d dados inseridos serao perdidos\n", _ptr-1);
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

