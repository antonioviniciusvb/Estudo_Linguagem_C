/* Faça o fluxograma e o teste de mesa para o programa da MATRIZ abaixo */
 #include <stdio.h>
 #include <conio.h>

 int main (void )
 {
    int matriz[2][2], i, j;

    printf("\nDigite valor para os elementos da matriz\n\n");

    for(i=0; i<2; i++)
        for(j=0; j<3; j++)
        {
            printf("\nElemento[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    for(i=0; i<2; i++)
       for(j=0; j<3; j++)
        if(i==j)
            printf("\n%d", matriz[i][j]);

    getch();
    return(0);

 }
