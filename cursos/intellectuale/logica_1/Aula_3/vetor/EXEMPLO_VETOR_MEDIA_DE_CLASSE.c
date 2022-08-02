/*Calculo de Media da classe para 4 alunos*/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float media[4];
    float mediasala, somanota=0;
    int i;

    printf("\nCalculo de Media\n\n");
    for(i=0; i<=3; i++)
    {
    	
        printf("Informe a %da. nota ", i+1);
        scanf("%f", &media[i]);
        somanota = somanota+media[i];

    }
    mediasala = somanota/4;
    printf("\n A media da classe equivale a: %5.2f\n\n", mediasala);
    system("pause");
    return(0);
}
