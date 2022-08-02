#include<stdio.h>
#include<stdlib.h>

float converte_gramas(float pkg)
	{
	float resultado;
	
	resultado = pkg*1000;
	return(resultado);
	}

float calcular_valor_total_produto(float pgramas, float pprecop )
	{
		float resultado;
		
		resultado = pgramas*pprecop;
		return(resultado);
	}	
	
float calcular_imposto(float pvalortotal,float pimposto)

	{
		float resultado;
		
		resultado = (pvalortotal*pimposto)/100;
		return(resultado);
		
	};
float calcular_total_com_imposto(float pvalortotal, float pimposto)
	{
		float resultado;
		
		resultado = (pvalortotal+pimposto);
		return(resultado);
		
	}


int main (void)
{

    char cod_pais=0, resp;
	float  pesokg=0, peso_da_grama=0, valor_total_do_produto=0, preco_da_grama=0, imposto=0, valor_do_imposto=0, valor_total_com_imposto=0;
	int cod_produto=0;


do
	{
	puts("\n\n******************************TABELA*******************************");
	puts("\ncodigo pais de origem    imposto   codigo produto     preco p/grama");
	puts("        1                   0%         1 a 4                10     ");
	puts("        2                   15%        5 a 7                25     ");
	puts("        3                   25%        8 a 10               35     \n\n");




	do
		{
		printf("Digite o codigo do pais de origem: ");
    	scanf(" %c", &cod_pais);
    	    	
		}while((cod_pais != '1')&&(cod_pais != '2')&& (cod_pais != '3'));
   
  	printf("Digite o peso em quilos: ");
    scanf("%f", &pesokg);
    	
   		switch (cod_pais)
		{
	case '1':
			
			do
			{
			
			 printf("Digite o codigo do produto: ");
   			 scanf("%d", &cod_produto);
    		
			}while((cod_produto<1)||(cod_produto>4));
    		
		  	peso_da_grama= converte_gramas(pesokg);
			  
			preco_da_grama = 10;
			imposto = 0;
			
			valor_total_do_produto = calcular_valor_total_produto(peso_da_grama,preco_da_grama);
			valor_do_imposto = calcular_imposto(valor_total_do_produto,imposto);
			valor_total_com_imposto = calcular_total_com_imposto(valor_total_do_produto,valor_do_imposto);
			
			printf("\nCodigo do produto: %.2f",cod_produto);
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
    		
			}while((cod_produto<5)||(cod_produto>7));
    		
		  	peso_da_grama= converte_gramas(pesokg);
			  
			preco_da_grama = 25;
			imposto = 15;
			
			valor_total_do_produto = calcular_valor_total_produto(peso_da_grama,preco_da_grama);
			valor_do_imposto = calcular_imposto(valor_total_do_produto,imposto);
			valor_total_com_imposto = calcular_total_com_imposto(valor_total_do_produto,valor_do_imposto);
			
			
			printf("\nCodigo do produto: %.2f",cod_produto);
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
    		
				}while((cod_produto<8)||(cod_produto>10));
    		
		  		peso_da_grama= converte_gramas(pesokg);
			  
				preco_da_grama = 35;
			
				imposto = 25;
				
				
				valor_total_do_produto = calcular_valor_total_produto(peso_da_grama,preco_da_grama);
				valor_do_imposto = calcular_imposto(valor_total_do_produto,imposto);
				valor_total_com_imposto = calcular_total_com_imposto(valor_total_do_produto,valor_do_imposto);
			
			
				printf("\nCodigo do produto: %.2f",cod_produto);
				printf("\nValor: %.2f gramas\n", peso_da_grama);
				printf("Valor Total Produto: %.2f\n", valor_total_do_produto);
				printf("Taxa de Imposto: %.2f %%\n",imposto);			
				printf("Valor de Imposto: %.2f %\n", valor_do_imposto);
				printf("Valor Total com Imposto: %.2f\n", valor_total_com_imposto);
				
		}
		
		printf("\nDigite 's' caso deseja continuar ou 'n' para sair: ");
		fflush(stdin);
		scanf("%c", &resp);
	
	}while((resp=='s')||(resp=='S'));


    system("pause");
    return(0);
}
