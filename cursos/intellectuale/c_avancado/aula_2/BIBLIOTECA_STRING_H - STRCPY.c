/****************A biblioteca string.h
	A biblioteca string.h da linguagem C, cont�m uma s�rie de fun��es para manipular strings. 
	Biblioteca que cont�m fun��es para tratamento de strings e que permitem diversas opera��es como por exemplo: 
	Copiar strings em C usando strcpy e strncpy; Concatenar strings em linguagem C usando strcat e strncat;
    Descobrir o tamanho de uma string em C usando strlen(); Comparar strings em C usando strcmp();
	
Fun��o: strcpy
	 Sintaxe: strcpy(string_destino, string_origem);
	 Realiza a c�pia do conte�do de uma vari�vel a outra.
	 Obs:Ambas devem ser strings
    
	Exemplo strcpy:*/
	
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>//necess�rio para strcpy

int main(void)
{
	char nome[15], usuario1[8] = "Vinicius", usuario2[9] = "Aleatorio";
	char str[8]= "Curso",str1[8] = "Curso C", str3[10] = "Curso", str2[8], str4[20] = "Curso", str5[17]= " de programacao C", str6[10] = "Curso de C", str7[22] = "Curso de programacao C";
	int tamanho, retorno, retorno2;
	
//fulano de tal ir� copiar conte�do e ir� copiar em nome
 	
 	printf("\n............Strcpy..................\n");
	strcpy(nome, "Fulano de tal da silva");
	//strcpy(string_destino, string_origem);
	//note que a string de destino � nome
	//a string de origem � "Fulano de tal"
	nome[15] = '\0';
	printf("Nome = %s\n", nome);
	
	printf("\n............Strncpy..................\n");


	
/*
	Fun��o: Strncpy
	Sintaxe:
	strncpy(string_destino, string_origem, tamanho);
	Realiza a c�pia do conte�do de uma vari�vel a outra, por�m, deve ser especificado o tamanho a ser copiado.
	Obs:Tanto a vari�vel de destino, como a de origem devem ser strings	
	
	Exemplo Strncpy:*/
	strncpy(str2, str1, 8);

//'\0' terminador de string, depois de 8 ser� descatado tudo 	
	str2[8]= '\0';
	printf("str2 = %s\n", str2);
	
	
//-----------------------------------------------------------------------------------
	
/*Fun��o: strcat
		Sintaxe:
		strcat(string_destino, string_origem);
		Realiza a concatena��o do conte�do de uma vari�vel a outra.
		Ambas devem ser strings.
	
		Exemplo: Strcat*/
		printf("\n.............Strcat..................\n\n");	
		strcat(str3, " de C");
		//Concatena a string "de C" com o conte�do da string str
		
		printf("str3 = %s\n", str3);
		//Ser� exibido curso de C

//-----------------------------------------------------------------------------------
		
	/* Fun��o:Strncat
	   		strncat(string_destino, string_origem, tamanho);
			Sintaxe:
				Realiza a concatena��o do conte�do de uma vari�vel a outra,por�m, deve ser especificado o tamanho a ser concatenado.			
				obs: Ambas devem ser strings.
				
				Ex: strncat*/
				
				printf("\n.............Strncat..................\n\n");
				strncat(str4, str5, 15);
				//concatena a string5 com 15 posi��es da string4
				
				printf("\nstr4 = %s\n", str4);

				//Ser� exibido Curso de Programacao
				
//-----------------------------------------------------------------------------------


/* Fun��o: strlen				
	Sintaxe:
	vari�vel do tipo inteiro = strlen(string);
	Determina o tamanho de uma string.*/

	printf("\n.............Strlen..................\n\n");
	tamanho = strlen(str);	
	printf("\nO tamanho da string %s vale %d  \n", str, tamanho);		
//-----------------------------------------------------------------------------------
/*Fun��o:strcmp
		Sintaxe: vari�vel do tipo inteiro = strcmp(string1, string2);
		Compara o conte�do de duas strings;
		Poss�veis valores de retorno: 
		0: conte�do das strings s�o iguais 
		< 0: conte�do da string1 � menor do que string2 
		> 0: conte�do da string1 � maior do que string2
		Exemplo strcmp:*/
		
		printf("\n.............Strcmp..................\n\n");
		retorno = strcmp(usuario1, usuario2);
		printf("\nRetorno = %d\n", retorno);
//-----------------------------------------------------------------------------------

/*Fun��o:strncmp
Sintaxe: vari�vel do tipo inteiro = strncmp(string1, string2, tamanho);
Tamb�m faz a compara��o do conte�do de duas strings, por�m, deve ser especificado o tamanho a ser comparado;
 Poss�veis valores de retorno: 
 	0: conte�do das strings s�o iguais
  < 0: conte�do da string1 � menor do que string2 
  > 0: conte�do da string1 � maior do que string2		
		exemplo: strncmp:*/
		
		retorno2 = strncmp(str6, str7, 5);
		printf("\nretorno = %d\n", retorno2);
				
		
	getch();
	return(0);	
}
    
    
