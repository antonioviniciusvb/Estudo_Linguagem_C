#include <stdio.h>
#include <stdlib.h>

int main (void)	// função main como int e retorno void

{
	float nota1, nota2, media;
	
	printf("digite a nota da primeira prova ");
	scanf("%f",&nota1);
	printf("digite a nota da segunda  prova ");
	scanf("%f",&nota2);
	
	media = (nota1 + nota2)/2;

	if (media >=7)
	{
		printf("aprovado\n");
	}

	else if (media>=5 && media<=7)
	{ 
		printf("exame\n");
	}
	
	else 
	{ 
		 printf("reprovado\n");
	}
	printf("media = %.2f\n", media);
	system("pause");
	return(0);

}
	
