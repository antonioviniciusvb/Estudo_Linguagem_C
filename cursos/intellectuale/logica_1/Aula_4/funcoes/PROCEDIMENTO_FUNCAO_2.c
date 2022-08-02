#include<stdio.h>
#include<stdlib.h>
soma(float n1, float n2) /* n1 e n2 parametros formais*/
    {
    float resultado;
    resultado = n1 + n2;
    printf("Resultado Soma = %8.2f\n", resultado);

    }


subtracao(float n1, float n2) /* n1 e n2 parametros formais*/
    {
    float resultado;
    resultado = n1 - n2;
    printf("Resultado Subtracao = %8.2f\n", resultado);
    }


divisao(float n1, float n2)
    {
    float resultado;
    resultado = n1/ n2;
    printf("Resultado Divisao = %8.2f\n", resultado);
    }


 multiplicacao(float n1, float n2)
    {
    float resultado;
    resultado = n1* n2;
    printf("Resultado Multiplicao = %8.2f\n", resultado);
    
    }


int main (void)
{

    float v1, v2;

    printf("Digite o primeiro valor:");
    scanf("%f", &v1);
    printf("Digite o segundo valor:");
    scanf("%f", &v2);


    soma(v1,v2); /* chmada da função e passagem de parâmetros reais*/
    subtracao(v1,v2);
    divisao(v1,v2);
    multiplicacao(v1,v2);

    system("pause");
    return(0);
}
