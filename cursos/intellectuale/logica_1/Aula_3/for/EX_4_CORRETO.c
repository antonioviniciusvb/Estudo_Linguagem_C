#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void)
{
	int codigo, i, j;

//recebe e valida os numeros

	do
	{
		puts("Digite um numero entre 2 a 20");
		puts("Digite o valor");
		scanf("%d", &codigo);
		printf("\n");

	}while((codigo<2)||(codigo>20));

	//repete enquanto codigo<2 ou codigo >20

	//Montando a metade superior


	for(i=1; i<=codigo; i++) //i controla a linha
		{
			for(j=1; j<=i; j++) // j controla os valores e escrever em cada linha
			{
				printf("%d", j);
			}

			printf("\n");

		}

	// Montando a metade inferior

		for(i=codigo-1; i>=1; i--)
		{
			for(j=1; j<=i; j ++)
			{
				printf("%d", j);
			}

			printf("\n");
		}

		printf("\n");
		system("pause");
		return(0);

}
