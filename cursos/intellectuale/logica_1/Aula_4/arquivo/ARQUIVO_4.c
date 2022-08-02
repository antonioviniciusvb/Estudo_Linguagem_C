#include<stdio.h>
#include<conio.h>

int main(void)

{

    FILE *pontarq;
    char textostr[51];
    pontarq = fopen("Texto_Arquivo.TXT", "r");

    while(fgets(textostr, 50, pontarq)!=NULL)
        printf("%s", textostr);
    fclose(pontarq);
    getch();
    return(0);
}
