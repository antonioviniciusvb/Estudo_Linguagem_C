/*
Programa: Banco de Dados de Produtos  
Desenvolvedor: Vinicius Veras
Data: 16.05.2015
	
	Objetivo:Faça um programa que receba: 
	 O código de um produto comprado, supondo que a digitação do código do produto seja sempre válida,
	 ou seja, um numero inteiro entre 1 e 10.
	 O peso do produto em quilos. 
	 O código do país de origem, supondo que a digitação do código seja sempre válida, ou seja, um número inteiro entre 1 e 3. 
	
	Tabelas: 

	CÓDIGO DO PAÍS DE ORIGEM          IMPOSTO  CÓDIGO DO PRODUTO       PREÇO POR  GRAMA 
  			1                            0% 		1 a 4                  10 
	        2                           15%         5 a 7                  25      
	        3                           25%         8 a 10                 35 	                            



	Calcule e mostre:
	 		 O peso do produto convertido em gramas. 
		     O preço do total do produto comprado.
			 O valor do imposto, sabendo-se que ele é cobrado sobre o preço total do produto comprado e depende do país de origem.
			 O valor total, preço total do produto mais imposto.


OBS: O programa irá receber os dados, irá encaminhar os dados para suas respectivas funções, retornar o resultado para a main printar na tela.
	 Todos os resultados das funções serão salvos em arquivo texto(caso seja intenção do usuário), onde o usuario irá escolher a forma de gerar o arquivo txt ("w" ou "a").
	 No final do programa terá opcão de retornar para realizar operações novamente e posteriormente exibir na tela o arquivo .txt */



#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

//***************************************************************Protótipos**********************************************************************************************************
float converte_gramas(float pkg);
float calcular_valor_total_produto(float pgramas, float pprecop );
float calcular_imposto(float pvalortotal,float pimposto);
float calcular_total_com_imposto(float pvalortotal, float pimposto);
void criador_de_arquivo_texto (char presp_texto, int pcod_produto, float ppeso_da_grama, float pvalor_total_do_produto, float pimposto, float pvalor_do_imposto, float pvalor_total_com_imposto);
void leia_arquivo_texto(void);

// **********************************************************Variável Globais************************************************************************************
	
float imposto=0;

