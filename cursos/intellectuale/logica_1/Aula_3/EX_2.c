#include <stdio.h>
#include <stdlib.h>


int main (void)

{
	float n1;
	int i=0, ins=0, is=0, ibo=0, iot=0;


        printf("\n\nTabela de Classificacao\n\n");
        printf("Nota.............Satisfacao\n");
        printf("0 ate 6..........Nao Satisfatorio\n");
        printf("6.1 ate 7........Satisfatorio\n");
        printf("7.1 ate 8........Bom\n");
        printf("8.1 ate 10.......Otimo\n");




        for(i=1; i<11; i++)

{

    do
      {
          printf("\nDigite nota de Satisfacao conforme tabela acima ");
          scanf("%f", &n1);

        if(n1>10)
            {
                 printf("o valor recebido e >10\n");
            }

      } while(n1>10);

           if (n1<=6)
            {
                ins=ins+1;

            }
            else
                if (n1>6&&n1<=7)
				{
                    is=is+1;

				}
				else
     				if (n1>7&&n1<=8)
						{
                            ibo=ibo+1;

						}
					else
     					if (n1>8&&n1<=10)
							{

                                iot=iot+1;

							}
                        else
                            if(n1>10)
                             {

                                printf("o valor recebido e maior que 10");
                              }


}


        printf("\nnTabela de Classificacao\n");
        printf("Nota.............Satisfacao........Total\n");
        printf("0 ate 6..........Nao Satisfatorio..%d\n", ins);
        printf("6.1 ate 7........Satisfatorio......%d\n", is);
        printf("7.1 ate 8........Bom...............%d\n", ibo);
        printf("8.1 ate 10.......Otimo.............%d\n", iot);

    getch();
    }
