#include <stdio.h>
#include <stdlib.h>

int main (void)

{
char op;	
float  q1, j1, total;
puts ("Digite sua opcao de lanche ");
op = getchar();

switch (op)
{
	case'1':
		printf("Digite quantidade de lanches ");
		scanf("%f", &q1);
		total=(q1*5);
		printf("Promocao = 1\nBig Super Sanduba\ntotal a pagar = %2.f\n", total);
		break;

	case'2':
		printf("Digite quantidade de lanches ");
		scanf("%f", &q1);
		total=(q1*3);
		printf("Promocao = 2\nQuase Super Sanduba\ntotal a pagar = %2.f\n", total);
	 	break;

	case'3':
		printf("Digite quantidade de lanches ");
		scanf("%f", &q1);
		total=(q1*1.5);
		printf(" Promocao = 3\nMicro Super Sanduba\ntotal a pagar = %2.f\n", total);
	 	break;
	default:
		printf("Digite opcao 1, 2 ou 3\n");
	}
	system("pause");
	
	
}
	
