#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
int main (void)
{
	int  i=0;
	float p1[20], p2[20], p3[20], nota_final[20], soma_nota_final_sala[20], nota_media_sala[20];


	do
	{
		printf("Digite a nota da prova 1 do aluno numero %d:\n", i+1);
		scanf("%f", &p1[i]);
        printf("Digite a nota da prova 2 do aluno numero %d:\n", i+1);
		scanf("%f", &p2[i]);
		printf("Digite a nota da prova 3 do aluno numero %d:\n", i+1);
		scanf("%f", &p3[i]);


		if((p1[i]<=p2[i])&& (p1[i]<=p3[i]))

                nota_final[i]=(p2[i]+p3[i])/2;
        else
            if((p2[i]<=p1[i])&&(p2[i]<=p3[i]))

                nota_final[i]=(p1[i]+p3[i])/2;

         else
            if ((p3[i]<=p1[i])&&(p3[i]<=p2[i]))
                nota_final[i]=(p1[i]+p2[i])/2;



			printf("Nota final do aluno %d: %.2f\n\n", i+1, nota_final[i]);

			soma_nota_final_sala[i] = soma_nota_final_sala[i]+nota_final[i];


		i++;
    }while(i<=3);

    nota_media_sala[i]= soma_nota_final_sala[i]/3;
    printf("A nota media da sala %c: %f\n", 130, nota_media_sala[i]);

    system("pause");
    return(0);


}
