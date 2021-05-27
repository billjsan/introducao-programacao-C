
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 1000

typedef enum{

	TELA_SAIR = -1,
	TELA_PRINCIPAL,
	TELA_CADASTRAR,
	TELA_DESCADASTRAR,
	TELA_LISTAR_TODOS,
} Telas;

typedef struct{

	char nome[128];
	char telefone[64];

} Contato;


typedef struct{

	Telas menu;
	int totalContatos;
	Contato contatos[MAX_CONTATOS];

} AgendaTelefonica;



int main (void){

	AgendaTelefonica agenda;

	memset(&agenda, 0x0, sizeof(agenda));

	agenda.menu = TELA_PRINCIPAL;

		while(agenda.menu != TELA_SAIR){

			switch (agenda.menu){
				
				case TELA_PRINCIPAL:{
				
				printf("----------------------------------------\n");
				printf("\tAGENDA TELEFONICA:\n");
				printf("----------------------------------------\n");
				
				int opcao = -1;
				
				    do{
				        printf("Escolha uma opcao: \n");
				        printf("\tDigite 1 para cadastrar contato\n");
				        printf("\tDigite 2 para reemover contato\n");
				        printf("\tDigite 3 para listar todos os contato\n");
				        printf("\tDigite 0 para sair do programa\n");
				        scanf("%d", &opcao);
				    
				    }while(opcao < 0 || opcao > 3);
				        
				        
				    if(opcao == 0){
				    agenda.menu = TELA_SAIR;
				    }
				    
				    if(opcao == 1){
				    agenda.menu = TELA_CADASTRAR;
				        
				        if(agenda.totalContatos >= MAX_CONTATOS){
				        printf("\tAgenda esta cheia, nao eh possivel adicionar novo contato\n");
				        agenda.menu = TELA_PRINCIPAL;
				            
				        }
				    }
				    
				    if(opcao == 2){
				    agenda.menu = TELA_DESCADASTRAR;
				    
				        if(agenda.totalContatos == 0){
				        printf("\tNao existem contatos cadastrados, impossivel excluir contato\n");    
				        agenda.menu = TELA_PRINCIPAL;    
				        }
				    }
				    
				    if(opcao == 3){
				    agenda.menu = TELA_LISTAR_TODOS;
				    
				        if(agenda.totalContatos == 0){
				        printf("\tNao ha contos salvos, impossivel listar\n");    
				        agenda.menu = TELA_PRINCIPAL;
				        }
				    }
				break;
				}

				case TELA_CADASTRAR:{
						
					agenda.menu = TELA_PRINCIPAL;

				break;
				}
				
				case TELA_DESCADASTRAR:{
				agenda.menu = TELA_PRINCIPAL;
				break;
				}


				case TELA_LISTAR_TODOS:{
				agenda.menu = TELA_PRINCIPAL;
				break;
				}
					
								
				default:{
					agenda.menu = TELA_PRINCIPAL;
					break;
				}

			}

		}

return 0;
}

s