#include<stdio.h>
int main(void)

{

    FILE *pontarq;
    char res = 's', texto[51];
    pontarq = fopen("Texto_Arquivo.txt", "a");
    while ((res =='s')||(res =='S'))
    {

        printf("\n\nDigite um texto qualquer\n\n");
        fflush(stdin);
        fgets(texto, 51, stdin);
        fputs(texto, pontarq);
        printf("\nDeseja continuar(S/N)?");
        fflush(stdin);
        scanf("%c", &res);
    }
    fclose(pontarq);
    return(0);
}
