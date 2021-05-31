/******************************************************************************

Quanto maior uma casa, maior serC! o custo de construC'C#o. HC! ainda outros fatores
que implicam diretamente no cC!lculo do orC'amento preliminar de custos, como a 
inclinaC'C#o do terreno (IT), o padrC#o de construC'C#o adotado (PCA)pelo proprietC!rio
e o tamanho da equipe de construC'C#o (TEC) que implicarC! diretamente na duraC'C#o 
da obra, sem contar com os adicionais administrativos 
(que desprezaremos neste exemplo) como taxas, impostos, licenC'as, etc. 

>> Implemente um programa que receba o valor do metro quadrado bC!sico em R$ reais 
e a metragem prevista da casa. 

O programa deve receber tambC)m os parC"metros relativos 
C s caracterC-sticas da obra e aplicar respectivamente C s seguintes percentuais de ajustes, 
IT (1-declive (+30%); 2-plano(+0%); 3-aclive(+15%)), 
PCA (1-minha casa minha vida (-28%); 2-PadrC#o professor(-10%); 3-PadrC#o Engenheiro Civil (+25%)) e 
TEC (1- obra normal (+0%); 2 - Equipe grande (+40%); 3 - Equipe reduzida (-5%)). 

Este programa deve calcular o valor do orC'amento preliminar de construC'C#o de uma casa pronta para morar, 
considerando o valor do metro quadrado bC!sico, a metragem, e os parC"metros relativos a IT, PCA e 
TEC fornecidos para pelo contratante. Para cada cC!lculo, 

o usuC!rio escolherC! apenas um valor para cada parC"metro IT, PCA e TEC.

Autor:Willian Santos
data: 12/03/21
*******************************************************************************/
#include <stdio.h>

int
main (){

float column[50][5];
column[0][0] = 0;
int run = 1, select = 0, _vec = 0, _auxU = 0, flag = 0;





  while (run){

      printf ("\n\n CALCULO DE ORCAMENTO PRELIMINAR DE CONTRUCAO CIVIL \n");
      printf ("    ADICIONAR            1\n");
      printf ("    VER ORCAMENTOS       2\n");
      printf ("    SAIR                 0\n");

      scanf ("%d", &select);

      switch (select){

	  // ADICIONAR
	    case 1:

	  _vec++;
	  printf ("\nEntre com valor medio do m2 em Reais:");
	  scanf ("%f", &column[_vec][0]);

	  printf ("\nEntre com a area estimada da construcao:");
	  scanf ("%f", &column[_vec][1]);

	  column[_vec][2] = column[_vec][0] * column[_vec][1];

	  //IT
	  printf ("\n\n\n\n\n\n INCLINACAO DO TERRENO \n");
	  printf ("DECLIVE            1\n");
	  printf ("PLANO              2\n");
	  printf ("ACLIVE             3\n");

	  scanf ("%d", &select);
	  float aux = 0.0;
	  switch (select)
	    {

	    case 1:
	      column[_vec][3] = (0.3 * column[_vec][2]);	// 1-declive (+30%)

	      break;

	    case 2:
	      column[_vec][3] = 0;	// 2-plano(+0%)
	      break;

	    case 3:
	      column[_vec][3] = (0.15 * column[_vec][2]);	//PEC <-  3-aclive(+15%)
	      break;
	    }

	  //PCA
	  printf ("\n\n\n\n\n\n     PADRAO DE CONTRUCAO ADOTADO \n");
	  printf ("PADRAO MINHA CASA MINHA VIDA        1\n");
	  printf ("PADRAO PROFESSOR                    2\n");
	  printf ("PADRAO ENGENHEIRO CIVIL             3\n");

	  scanf ("%d", &select);

	  switch (select)
	    {

	    case 1:
	      column[_vec][4] = (0.28 * column[_vec][2]) * -1;	// 1-minha casa minha vida (-28%)
	      break;

	    case 2:
	      column[_vec][4] = (0.1 * column[_vec][2]) * -1;	// 2-PadrC#o professor(-10%)
	      break;

	    case 3:
	      column[_vec][4] = (0.25 * column[_vec][2]);	//3 -PadrC#o Engenheiro Civil (+25%)
	      break;
	    }

	  //TEC
	  printf ("\n\n\n\n\n\n  TAMANHO DA EQUIPE DE CONSTRUCAO \n");
	  printf ("OBRA NORMAL                  1\n");
	  printf ("EQUIPE GRANDE                2\n");
	  printf ("EQUIPE REDUZIDA              3\n");

	  scanf ("%d", &select);

	  switch (select)
	    {

	    case 1:
	      column[_vec][5] = 0;	//1- obra normal (+0%);
	      break;

	    case 2:
	      column[_vec][5] = (0.4 * column[_vec][2]);	// 2 - Equipe grande (+40%)
	      break;

	    case 3:
	      column[_vec][5] = (0.05 * column[_vec][2]) * -1;	//3 - Equipe reduzida (-5%)
	      break;
	    }

	  // somatorio dos custos
	  column[_vec][6] =(column[_vec][2] + column[_vec][3] + column[_vec][4] + column[_vec][5]);


	  //VER
	case 2:


	  printf
	    ("\n\n============================================================================== VISUALIZACAO DE DADOS =========================================================================\n");

	  printf
	    ("----------------------------------------------------------------------------------- DADOS INDIVIDUAIS ---------------------------------------------------------------------------\n\n");

	  for (int i = 1; i < _vec + 1; i++)
	    {
	      printf
		("%d | Valor do m2:%.2f R$ | Area estimada: %.2f m2 | Valor base: %.2f R$ | Custo IT %.2f R$ | Custo PCA %.2f R$ | Custo TEC %.2f R$ | Custo total PRELIMINAR %.2f R$ \n",
		 ++_auxU, column[i][0], column[i][1], column[i][2],column[i][3],column[i][4], column[i][5], column[i][6]);
	    }

	  _auxU = 0;
	  break;


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

