/*
Programa: Cadastro de Candidatos
Desenvolvedor: Vinicius Veras 
Data: 04.06.2015
	Objetivo: 
 */ 
 
#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 
#include<conio.h>


int escolha = 0;


//--------------------------------------------------Prótotipo de Funções -----------------------------------------------------------------------------

 int exibir_menu();
 
 
 
 
 //-------------------------------------------------Ínicio da Main----------------------------------------------------------------------------------------
 int main(void)
 {
 	
 	struct cadastro_usuario
 	{
 		char nome[70], sexo; 
 		int idade;
 		float altura;
    
	};struct cadastro_usuario cadastro[5];
 	
 	int i=0;
 	
 	
 	
 	//Chamada da função de exibir Menu
 	
 	exibir_menu();
 	
 	switch (escolha)
 	{
 			case 1:
			  
			  for(i= 0; i<5; i++)
			  {
			  	puts("--------------------------------- Entrada de Dados -------------------------------\n");
			  	printf("Digite %d%c Nome: ", i+1,167, cadastro[i].nome);
			  	flush(stdin);
			  	fgets(cadastro[i].nome, 70, stdin);
			  }
		break;
	
			
			case 2:	
			printf("\nasdd\n");
	
		break;	
 		
			 
			 case 3: 
			 printf("\nasdd\n");
		
		break;	
 		
			
			case 4:
		 	printf("\nasdd\n");
		break;	
	
			 
			 case 5: 
		
		break;
	}
}
	
	
	
 int exibir_menu()
 {
 	
	setlocale(LC_ALL, "");// Função da biblioteca <locale.h>, altera o padrão da linguagem c, para do sistema operacional, assim introduzindo caracteres e acentos
	
 		puts("------------------------ Menu ----------------------------\n");
 		printf("\t\t[1]Entrada de Dados\n\t\t[2]Estatíscas\n\t\t[3]Pesquisa\n\t\t[4]Relátorio\n\t\t[5]Fim\n\n");
 	do
	 {
	 	printf("\t\t Digite sua opção: ");
 		scanf(" %d", &escolha);
 		
		 if((escolha!=1)&&(escolha!=2)&&(escolha!=3)&&(escolha!=4)&&(escolha!=5))
		 {
		 	printf("\n\t\t Opção Inválida!\n\n");
     	 } 		
     
	 }while((escolha!=1)&&(escolha!=2)&&(escolha!=3)&&(escolha!=4)&&(escolha!=5));
 	
	 return(escolha);
 }
