/* Testando a função fwrite
-
Grava um arquivo binário
contendo 2 vetores de 20 elementos
cada um: O
primeiro vetor armazena caracteres e o segundo
armazena dados inteiros */
#include <stdio.h>
#include <stdlib.h>
int main()
{
char ch [20] = "Teste geral";
int valor [20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	FILE *ptarq;
	ptarq = fopen ("binario.bin", "wb"); //Se não abriu, cria.
	if (ptarq!=NULL)
	printf ("\n\nArquivo binario.bin foi aberto com sucesso\n");
		else
	{
			printf ("\n\nO arquivo binario.bin não foi aberto\n");
			system ("pause");
			exit (1);
	}
			fwrite (ch, sizeof (char), 20, ptarq);
			fwrite (&valor, sizeof(int), 20, ptarq); //funciona sem o operadorde endereço
			fclose (ptarq);
		
			system ("pause");
			
			return (0);
}

