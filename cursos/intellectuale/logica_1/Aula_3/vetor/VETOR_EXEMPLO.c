#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int notas[5] = {18, 12, 95, 99, 22};  // declarando e inicializando o vetor
    int i;

    printf("Valores do Vetor\n");


    for(i=0; i<=4; i++)
    {


     //printf("notas[0]=%d\n", notas[0]);
     //printf("notas[1]=%d\n", notas[1]);
     //printf("notas[2]=%d\n", notas[2]);
     //printf("notas[3]=%d\n", notas[3]);
     //printf("notas[4]=%d\n", notas[4]);
     //printf("notas[5]=%d\n", notas[5]);// TOMAR CUIDAR, POIS VETOR ERRADO
        printf("notas[%d]=%d\n", i, notas[i]);


    }
    system("PAUSE");
    }
