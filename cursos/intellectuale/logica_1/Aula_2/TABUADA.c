
/*Tabuda For (repeti��o)- desse jeito tenho + autonomia no comentario*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // biblioteca para o getch()

int main (void)

{
int i, numero, res;      // int (interio) seria o tipo de variavel, sendo indetificada com %d



    printf("Digite o valor para calcular a tabuada  ");
    scanf("%d",&numero);

for (i= 1; i<11; i++)    // i++ seria pra fazer 1 repeti��o, usar + q 1 seria cont =

    {
        res = numero*i;
        printf("%d x %d = % d", numero, i, res);
        printf("\n");

    }
    getch(); // similar fun��o do system("pause"), mas se clicar em qualquer tecla ir� sair do programa.
    return(0);
}
