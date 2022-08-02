
/*Tabuda For (repetição)- desse jeito tenho + autonomia no comentario*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // biblioteca para o getch()

int main (void)

{
int i, numero, res;      // int (interio) seria o tipo de variavel, sendo indetificada com %d



    printf("Digite o valor para calcular a tabuada  ");
    scanf("%d",&numero);

for (i= 1; i<11; i++)    // i++ seria pra fazer 1 repetição, usar + q 1 seria cont =

    {
        res = numero*i;
        printf("%d x %d = % d", numero, i, res);
        printf("\n");

    }
    getch(); // similar função do system("pause"), mas se clicar em qualquer tecla irá sair do programa.
    return(0);
}
