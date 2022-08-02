/****************A biblioteca string.h
	A biblioteca string.h da linguagem C, contém uma série de funções para manipular strings. 
	Biblioteca que contém funções para tratamento de strings e que permitem diversas operações como por exemplo: 
	Copiar strings em C usando strcpy e strncpy; Concatenar strings em linguagem C usando strcat e strncat;
    Descobrir o tamanho de uma string em C usando strlen(); Comparar strings em C usando strcmp();
	
Função: strcpy
	 Sintaxe: strcpy(string_destino, string_origem);
	 Realiza a cópia do conteúdo de uma variável a outra.
	 Obs:Ambas devem ser strings
    
	Exemplo strcpy:*/
	
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>//necessário para strcpy

int main(void)
{
	char nome[15], usuario1[8] = "Vinicius", usuario2[9] = "Aleatorio";
	char str[8]= "Curso",str1[8] = "Curso C", str3[10] = "Curso", str2[8], str4[20] = "Curso", str5[17]= " de programacao C", str6[10] = "Curso de C", str7[22] = "Curso de programacao C";
	int tamanho, retorno, retorno2;
	
//fulano de tal irá copiar conteúdo e irá copiar em nome
 	
 	printf("\n............Strcpy..................\n");
	strcpy(nome, "Fulano de tal da silva");
	//strcpy(string_destino, string_origem);
	//note que a string de destino é nome
	//a string de origem é "Fulano de tal"
	nome[15] = '\0';
	printf("Nome = %s\n", nome);
	
	printf("\n............Strncpy..................\n");


	
/*
	Função: Strncpy
	Sintaxe:
	strncpy(string_destino, string_origem, tamanho);
	Realiza a cópia do conteúdo de uma variável a outra, porém, deve ser especificado o tamanho a ser copiado.
	Obs:Tanto a variável de destino, como a de origem devem ser strings	
	
	Exemplo Strncpy:*/
	strncpy(str2, str1, 8);

//'\0' terminador de string, depois de 8 será descatado tudo 	
	str2[8]= '\0';
	printf("str2 = %s\n", str2);
	
	
//-----------------------------------------------------------------------------------
	
/*Função: strcat
		Sintaxe:
		strcat(string_destino, string_origem);
		Realiza a concatenação do conteúdo de uma variável a outra.
		Ambas devem ser strings.
	
		Exemplo: Strcat*/
		printf("\n.............Strcat..................\n\n");	
		strcat(str3, " de C");
		//Concatena a string "de C" com o conteúdo da string str
		
		printf("str3 = %s\n", str3);
		//Será exibido curso de C

//-----------------------------------------------------------------------------------
		
	/* Função:Strncat
	   		strncat(string_destino, string_origem, tamanho);
			Sintaxe:
				Realiza a concatenação do conteúdo de uma variável a outra,porém, deve ser especificado o tamanho a ser concatenado.			
				obs: Ambas devem ser strings.
				
				Ex: strncat*/
				
				printf("\n.............Strncat..................\n\n");
				strncat(str4, str5, 15);
				//concatena a string5 com 15 posições da string4
				
				printf("\nstr4 = %s\n", str4);

				//Será exibido Curso de Programacao
				
//-----------------------------------------------------------------------------------


/* Função: strlen				
	Sintaxe:
	variável do tipo inteiro = strlen(string);
	Determina o tamanho de uma string.*/

	printf("\n.............Strlen..................\n\n");
	tamanho = strlen(str);	
	printf("\nO tamanho da string %s vale %d  \n", str, tamanho);		
//-----------------------------------------------------------------------------------
/*Função:strcmp
		Sintaxe: variável do tipo inteiro = strcmp(string1, string2);
		Compara o conteúdo de duas strings;
		Possíveis valores de retorno: 
		0: conteúdo das strings são iguais 
		< 0: conteúdo da string1 é menor do que string2 
		> 0: conteúdo da string1 é maior do que string2
		Exemplo strcmp:*/
		
		printf("\n.............Strcmp..................\n\n");
		retorno = strcmp(usuario1, usuario2);
		printf("\nRetorno = %d\n", retorno);
//-----------------------------------------------------------------------------------

/*Função:strncmp
Sintaxe: variável do tipo inteiro = strncmp(string1, string2, tamanho);
Também faz a comparação do conteúdo de duas strings, porém, deve ser especificado o tamanho a ser comparado;
 Possíveis valores de retorno: 
 	0: conteúdo das strings são iguais
  < 0: conteúdo da string1 é menor do que string2 
  > 0: conteúdo da string1 é maior do que string2		
		exemplo: strncmp:*/
		
		retorno2 = strncmp(str6, str7, 5);
		printf("\nretorno = %d\n", retorno2);
				
		
	getch();
	return(0);	
}
    
    
