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
				
				case TELA_PRINCIPAL:
				
				
				
				break;

				case TELA_CADASTRAR:
					
					agenda.menu = TELA_PRINCIPAL;

				break;

				case TELA_DESCADASTRAR:

					agenda.menu = TELA_PRINCIPAL;
				break;

				case TELA_LISTAR_TODOS:
					
					agenda.menu = TELA_PRINCIPAL;

				break;

				default:
			
					agenda.menu = TELA_PRINCIPAL;
					
				break;
			
			}

		}


return 0;
}
