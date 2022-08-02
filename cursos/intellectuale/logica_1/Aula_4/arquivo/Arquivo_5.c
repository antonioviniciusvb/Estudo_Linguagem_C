#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int main(void)
{
    FILE *pontarq;
    char texto[51], n1, resp = 's';

do {

    printf("\n\n    1 : CRIAR ARQUIVO\n");
    printf("    2 : GRAVAR ARQUIVO\n");
    printf("    3 : LER ARQUIVO\n\n");

    printf("    Digite sua opcao ");
    fflush(stdin);
    scanf("%c", &n1);




switch(n1)
        {

        case'1':
             pontarq = fopen("Texto_Arquivo.TXT", "w");
             puts("Digite suas informacoes");
             fflush(stdin);
             fgets(texto, 50, stdin);
             fprintf(pontarq, "%s", texto);
        fclose(pontarq);

            printf("\nArquivo Criado com sucesso");
    break;

        case '2':
              pontarq = fopen("Texto_Arquivo.TXT", "a");
              puts("Digite suas informacoes");
              fflush(stdin);
              fgets(texto, 50, stdin);

              fprintf(pontarq, "%s", texto);

            fclose(pontarq);

              printf("\nArquivo Gravado com sucesso");
    break;

        case '3':

            pontarq = fopen("Texto_Arquivo.TXT","r");
            printf("\n********Leitura de Arquivo**********\n");
            while(fgets(texto, 50, pontarq)!=NULL)
        printf("%s", texto);

        fclose(pontarq);
    break;
        default:

            {
                printf("\n    Digito Invalido!!\n");
            }

        }


    printf("\nDeseja continuar(S/N)?");
    fflush(stdin);
    scanf("%c", &resp);


   }while(resp =='s'||resp == 'S');

    system("pause");
    return(0);
   }
