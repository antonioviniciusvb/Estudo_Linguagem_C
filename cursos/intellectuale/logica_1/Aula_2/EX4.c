#include <stdio.h>
#include <stdlib.h>

int main(void)

{float n1, n2, resultado;

    printf("escreva o valor do primeiro numero (nao colocar valores iguais) ");
    scanf("%f", &n1);
    printf("escreva o valor do segundo numero(nao colocar valores iguais) ");
    scanf("%f", &n2);

    if (n1>n2)
    {
        printf("este e o maior valor %.2f\n",n1);
        scanf("resultado = %2.f\n", resultado);
        resultado = (n1-n2);
        printf("o valor e = %f\n", resultado);
    }
    else
    if (n1<n2)
    {
        printf("este e o maior valor%2.f\n",n2);
        resultado = (n2-n1);
        printf("o valor e = %f\n", resultado);
    }


    system("pause");
    return(0);
}
