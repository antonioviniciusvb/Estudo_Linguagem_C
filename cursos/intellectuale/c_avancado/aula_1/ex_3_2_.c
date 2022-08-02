/*

Programa: Banco de Dados para Produtos de Exportação (Usando Struct com Vetor)
Desenvolvedor: Vinicius Veras 
Data: 16.05.2015

Objetivo - Elaborar um programa, onde receberá vários produtos: preço unitário, pais de origem (1 Estados Unidos, 2 – México e 3 – outros,
	meio de transporte ( T – terrestre, F- fluvial e A – aéreo), carga perigosa (S – sim, N – não), finalize a entrada de dados com um preço 
	inválido, ou seja, menor ou igual a zero e calcule e mostre. 
	

	
	O valor do imposto usando a tabela a seguir.
	
	PREÇO UNITÁRIO 						PERCENTUAL DE IMPOSTO SOBRE O PREÇO UNITÁRIO 
	
	Até R$ 100,00 										5% 
	Maior que R$ 100,00 								10%	
	
	

	 O valor do transporte usando a tabela a seguir. 

	CARGA PERIGOSA 		PAÍS DE ORIGEM 		VALOR DO TRANSPORTE  
		 					1    				R$ 50,00 
		SIM					2 					R$ 21,00 
							3 					R$ 24,00  
	
							1 					R$ 12,00
		NAO				    2 					R$ 21,00 
							3				    R$ 60,00
 
 
	 O valor do seguro, usando a seguir regra.  
	 Os produtos que vêm do México e os produtos que utilizam transporte aéreo pagam metade do valor do seu preço unitário como seguro. 
     O preço final, ou seja preço unitário mais imposto mais valor do transporte mais valor do seguro. 
	 O total dos impostos. 

obs:	 
	 O programa irá receber os dados, irá encaminhar os dados para suas respectivas funções, retornar o resultado para a main printar na tela.
	 Todos os resultados das funções serão salvos em arquivo texto, onde o usuario irá escolher a forma de gerar o arquivo txt ("w" ou "a").
	 No final do programa terá opcão de exibir na tela o arquivo .txt e um do while caso usuário deseje recomeçar projeto.
*/


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 //****************************************************************Protótipos********************************************************************************************
float calcule_imposto(float ppreco_unitario);
float calcule_valor_do_transporte(int pcodigo_pais, int ptipo_carga);
float calcule_valor_do_seguro(int pcodigo_pais, int pmeio_transporte, float ppreco_unitario);
float calcule_valor_final( float ppreco_unitario, float pvalor_do_imposto, float pvalor_do_transporte, float pvalor_do_seguro);
float calcule_valor_final_de_impostos(float pvalor_do_imposto,float pvalor_do_transporte, float pvalor_do_seguro);
void  criador_de_arquivo_texto (char ppais,char carga,char ptransporte,float ppreco_unitario,float pvalor_do_imposto,float pvalor_do_transporte,float pvalor_do_seguro,float pvalor_final_produto,float pvalor_final_de_impostos);
void  criador_de_arquivo_texto_adicional (float pac_valor_total_de_impostos);
void leia_arquivo_texto();

