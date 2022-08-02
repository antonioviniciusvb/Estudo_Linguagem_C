#include <stdio.h>
#include <conio.h>
int main (void)
{
	float  nota1=0, nota2=0, nota3=0, i=0, maior=0;
	float media=0, media_classe=0, ac=0, acmedia=0, menor_media=0, 	media_menor_classe=0, acmedia_menor=0;
	char naluno[70];

	do
	{
		printf("\nDigite nome do aluno: ");
		fflush(stdin);
		gets(naluno);





		printf("Digite nota de primeria prova ");
		scanf("%f", &nota1);

		printf("Digite nota de primeria prova ");
		scanf("%f", &nota2);

		printf("Digite nota de primeria prova ");
		scanf("%f", &nota3);




		if((nota1<nota2)&&(nota1<nota3))
		{

			media=(nota2+nota3)/2;
			menor_media=nota1;


			printf("\n%s\n", naluno);
			printf("Menor nota descarta:%f\n", nota1);
			printf("Media = %2.f\n", media);

		if(media>70)
		{
		printf("Aluno Aprovado.\n");

		}
		else
			if(media<70)
			{
				printf("Aluno Reprovado.\n");
			}
		}
		if((nota2<nota1)&&(nota2<nota3))
	   	{
			printf("Menor nota descarta:%f\n", nota2);

			media=(nota1+nota3)/2;
			menor_media=nota2;

			printf("Média = %2.f", media);

		if(media>70)
			{
		printf("Aluno Aprovado.\n");

			}
		else
			if(media<70)
			{
				printf("Aluno Reprovado.\n");
			}

		}

		if((nota3<nota1)&&(nota3<nota2))
		{
			printf("Menor nota descarta:%f\n", nota3);

			media=(nota1+nota2)/2;
			menor_media=nota3;

			printf("Média = %2.f\n", media);

		  if(media>70)
			{
		      printf("Aluno Aprovado.\n");
			}
		 else
			if(media<70)
			{
				printf("Aluno Reprovado.\n");
			}

     	}

     	i=i+1;
		ac=ac+1;

		acmedia=acmedia+media;
		media_classe= acmedia/ac;

		if(maior < media_classe)
        {
            maior=media_classe;
        }

		acmedia_menor=acmedia_menor+menor_media;
		media_menor_classe=(acmedia_menor/i);


		printf("Media de classe: %.2f\n", media_classe);
		printf("Media Menor classe:%.2f\n", media_menor_classe);
        printf("Media Maior:%.2f\n", maior);

    }while(ac<=20);



		system("pause");
		return(0);
}
