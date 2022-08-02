#include<stdio.h>
#include<stdlib.h>
#include<string.h>/*
Programa: Escala��o de V�lei
Desenvolvedor: Vinicius Veras 
Data: 16.05.2015
	Objetivo: O program ir� receber 2 times de V�lei(nome do jogador e n�mero), onde ter� op��o de ordenar a escala��o
	por ordem Alfab�tica ou conforme n�mera��o do jogador*/   


//***************************************************Pr�totipos********************
	
void ordena_numero_de_camisas(void);
void ordena_nome(void);
	




//***************************************vari�veis globais******************************
struct time
{	int numero_camisa;
	char nome[11], auxiliar[11];
	int retorno;
}; struct time time1[3];

//***************************************************main*******************************

int main(void)
{
	int i=0,j=0;

//capitando nomes
	
	for(i=0; i<3;i++)
		{		
	
			printf("\nNome[%d] = ", i+1);
			fflush(stdin);
			fgets(time1[i].nome, 11, stdin);
			
		}

			

//capitando n�meros de camisas

	for(i=0; i<3;i++)
	{
		printf("\nCamisa[%d] = ", i+1);
		scanf("%d", &time1[i].numero_camisa);
	
	}


	
	for(i=0; i<3; i++)
	{
		printf("\nNome[%d] = %s\n", i+1, time1[i].nome);
	}
	

	
	ordena_numero_de_camisas();
	ordena_nome();
	
system("pause");


}	
	void ordena_numero_de_camisas(void)
		{
			int tamanho = 3, i=0, j=0, auxiliar=0;
			
			for(i=0; i<tamanho;i++)
			  {	
				for(j= i+1; j<tamanho ;j++)
			     {
			     	if(time1[i].numero_camisa>time1[j].numero_camisa)
			     	{
			     		
			     		printf("\n%d\n", time1[i].retorno);
			     		auxiliar = time1[i].numero_camisa;
			     		time1[i].numero_camisa= time1[j].numero_camisa;
			     		time1[j].numero_camisa = auxiliar; 
					}
				 }
			  }
				for(i=0; i<tamanho;i++)
				{
					printf("numero camisa[%d] = %d\n", i+1, time1[i].numero_camisa);
					
				}
		}


void ordena_nome(void)
{
	int tamanho = 3, i=0, j=0;
	
	for(i=0; i<tamanho; i++)	
	 {	
	 	for(j=i+1; j<tamanho; j++)
	 	{
		 	time1[i].retorno = strcmp(time1[i].nome, time1[j].nome);
		 	
		 	if(time1[i].retorno>0)
		 	{
		 			strcpy(time1[i].auxiliar, time1[i].nome);
		 		
		 			
					strcpy(time1[i].nome, time1[j].nome);
					
					strcpy(time1[i].nome, time1[i].auxiliar);
			}
				
		}
	 }
		for(i=0; i<tamanho;i++)
			printf("\nNome[%d]: %s\n",  i+1, time1[i].nome);
	
}
		

	

	
		
	
	
