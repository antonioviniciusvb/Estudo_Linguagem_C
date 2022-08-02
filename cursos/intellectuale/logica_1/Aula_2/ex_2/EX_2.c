#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float a, peso_ideal;
    char sexo;



    printf ("digite seu sexo,M ou F ");
    fflush(stdin); // função de limpar o bofer do teclado
    scanf ("%c", &sexo);



    if (sexo!='m'&& sexo!='M'&&sexo!='f'&&sexo!='f')
    {
        printf("valor invalido\n");
    }

    if (sexo=='m' || sexo=='M')
    {
        printf("escreva sua altura ");
        scanf ("%f", &a);
        peso_ideal = (72.7*a)-62;
        printf("seu peso ideal e = %2.f\n", peso_ideal);
    }
    else
        if(sexo=='f'|| sexo=='F')

    {
    printf("escreva sua altura ");
    scanf ("%f", &a);
    peso_ideal =(62.1 *a)-48,7;
    printf("seu peso ideal e = %.2f\n", peso_ideal);
    }

    system("pause");
    return(0);





}
