#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// funcoes

void criar_arquivo (void);
void gravar_arquivo (void);
void ler_arquivo (void);

FILE *pontarq;
char texto[51];

int main(void)
{

    char n1, resp = 's';

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
                criar_arquivo();

    break;

        case '2':
               gravar_arquivo();

    break;

        case '3':
                ler_arquivo();

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


   void criar_arquivo(void)
    {
          pontarq = fopen("Texto_Arquivo.TXT", "w");
          puts("Digite suas informacoes");
          fflush(stdin);
          fgets(texto, 50, stdin);
          fprintf(pontarq, "%s", texto);

        fclose(pontarq);

            printf("\nArquivo Criado com sucesso");

    }

void gravar_arquivo (void)
    {

         pontarq = fopen("Texto_Arquivo.TXT", "a");
         puts("Digite suas informacoes");
         fflush(stdin);
         fgets(texto, 50, stdin);

         fprintf(pontarq, "%s", texto);

    fclose(pontarq);

              printf("\nArquivo Gravado com sucesso");

    }

 void ler_arquivo (void)
    {
            pontarq = fopen("Texto_Arquivo.TXT","r");
            printf("\n********Leitura de Arquivo**********\n");

            while(fgets(texto, 50, pontarq)!=NULL)
            printf("%s", texto);

        fclose(pontarq);

    }
