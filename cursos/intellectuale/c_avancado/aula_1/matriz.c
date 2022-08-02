#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  float matriz_notas[5][2];
  int i, j;
  printf("\nArmazenando e apresentando notas armazenadas na matriz\n");
  /*Leitura das notas dos alunos */
  for (i = 0; i <= 4; i++)
    {
      printf("\ninforme as notas do %do. aluno: \n\n", i+1); 
      for (j = 0; j <= 1; j++)
        {
           printf("Nota %d: ", j+1);
           scanf("%f", &matriz_notas[i][j]);
        }
    }

  printf("\n\n******************* Saida de Notas ********************** \n\n");

  for (i = 0; i <= 4; i++)
    {
      printf("\nAs notas do aluno %d sao : \n\n", i+1); 
      for (j = 0; j <= 1; j++)
        printf("Nota %d: %5.2f\n", j+1, matriz_notas[i][j]);
    }    
  system("PAUSE");
  return(0);
}