//****************************************************************Inicio Main*******************************************************************************************
int main(void)
{
//***************************************************************variáveis da main*****************************************************************************************
		
		int quantidade_produto = 0, i, j,k;
		char leitura = 0, carga=0, pais=0,transporte=0, continuar;
		float ac_valor_total_de_impostos=0;
		
		struct cadastro_produto
		{
			char texto[80];
			float preco_unitario, valor_produto, valor_do_transporte, valor_do_imposto, valor_do_seguro, valor_final, valor_final_de_impostos;
			float valor_total_de_impostos_de_todos_produtos;
			int codigo_pais, meio_transporte, tipo_carga;
		
		};
		

  			system("cls");
	  		
	  	 puts("\n*******************************Atencao****************************************\n\nCampo preco unitario: caso valor invalido, ou seja <=0, a operacao\n sera cancelada e os calculos serao feitos com base aos produtos anteriores");
 		
		 do
	  	{
		 
		 	printf("\nDigite quantidade de produtos que serao inseridos: ");
			scanf(" %d", &quantidade_produto);
			
		}while((quantidade_produto<=0));
			
		/*struct está neste local, pois o tamanho do vetor será o mesmo da variável de quantidade_produto. Caso ela esteja antes, irá dar erro, pois
a variável ainda não tinha aparecido*/	
	
		struct cadastro_produto produto[quantidade_produto];

/*for encarregado de repetir o mesmo número de vezes que à variável quantidade_produto, pois o número de produtos 
será o mesmo da struct produto*/
		
	for(i= 0; i<quantidade_produto; i++)
	   {

				

//Recebendo dados: struct texto, preco_unitario

				printf("\nProduto: ");
				fflush(stdin);
				fgets(produto[i].texto, 80, stdin);	
				
			
				puts("\nDigite qualquer valor invalido, <=0, para cancelar operacao");
				printf("\nPreco Unitario do produto: ");
				scanf(" %f", &produto[i].preco_unitario);
			
// if encarregado de sair do loop caso o valor de preco_unitario for <=0, como pede o exercício
					
			    if(produto[i].preco_unitario<=0)
          break;		


				puts("\n Codigo         Paises\n\n   1............Estados Unidos\n   2............Mexico\n   3............Outros\n");

//Recebendo dados e testando: struct codigo_pais.			
			do
			{
	
				printf("Digite Codigo do Pais Origem: ");
				scanf(" %d", &produto[i].codigo_pais);
			
				if((produto[i].codigo_pais!=1)&&(produto[i].codigo_pais!=2)&&(produto[i].codigo_pais!=3))
					{
						puts("\nValor Invalido!!\n");
					}
				
			}while((produto[i].codigo_pais!=1)&&(produto[i].codigo_pais!=2)&&(produto[i].codigo_pais!=3));

//Está Condição irá apenas definir carga perigosa 's' ou 'n' para mostrar no final
			
			if(produto[i].codigo_pais==1)
				{
					pais = 'E';
				}
			else 
				if(produto[i].codigo_pais==2)
				{
					pais = 'M';
				}
			if(produto[i].codigo_pais==3)
				{
					pais = 'O';
				}	
				
//Recebendo dados e testando: struct meio_transporte.			
			
			printf("\n**************Meios de Transporte****************\n");
			puts("\n Terrestre ----------------- tecla - 1\n Fluvial   ----------------- tecla - 2\n Aereo     ----------------- tecla - 3\n");
			
			do
			{
				printf("Digite Meio de transporte: ");
				scanf(" %d", &produto[i].meio_transporte);
				
				if((produto[i].meio_transporte!=1)&&(produto[i].meio_transporte!=2)&&(produto[i].meio_transporte!=3))
					{
						puts("\nValor Invalido!!\n");
					}
				
			}while((produto[i].meio_transporte!=1)&&(produto[i].meio_transporte!=2)&&(produto[i].meio_transporte!=3));
			
			
			if(produto[i].meio_transporte==1)
			{
				transporte = 'T';
			}
			else
				if(produto[i].meio_transporte==2)
				{
					transporte ='F';
				}
				if(produto[i].meio_transporte==3)
				{
					transporte = 'A';
				}
		
//Recebendo dados e testando: struct tipo_carga.
	
				puts("\n*****************Tipo de Carga********************\n");	
				puts("\n Carga Perigosa     ------------ tecla 1\n Carga Nao Perigosa ------------ tecla 2\n");
		
				do
					{
						printf("\nDigite tipo de carga: ");
						scanf("%d", &produto[i].tipo_carga);
					
						if((produto[i].tipo_carga!=1)&&(produto[i].tipo_carga!=2))
						{
							puts("\nValor Invalido!!\n");
						}
				
					}while((produto[i].tipo_carga!=1)&&(produto[i].tipo_carga!=2));
					
//Está Condição irá apenas definir carga perigosa 's' ou 'n' para mostrar no final
					
					if(produto[i].tipo_carga ==1)
						{
							carga = 'S';
						}
					else 
						if(produto[i].tipo_carga ==2)
						{
							carga= 'N';
						}
		
//*******************************************************************Chamando as Funções******************************************************************************		
		
			produto[i].valor_do_imposto = calcule_imposto(produto[i].preco_unitario);
			
			produto[i].valor_do_transporte = calcule_valor_do_transporte(produto[i].codigo_pais,produto[i].tipo_carga);
			
			produto[i].valor_do_seguro = calcule_valor_do_seguro(produto[i].codigo_pais,produto[i].meio_transporte,produto[i].preco_unitario);
			
			produto[i].valor_final = calcule_valor_final(produto[i].preco_unitario,produto[i].valor_do_imposto,produto[i].valor_do_transporte,produto[i].valor_do_seguro);
			
			produto[i].valor_final_de_impostos = calcule_valor_final_de_impostos(produto[i].valor_do_imposto, produto[i].valor_do_transporte,	produto[i].valor_do_seguro);

			criador_de_arquivo_texto (pais,carga,transporte,produto[i].preco_unitario,produto[i].valor_do_imposto,produto[i].valor_do_transporte,produto[i].valor_do_seguro,produto[i].valor_final,produto[i].valor_final_de_impostos);

//acumuluador encarregado de acumular os valores de impostos de todos os produtos

				ac_valor_total_de_impostos = ac_valor_total_de_impostos + produto[i].valor_final_de_impostos;
 	
	   }
	     
//for encarregado de mostrar todos os resultados das funções
						
			   	for(j=0; j<i; j++)
	    		{
					printf("\nProduto.....................................................[%d]: %s", j+1, produto[j].texto);
					printf("Pais de Origem- EUA, MEXICO, OUTROS -'E' M''O'..............[%d]: %.2c", j+1, pais);
					printf("\nValor Unitario..............................................[%d]: %.2f", j+1, produto[j].preco_unitario);
	    			printf("\nValor de Impostos...........................................[%d]: %.2f", j+1, produto[j].valor_do_imposto);
					printf("\nValor de Transporte.........................................[%d]: %.2f", j+1, produto[j].valor_do_transporte);
					printf("\nMeio de Transporte-TERRESTRE, FLUVIAL, AEREO-'T''F''A'......[%d]: %.c", j+1, transporte);
					printf("\nCarga Perigosa S/N..........................................[%d]: %c", j+1, carga);
					printf("\nValor de Seguro.............................................[%d]: %.2f", j+1, produto[j].valor_do_seguro);
					printf("\nValor Total de Impostos.....................................[%d]: %.2f", j+1, produto[j].valor_final_de_impostos);
					printf("\nValor Final do  Produto.....................................[%d]: %.2f\n\n",j+1, produto[j].valor_final);
			
				}
				
/*Printf: Irá mostrar o resultado do acumulador.
  OBS:Não foi coloca dentro do loop, pois não tem necessidade,o mesmo ia aparecer constantemente, onde seu objetivo é aparecerr apenas 1 vez*/
   				
   				
   					if(i!=0)
   					{	
						printf("\nValor Total de Impostos sobre todos Produtos......: %.2f\n\n", ac_valor_total_de_impostos);
					}
					else 
						if(i<=0)
							{
								printf("\nValor invalido!! Operacao cancelada!!\n");
								}	
/*Receber e testar dado de leitura.
  Caso 'S' - chama a função de leitura
  Caso 'N'- sai do do while, consequentemente acabando o programa*/
    
		do
		 {     
			printf("\nDeseja ler arquivo .txt S/N ? ");
			scanf(" %c", &leitura);
			

	
			if((leitura == 's')||(leitura == 'S'))
	
				{
					leia_arquivo_texto();
				}
				else 
					if(((leitura !='s')&&(leitura !='S')&&(leitura!='n')&&(leitura!='N')))
					{
						printf("\nValor Invalido!!\n");
					}
		
		}while((leitura !='s')&&(leitura !='S')&&(leitura!='n')&&(leitura!='N'));    
		
		
	/*função para inserir o acumulador no final do arquivo texto, esta ficou fora do loop, pois iria
 aparecer muitas vezes no arquivo .txt e a intenção é que apareça no fim do mesmo*/	  
			
				criador_de_arquivo_texto_adicional(ac_valor_total_de_impostos);
	
		system("pause");
//***************************************************************final main****************************************************************************	
}
	
