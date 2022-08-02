//Exemplo de programa com passagem de parâmetros por referência.
#include <stdio.h>
#include <conio.h>

//função com passagem por referência
//note que a função tem dois ponteiros como parâmetros
void troca_valores(int *ptrx, int *ptry);

int main(void)
{


	int a, b;
	int *ptrx = &a, *ptry = &b;

	printf("Digite o primerio valor: ");
	scanf(" %d", &a);

	printf("Digite o primerio valor: ");
	scanf(" %d", &b);

	printf("Voce digitou os valores na seguinte ordem: %d e %d\n", a, b);

	/*Chamada da função que troca os valores das variáveis a e b.
	Observe como saõ passados os endereços nos argumentos.
	Esta é uma função chamada por referência*/

	troca_valores(ptrx,ptry);

	//Exibindo os valores já trocados após a chamada da função
	printf("Os valores trocados sao: %d e %d\n", a,b);
	printf("Os valores trocados sao: %d  %d\n", &a,&b);

	getch();
	return 0;

}

//função que troca os valores inteiros apontados por ptrx e ptry

void troca_valores(int *ptrx, int *ptry)
{
	int auxiliar;

	//auxiliar recebe o conteúdo apontado por ptrx

	auxiliar = *ptrx;

	//coloca o valor que está no local apontado por prty em ptrx
	*ptrx = *ptry;

	//finalmente, ptry recebe o valor armazenado em auxiliar
	*ptry =auxiliar;

	return;


}
