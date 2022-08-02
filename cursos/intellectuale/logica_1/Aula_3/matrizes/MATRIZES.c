/* EXEMLPO DE MATRIZ: ARMAZENAMENTO DE NOTAS PARA 5 ALUNOS COM 2 NOTAS POR ALUNO*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float media[5][2], n;
    int i, j;

    /*printf("\nLeitura e apresentacao de notas armazenadas na matriz\n");  /*Leitura das notas dos alunos */
    for(i=0; i<=4; i++)
    {
        printf("\nInforme as notas do %do. aluno: \n\n", i+1);
        for(j=0; j<=1; j++)
        {
            printf("Nota %d:", j+1);
            scanf("%f", &n);
            media[i][j]= n;

        }
    }
    printf("\n\n*********************Saida de Notas*************************\n\n");
    for(i=0; i<=4; i++)
    {

        printf("\nAs notas do aluno %d sao: \n\n", i+1);
            for(j=0; j<=1; j++)
            {
                printf("Nota %d: %5.2f\n", j+1, media[i][j]);
            }

    }
    system("pause");
    return(0);
    }


