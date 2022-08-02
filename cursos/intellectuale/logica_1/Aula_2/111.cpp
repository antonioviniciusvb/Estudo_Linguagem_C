#include <stdio.h>
#include <stdlib.h>

int main (void)

{
char op;	
float  q1,  total;
puts ("Digite sua opcao de lanche ");
op = getchar();

switch (op)
{
	case'1':
		print(" Promoção = 1\nBig Super Sanduba\ntotal a pagar = 5");
		break;

	case'2':
		print(" Promoção = 1\nBig Super Sanduba\ntotal a pagar = 5");
		break;
	 	
	case'3':
		printf("Digite quantidade de lanches ");
		scanf("%f", &q1);
		total=(q1*5);
		print(" Promoção = 1\nMicro Super Sanduba\ntotal a pagar = %2.f", total);
	 	break;
	default:
		printf("Digite opcao 1,2 ou 3\n");
	}
	system("pause");
	
	
}
	
