#include<stdio.h>
int main (void)
{
    FILE*pontarq; // ponteiro para o arquivo

    pontarq = fopen("ARQUIVO1.TXT", "a"); // abrindo arquivo
    fclose(pontarq); // fechando arquivo

    printf("Arquivo criado com sucesso!");
    return(0);

}
/* Este programa cria o arquivo texto no mesmo diret�rio do execut�vel do programa*/
