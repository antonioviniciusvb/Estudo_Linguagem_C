//Exemplo de programa com passagem de par�metros por refer�ncia.
#include <stdio.h>
#include <conio.h>

//fun��o com passagem por refer�ncia
//note que a fun��o tem dois ponteiros como par�metros
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

	/*Chamada da fun��o que troca os valores das vari�veis a e b.
	Observe como sa� passados os endere�os nos argumentos.
	Esta � uma fun��o chamada por refer�ncia*/

	troca_valores(ptrx,ptry);

	//Exibindo os valores j� trocados ap�s a chamada da fun��o
	printf("Os valores trocados sao: %d e %d\n", a,b);
	printf("Os valores trocados sao: %d  %d\n", &a,&b);

	getch();
	return 0;

}

//fun��o que troca os valores inteiros apontados por ptrx e ptry

void troca_valores(int *ptrx, int *ptry)
{
	int auxiliar;

	//auxiliar recebe o conte�do apontado por ptrx

	auxiliar = *ptrx;

	//coloca o valor que est� no local apontado por prty em ptrx
	*ptrx = *ptry;

	//finalmente, ptry recebe o valor armazenado em auxiliar
	*ptry =auxiliar;

	return;


}
