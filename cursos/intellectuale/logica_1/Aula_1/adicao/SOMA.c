#include<stdio.h>
#include<stdlib.h>

int main (void)

{ 
int a, b, soma;

	printf("digite um numero inteiro ");
	scanf("%d", &a);
	printf("digite um numero inteiro ");
	scanf("%d", &b);
	
	soma = a + b;

	printf("Resultado = %d", soma);
	printf("\n");
	system("pause");
	return(0);



}

