#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)

{
	char nh1[50], ap1;
	float ci1, nd1, td, st, ts, t, vtd;

    printf("Digite nome do hospede ");
	//scanf("%s", nh1);
	fflush(stdin);
	gets(nh1);
    fflush(stdin);


do
  {

    printf("Digite tipo de apto (A,B,C ou D) ");
    fflush(stdin);
    scanf("%c", &ap1);

    if((ap1!='A')&&(ap1!='a')&&(ap1!='B')&&(ap1!='b')&&(ap1!='C')&&(ap1!='c')&&(ap1!='D')&&(ap1!='d'))

        {

            printf("Valor invalido\n");

        }


  }while((ap1!='A')&&(ap1!='a')&&(ap1!='B')&&(ap1!='b')&&(ap1!='C')&&(ap1!='c')&&(ap1!='D')&&(ap1!='d'));

	printf("\nNumero de diarias ");
	scanf("%f", &nd1);
	printf("\nDigite Consumo ");
	scanf("%f", &ci1);





switch (ap1)
		{

			case 'A':
			case 'a':

				td =(nd1*150);
				st =(td+ci1);
				vtd = (nd1*150);
				ts =(st*10)/100;
				t =(st+ts);

				fflush(stdin);
				printf("\n%s", nh1);
				printf("\nTipo de apto: %c", ap1);
				printf("\nNumero de diarias = %2.f",nd1);
				printf("\nValor unitario da diaria = 150");
				printf("\nValor total das diaria = %2.f", vtd);
				printf("\nConsumo interno: %2.f", ci1);
				printf("\nSubtotal = %2.f", st);
				printf("\nTaxa de Servico(10%) = %2.f", ts);
				printf("\nTotal = %2.f\n", t);

			break;
                case 'B':
                case 'b':

				td =(nd1*100);
				vtd = (nd1*100);
				st =(td+ci1);
				ts =(st*10)/100;
				t =(st+ts);

				fflush(stdin);
				printf("\n%s", nh1);
				printf("\nTipo de apto: %c", ap1);
				printf("\nNumero de diarias = %2.f",nd1);
				printf("\nValor unitario da diaria = 100");
				printf("\nValor total das diaria = %2.f", vtd);
				printf("\nConsumo interno: %2.f", ci1);
				printf("\nSubtotal = %2.f", st);
				printf("\nTaxa de Servico(10%) = %2.f", ts);
				printf("\nTotal = %2.f\n", t);

			break;
                case 'C':
                case 'c':

				td =(nd1*75);
				vtd = (nd1*75);
				st =(td+ci1);
				ts =(st*10)/100;
				t =(st+ts);

				fflush(stdin);
				printf("\n%s", nh1);
				printf("\nTipo de apto: %c", ap1);
				printf("\nNumero de diarias = %2.f",nd1);
				printf("\nValor unitario da diaria = 75");
				printf("\nValor total das diaria = %2.f", vtd);
				printf("\nConsumo interno: %2.f", ci1);
				printf("\nSubtotal = %2.f", st);
				printf("\nTaxa de Servico(10%) = %2.f", ts);
				printf("\nTotal = %2.f\n", t);
        break;
            case 'D':
            case 'd':

				td =(nd1*50);
				vtd = (nd1*50);
				st =(td+ci1);
				ts =(st*10)/100;
				t =(st+ts);

				fflush(stdin);
				printf("\n%s", nh1);
				printf("\nTipo de apto: %c", ap1);
				printf("\nNumero de diarias = %2.f",nd1);
				printf("\nValor unitario da diaria = 50");
				printf("\nValor total das diaria = %2.f", vtd);
				printf("\nConsumo interno: %2.f", ci1);
				printf("\nSubtotal = %2.f", st);
				printf("\nTaxa de Servico(10%) = %2.f", ts);
				printf("\nTotal = %2.f\n", t);
            break;
              default:
                    printf("Apto invalido!!");
		}

	system("pause");
}