//***********************************************************Entrada Principal************************************************************************************
int main (void)
{

//***************************************************************Variáveis**********************************************************************************************
   
    char cod_pais=0, resp, resp_texto=0, leitura = 0;
	float  pesokg=0, peso_da_grama=0, valor_total_do_produto=0, preco_da_grama=0, valor_do_imposto=0, valor_total_com_imposto=0;
	int cod_produto=0;

do
	{
		
	system("cls");
	puts("\n\n******************************TABELA*******************************");
	puts("\ncodigo pais de origem    imposto   codigo produto     preco p/grama");
	puts("        1                   0%         1 a 4                10     ");
	puts("        2                   15%        5 a 7                25     ");
	puts("        3                   25%        8 a 10               35     \n\n");



//receber e testar cod_pais 
	do
		{
		printf("Digite o codigo do pais de origem: ");
    	scanf(" %c", &cod_pais);
    	   
		    if ((cod_pais != '1')&&(cod_pais != '2')&& (cod_pais != '3'))	
				{
				
					printf("Valor invalido\n");
				}
    	    
    	    
		}while((cod_pais != '1')&&(cod_pais != '2')&& (cod_pais != '3'));
   
   
 //receber o peso em quilos, para conversão kg p/ gramas
   
   
  		printf("Digite o peso em quilos: ");
    	scanf("%f", &pesokg);
  
  
  /*switch cod_pais, pois para cada caso, um imposto diferente.
  	Depois irá captar os dados e chamar as funções, e printar na tela.*/
  	
  	
   		switch (cod_pais)
		{
			case '1':
			
			do
			{
//irá receber e testar cod_produto 
			
			 printf("Digite o codigo do produto: ");
   			 scanf("%d", &cod_produto);
    		
    			    if ((cod_produto<1)||(cod_produto>4))	
				{
				
					printf("Valor invalido\n");
				}
    		
			}while((cod_produto<1)||(cod_produto>4));

//imposto conforme tabela

			imposto = 0;
			
//preco_da_grama conforme tabela	
		
			preco_da_grama = 10;
//**********************************************************Chamando as Funções************************************************************		
		  	peso_da_grama= converte_gramas(pesokg);
			 	
			valor_total_do_produto = calcular_valor_total_produto(peso_da_grama,preco_da_grama);
			valor_do_imposto = calcular_imposto(valor_total_do_produto,imposto);
			valor_total_com_imposto = calcular_total_com_imposto(valor_total_do_produto,valor_do_imposto);


/*Receber resp_texto.
	CASO S - chamará à função criador_de_arquivo_texto
	CASO N - Não irá fazer nada*/

			
			printf("\nDigite 's' para gerar um arquivo .txt, ou qualquer tecla para sair: ");
			fflush(stdin);
			scanf("%c", &resp_texto);
			
			criador_de_arquivo_texto(resp_texto,cod_produto,peso_da_grama,valor_total_do_produto,imposto,valor_do_imposto,valor_total_com_imposto);
			
//***********************************************Print das Funções************************************************************		
	
			printf("\nCodigo do produto: %.d", cod_produto);
			printf("\nValor: %.2f gramas\n", peso_da_grama);
			printf("Valor Total Produto: %.2f\n", valor_total_do_produto);
			printf("Taxa de Imposto:  %.2f %%\n",imposto);
			printf("Valor de Imposto: %.2f %\n", valor_do_imposto);
			printf("Valor Total com Imposto: %.2f\n", valor_total_com_imposto);
			
	
			
			
  			break;
			 
			 case '2':
			 	
				do
				{
			
			 		printf("Digite o codigo do produto: ");
   					scanf("%d", &cod_produto);
    		
    					if((cod_produto<5)||(cod_produto>7))
    					{
    						printf("\nValor Invalido\n");
						}
    		
				}while((cod_produto<5)||(cod_produto>7));
 

//imposto conforme tabela			
				
			imposto = 15;
			
//preco_da_grama conforme tabela	
		
			preco_da_grama = 25;
			
//**********************************************************Chamando as Funções************************************************************		
   		
		  	peso_da_grama= converte_gramas(pesokg);
		
			valor_total_do_produto = calcular_valor_total_produto(peso_da_grama,preco_da_grama);
			valor_do_imposto = calcular_imposto(valor_total_do_produto,imposto);
			valor_total_com_imposto = calcular_total_com_imposto(valor_total_do_produto,valor_do_imposto);
		
			printf("\nDigite 's' para gerar um arquivo .txt, ou qualquer tecla para sair: ");
			fflush(stdin);
			scanf("%c", &resp_texto);
		
		
			criador_de_arquivo_texto(resp_texto,cod_produto,peso_da_grama,valor_total_do_produto,imposto,valor_do_imposto,valor_total_com_imposto);


//***********************************************Print das Funções************************************************************		

			printf("\nCodigo do produto: %.d",cod_produto);
			printf("\nValor: %.2f gramas\n", peso_da_grama);
			printf("Valor Total Produto: %.2f\n", valor_total_do_produto);
			printf("Taxa de Imposto: %.2f% %%\n",imposto);
			printf("Valor de Imposto: %.2f %\n", valor_do_imposto);
			printf("Valor Total com Imposto: %.2f\n", valor_total_com_imposto);
			
			
			
		break;
			
			case '3':
				
			  do
				{
			
			 		printf("Digite o codigo do produto: ");
   			 		scanf("%d", &cod_produto);
    		
    					if((cod_produto<8)||(cod_produto>10))
    					{
    						printf("\nValor Invalido\n");
						}
    				
    		
				}while((cod_produto<8)||(cod_produto>10));
  
//imposto conforme tabela			
				imposto = 25;
				
				
//preco_da_grama conforme tabela	
  				
				preco_da_grama = 35;

//*************************************************Chamando as Funções************************************************************		
  		
		  		peso_da_grama= converte_gramas(pesokg);
			  			
				valor_total_do_produto = calcular_valor_total_produto(peso_da_grama,preco_da_grama);
				valor_do_imposto = calcular_imposto(valor_total_do_produto,imposto);
				valor_total_com_imposto = calcular_total_com_imposto(valor_total_do_produto,valor_do_imposto);
			
				printf("\nDigite 's' para gerar um arquivo .txt, ou qualquer tecla para sair: ");
				fflush(stdin);
				scanf("%c", &resp_texto);
			
				criador_de_arquivo_texto(resp_texto,cod_produto,peso_da_grama,valor_total_do_produto,imposto,valor_do_imposto,valor_total_com_imposto);
				
//***********************************Print das Funções************************************************************		
				
				printf("\nCodigo do produto: %.d",cod_produto);
				printf("\nValor: %.2f gramas\n", peso_da_grama);
				printf("Valor Total Produto: %.2f\n", valor_total_do_produto);
				printf("Taxa de Imposto: %.2f %%\n",imposto);			
				printf("Valor de Imposto: %.2f %\n", valor_do_imposto);
				printf("Valor Total com Imposto: %.2f\n", valor_total_com_imposto);
			
		
			
				
		}

// Recebe resp, caso 's' voltará para o começo devido o flag 
		
		printf("\nDeseja repetir processo S/N: ");
		fflush(stdin);
		scanf("%c", &resp);
		
		
	
	}while((resp=='s')||(resp=='S'));
	
/*Recebe leitura
	CASO S - chamará a função leia_arquivo_texto
	CASO N - Não fazerá nada, e consequentemente acabando a main*/
	
	do 
	{
		printf("\nDeseja ler arquivo .txt S/N ? ");
		scanf(" %c", &leitura);
		
	

	if((leitura == 's')||(leitura == 'S'))
	
		{
			leia_arquivo_texto();
		}


	 	
	}while((leitura =!'s')||(leitura =!'S')||(leitura=!'n')||(leitura=!'N'));

	 	
		
			puts("\n\n\n\n********************fim**************************\n");
	
    system("pause");
    return(0);
//*************************************************Fim Main****************************************************************************
}