//****************************************************************Funções***********************************************************************************************	
	
	
	
/* 
Função: calcule_imposto
Objetivo: Calcular Imposto conforme tabela 
Parametros formais:  ppreco_unitario
Retorno: Resultado*/
	
float calcule_imposto(float ppreco_unitario)
  {
	float resultado;
	
		if((ppreco_unitario>0)&&(ppreco_unitario<=100))
		 {
			resultado = ppreco_unitario*0.05;
		
			
	     }
		
	else 
		if(ppreco_unitario>100)
		 {
			resultado = ppreco_unitario*0.1;
			
		 }
	return(resultado);
  }


/* 
Função: calcule_valor_do_transporte
Objetivo: Calcular valor do transporte, conforme tabela e condições
Parametros formais:  pcodigo_pais, ptipo_carga
Retorno: Resultado*/

float calcule_valor_do_transporte(int pcodigo_pais, int ptipo_carga)
 {
	float resultado;
		
	switch(pcodigo_pais)
	{	
		case 1:
			if(ptipo_carga == 1)
				{
					resultado = 50;
				}
			else 
				if(ptipo_carga == 2)
				{
					resultado = 12;
				}	
				
     	break;
			case 2:
			
				if(ptipo_carga == 1)
					{
						resultado = 21;
					}
				else 
					if(ptipo_carga == 2)
					{
						resultado = 21;
					}
	    break;
			
			case 3:
			
				if(ptipo_carga == 1)
					{
						resultado = 24;
					}
				else 
					if(ptipo_carga == 2)
					{
						resultado = 60;
					}				
		    break;
	}
		return(resultado);
 }


