#include <stdio.h>
#include <stdlib.h>
int main (void )
{
char nh1[50], ap1; 
float nd1, td, st, ts, t;
int ci1;
puts ("Digite tipo de apto utilizado(A, B, C ou D) ");
ap1 = getchar( );



switch ( ap1 )
{
case 'A':
		printf("Digite o nome do hospede ");
		scanf("%s", nh1 );
		printf("Numero de diarias ");
		scanf("%f", nd1);
		printf("Consumo interno ");
		scanf("%d", ci1);
		break;
}

}
