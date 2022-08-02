#include <stdio.h>
int main(void)
{

FILE *PontArq; // cria variável ponteiro para o arquivo
char testeStr[15];

PontArq = fopen("ARQUIVO2.TXT", "w"); //abre arquivo
printf("\n\nEscreva uma string para testar gravacao de arquivo: ");
fgets(testeStr, 15, stdin);

fprintf(PontArq, "%s", testeStr); // grava a informação no arquivo
fclose (PontArq); // fecha arquivo
printf("Dados gravados com sucesso!");

 return(0);
}