/* 
Função: calcule_valor_do_seguro
Objetivo: Calcular valor do seguro, conforme condições
Parametros formais:  pcodigo_pais, ptipo_carga
Retorno: Resultado*/

float calcule_valor_do_seguro(int pcodigo_pais, int pmeio_transporte, float ppreco_unitario)
	{
		float resultado;
		
		if((pcodigo_pais == 2)&&(pmeio_transporte == 3))
		{
			resultado = ppreco_unitario*0.5;
		
		}
		else 
			if((pcodigo_pais != 2)||(pmeio_transporte != 3))
			{
				resultado = 0;
			}
		return(resultado);
	}

/* 
Função: calcule_valor_final
Objetivo: Calcular valor final
Parametros formais:  ppreco_unitario,  pvalor_do_imposto, pvalor_do_transporte, pvalor_do_seguro
Retorno: Resultado*/


float calcule_valor_final( float ppreco_unitario, float pvalor_do_imposto, float pvalor_do_transporte, float pvalor_do_seguro)
	{
		float resultado;
		
		resultado = ((ppreco_unitario + pvalor_do_imposto)+ (pvalor_do_transporte + pvalor_do_seguro));

		return(resultado);
	}

/* 
Função: calcule_valor_final_de_impostos
Objetivo: Calcular valor final de impostos do Produto
Parametros formais:  pvalor_do_imposto, pvalor_do_transporte,  pvalor_do_seguro
Retorno: Resultado*/


float calcule_valor_final_de_impostos(float pvalor_do_imposto,float pvalor_do_transporte, float pvalor_do_seguro)
	{
		float resultado;
		
		resultado = ((pvalor_do_imposto + pvalor_do_transporte)+ pvalor_do_seguro);
		
		return(resultado);
	}
