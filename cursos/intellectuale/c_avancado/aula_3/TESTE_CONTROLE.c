#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 
#include<conio.h>
#include<ctype.h>
//--------------------------------------------------- Variáveis Globais -----------------------------------------------------------------------------
int escolha = 0;

 	struct cadastro_usuario
 	{
 		char nome[70], sexo, sexo_convertido; 
 		char idade[60];
 		char  altura[4];
    
	};struct cadastro_usuario cadastro[5];

//--------------------------------------------------Prótotipo de Funções -----------------------------------------------------------------------------

 int exibir_menu();

 void controle_entrada_nome(int pi);
 void controle_entrada_idade(int pi);
 void controle_entrada_altura(int pi);
 void controle_entrada_sexo(int pi);
 
 //-------------------------------------------------Ínicio da Main----------------------------------------------------------------------------------------
 int main(void)
 {
 	
	
 	
 	int i=0;
 	
 	
 	
 	//Chamada da função de exibir Menu
 	
 	exibir_menu();
 	
 	switch (escolha)
 	{
 			case 1:
			 
			  puts("------------------------ Entrada de Dados --------------------\n");
			  
			  for(i= 0; i<5; i++)
			  {
			  	
				 // caso não seja um caractere alfabetico irá retornar
				
			  		printf("\nDigite %d Nome: ", i+1);
			  		controle_entrada_nome(i);
			
					printf("\nDigite idade : ");
					controle_entrada_idade(i);
		
					printf("\nDigite altura : ");
					controle_entrada_altura(i);

					
					printf("\nDigite seu sexo: ");
			    	controle_entrada_sexo(i);
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
	
	system("pause");
	return(0);
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
 
 void controle_entrada_nome(int pi)
  {
  	
  	
	char c;
	int i;
	
	i=0;
		do
		{
			c=getch();
		
			if((isalpha(c)!=0)||(c == 32))
			{
				cadastro[pi].nome[70] = c;
					i++;
					printf("%c", c);			
			}	
			else
			 if (c ==8&&i)
			{
				cadastro[pi].nome[70]='\0';
				i--;
				printf("\b \b");
			}
		
		}while(c!=13);
	
			cadastro[pi].nome[70]='\0';
}  
 
 
 
void controle_entrada_idade(int pi)
  {
  	
  	
	char c;
	int i,j=0;
	
	i=0;
	do
	{
		c=getch();
		
		if(isdigit(c)!=0)
		{
			cadastro[pi].idade[i] = c;
				i++;
					printf("%c", c);			
		}	
		else if (c ==8&&i)
		{
			cadastro[pi].idade[i]='\0';
			i--;
			printf("\b \b");
		}
		
	}while(c!=13);
	
	cadastro[pi].idade[i]='\0';
		
		
}
 
  void controle_entrada_altura(int pi)
  {
  	
  	
	char c;
	int i;
	
	i=0;
		do
		{
			c=getch();
		
			if((isdigit(c)!=0)||(c ==46))
			{
				cadastro[pi].altura[4] = c;
					i++;
					printf("%c", c);			
			}	
			else
			 if (c ==8&&i)
			{
				cadastro[pi].altura[4]='\0';
				i--;
				printf("\b \b");
			}
		
		}while(c!=13);
	
			cadastro[pi].altura[4]='\0';
}  
 void controle_entrada_sexo(int pi)
  {
 	
 	
 	
 	
 	
 	  	
	char c;
	int i;
	
	i=0;
		do
		{
			c=getch();
		
			if((c == 109)||(c == 110))
			{
				cadastro[pi].sexo = c;
					i++;
					printf("%c", c);			
			}	
			else
			 if (c ==8&&i)
			{
				cadastro[pi].sexo ='\0';
				i--;
				printf("\b \b");
			}
		
		}while(c!=13);
	
			cadastro[pi].sexo='\0'; 	
 	
 }
