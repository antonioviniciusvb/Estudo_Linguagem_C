#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
int main (void)
{
	int cont=1;
	float p1 = 0, p2=0, p3 = 0, nota_final=0, soma_nota_final_sala=0, nota_media_sala=0;


	do
	{
		printf("Digite a nota da prova 1 do aluno numero %d:\n", cont);
		scanf("%f", &p1);
        printf("Digite a nota da prova 2 do aluno numero %d:\n", cont);
		scanf("%f", &p2);
		printf("Digite a nota da prova 1 do aluno numero %d:\n", cont);
		scanf("%f", &p3);


		if((p1<=p2)&& (p1<=p3))

                nota_final=(p2+p3)/2;
        else
            if((p2<=p1)&&(p2<=p3))

                nota_final=(p1+p3)/2;

         else
            if ((p3<=p1)&&(p3<=p2))
                nota_final=(p1+p2)/2;



			printf("Nota final do aluno %d: %.2f\n\n", cont, nota_final);

			soma_nota_final_sala = soma_nota_final_sala+nota_final;


		cont++;
    }while(cont<=3);

    nota_media_sala= soma_nota_final_sala/3;
    printf("A nota media da sala %c: %f\n", 130, nota_media_sala);

    system("pause");
    return(0);


}