/* 
Função: converte_gramas
Objetivo: converte o valor em kg para gramas
Parametros formais:  pkg
Retorno: Resultado*/

float converte_gramas(float pkg)
	{
		float resultado;
	
		resultado = pkg*1000;
		return(resultado);
	}
/* 
Função: calcular_valor_total_produto
Objetivo: calcula valor total do produto 
Parametros formais:  pgramas, pprecop
Retorno: Resultado*/

float calcular_valor_total_produto(float pgramas, float pprecop )
	{
		float resultado;
		
		resultado = pgramas*pprecop;
		return(resultado);
	}	
/* 
Função: calcular_imposto
Objetivo: calcula o imposto 
Parametros formais:  pvalortotal, pimposto
Retorno: Resultado*/
	
float calcular_imposto(float pvalortotal,float pimposto)

	{
		float resultado;
		
		resultado = (pvalortotal*pimposto)/100;
		return(resultado);
		
	}
/* 
Função: calcular_total_com_imposto
Objetivo: calcula o total com imposto do produto  
Parametros formais:  pvalortotal, pimposto
Retorno: Resultado*/
	
float calcular_total_com_imposto(float pvalortotal, float pimposto)
	{
		float resultado;
		
		resultado = (pvalortotal+pimposto);
		return(resultado);
		
	}
/* 
Função: criador_de_arquivo_texto
Objetivo: criar e gera arquivo texto 

Parametros formais: presp_texto, pcod_produto, ppeso_da_grama, pvalor_total_do_produto, pimposto, 
pvalor_do_imposto, pvalor_total_com_imposto
 
Retorno: Resultado*/
	
void criador_de_arquivo_texto (char presp_texto, int pcod_produto, float ppeso_da_grama, float pvalor_total_do_produto, float pimposto, float pvalor_do_imposto, float pvalor_total_com_imposto)
	{
	
		
			FILE *pontarq;
			
			int n1;
		
		 	if((presp_texto =='s')||(presp_texto=='S'))
		 	 {
					 					 
					 
					 printf("\n\n    1 : CRIAR ARQUIVO\n");
   				     printf("    2 : GRAVAR ARQUIVO\n\n");
  				
			 		
			 		
			 		do
					 {
					 
					  	printf("    Digite sua opcao ");
			 		 	fflush(stdin);
					    scanf("%d", &n1);
			 		 	
			 		 	if((n1!=1)&&(n1!=2))
			 		 		{
			 		 			puts("Valor Invalido!");
			 		 			
						    }
			 		 	
			 		}while((n1!=1)&&(n1!=2));
			 		
			 		
			 		 switch (n1)
			 		 	{
						 
			 		 		case 1:  		 		
			 		 		
			 		 			
			 		 			 pontarq = fopen("Texto_Arquivo.TXT", "w");
			 		 			
			 		 						 
		 					
		 
									fprintf(pontarq, "Codigo_Produto - %.1d\n", pcod_produto);
									fprintf(pontarq, "Peso_da_Grama - %.2f\n", ppeso_da_grama);
									fprintf(pontarq, "Valor_total_do_produto - %.2f\n", pvalor_total_do_produto);
									fprintf(pontarq, "Imposto - %.2f\n", pimposto);
									fprintf(pontarq, "Valor_do_Imposto - %.2f\n", pvalor_do_imposto);
									fprintf(pontarq, "Valor_total_com_imposto - %.2f\n\n", pvalor_total_com_imposto);
												
				
									printf("\nArquivo Texto Gerado com Sucesso!!\n");
					
									fclose(pontarq);		
					break;
						
						case 2:
			 		   		 
		 					pontarq = fopen("Texto_Arquivo.TXT", "a");
		 
									fprintf(pontarq, "Codigo_Produto - %.1d\n", pcod_produto);
									fprintf(pontarq, "Peso_da_Grama - %.2f\n", ppeso_da_grama);
									fprintf(pontarq, "Valor_total_do_produto - %.2f\n", pvalor_total_do_produto);
									fprintf(pontarq, "Imposto - %.2f\n", pimposto);
									fprintf(pontarq, "Valor_do_Imposto - %.2f\n", pvalor_do_imposto);
									fprintf(pontarq, "Valor_total_com_imposto - %.2f\n", pvalor_total_com_imposto);
												
				
					
				
							printf("\nArquivo Texto Gerado com Sucesso!!\n");
					
							fclose(pontarq);
				    break;
					
		  		 } 
			  
		 }
		
			
			
			
	}	

/* 
Função: leia_arquivo_texto
Objetivo: Ler o arquivo texto gerado pelo usuário 

Parametros formais: sem parametros
 
Retorno: void*/

void leia_arquivo_texto(void)
	{
				
					FILE*pontarq;
								
							char textostr[100];
							
							pontarq = fopen("Texto_Arquivo.TXT","r");
							printf("\n********Leitura de Arquivo**********\n\n\n");
				
							
							 while(fgets(textostr, 100, pontarq)!=NULL)
			 					printf("%s", textostr);
			 					
							fclose(pontarq);
	}