/* 
Função: criador_de_arquivo_texto
Objetivo: Criar arquivo texto,conforme escolha do usuário 
Parametros formais: pvalor_total_de_impostos_de_todos_produtos, ppreco_unitario,pvalor_do_imposto,pvalor_do_transporte,pvalor_do_seguro,pvalor_final_produto,pvalor_final_de_impostos
Retorno: Resultado*/

		
void criador_de_arquivo_texto (char ppais,char carga,char ptransporte,float ppreco_unitario,float pvalor_do_imposto,float pvalor_do_transporte,float pvalor_do_seguro,float pvalor_final_produto,float pvalor_final_de_impostos)	

	{
		
		FILE *pontarq;
			
			int n1;			 
					 
					 printf("\n\n    1 : CRIAR ARQUIVO\n");
   				     printf("    2 : GRAVAR ARQUIVO\n\n");
  				
			 		
			 		
			 		do
					 {
					 
					  	printf("    Digite sua opcao ");
			 		 	fflush(stdin);
					    scanf(" %d", &n1);
			 		 	
			 		 	if((n1!=1)&&(n1!=2))
			 		 		{
			 		 			puts("Valor Invalido!");
			 		 			
						    }
			 		 	
			 		}while((n1!=1)&&(n1!=2));
			 		
			 		
		 switch (n1)
			 		{
						 
			 		 		case 1:  		 		
			 		 		
			 		 			
			 		 			 pontarq = fopen("Texto_Arquivo_EX3.TXT", "w");
			 		 			
			 		 						 
		 								fprintf(pontarq, "Codio Pais de Origem: - %.c;", ppais);
										fprintf(pontarq, "Valor_Unitario: - %.2f;", ppreco_unitario);
										fprintf(pontarq, "Valor_do_Imposto - %.2f;", pvalor_do_imposto);
										fprintf(pontarq, "Valor_do_transporte- %.2f;", pvalor_do_transporte);
										fprintf(pontarq, "Meio de Transporte - %c;",ptransporte);
										fprintf(pontarq, "Carga Perigosa S/N - %c;", carga);
										fprintf(pontarq, "Valor_do_seguro - %.2f;", pvalor_do_seguro);
										fprintf(pontarq, "Valor_total_do_Produto_com_Impostos - %.2f;", pvalor_final_produto);
										fprintf(pontarq, "Valor_total_de_Impostos- %.2f\n", pvalor_final_de_impostos);
								
										
										printf("\nArquivo Texto Gerado com Sucesso!!\n");
					
										fclose(pontarq);		
						break;
						
							case 2:
			 		   		 
		 								pontarq = fopen("Texto_Arquivo_EX3.TXT", "a");
		 
		 
		 						
										
										fprintf(pontarq, "Codio Pais de Origem: - %.c;", ppais);
										fprintf(pontarq, "Valor_Unitario: - %.2f;", ppreco_unitario);
										fprintf(pontarq, "Valor_do_Imposto - %.2f;", pvalor_do_imposto);
										fprintf(pontarq, "Valor_do_transporte- %.2f;", pvalor_do_transporte);
										fprintf(pontarq, "Meio de Transporte - %c;",ptransporte);
										fprintf(pontarq, "Carga Perigosa S/N - %c;", carga);
										fprintf(pontarq, "Valor_do_seguro - %.2f;", pvalor_do_seguro);
										fprintf(pontarq, "Valor_total_do_Produto_com_Impostos - %.2f;", pvalor_final_produto);
										fprintf(pontarq, "Valor_total_de_Impostos- %.2f\n", pvalor_final_de_impostos);
											
				
										printf("\nArquivo Texto Gerado com Sucesso!!\n");
					
										fclose(pontarq);
				   			
						 break;
					 }
   
    }
/* 
Função: leia_arquivo_texto
Objetivo: Ler o arquivo e mostrar na tela .txt, caso seja o desejo do usuario
Parâmetros formais: não terá parâmetro, a main irá apenas chamar a função 
Retorno: void*/
		
void leia_arquivo_texto()
	{
				
					FILE*pontarq;
								
							char textostr[100];
							
							pontarq = fopen("Texto_Arquivo_EX3.TXT","r");
							printf("\n********Leitura de Arquivo**********\n");
				
							
							 while(fgets(textostr, 100, pontarq)!=NULL)
			 					printf("%s", textostr);
			 					
							fclose(pontarq);
	}
	
/* 
Função: criador_de_arquivo_texto_adicional
Objetivo: criara o ac_valor_total_de_impostos no arquivo já existente
Parametros formais:  pac_valor_total_de_impostos
Retorno: void*/			

void criador_de_arquivo_texto_adicional(float pac_valor_total_de_impostos)
	{
			FILE*pontarq;
				
			  pontarq = fopen("Texto_Arquivo_EX3.TXT", "a");
			  
			  fprintf(pontarq,"Imposto Total de todos produtos - %.2f", pac_valor_total_de_impostos);
			  
			  fclose(pontarq);	
	}		
