#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void )
{
char nh1[50], ap1; 
float nd1, ci1, td, st, ts, t;
puts ("Digite tipo de apto utilizado(A, B, C ou D) ");
ap1 = getchar( );
 
switch ( ap1 )

   {
	case 'A':
	
		printf("Digite o nome do hospede ");
		scanf("%s", nh1);
		printf("Numero de diarias ");
		scanf("%f", &nd1);
		printf("Consumo interno ");
		scanf("%f", &ci1);

		
		
 		td=(nd1*150);// total das diarias
		st=(td+ci1);//subtotal
		ts=(st*10)/100; //taxa de serviço
		t=(st+ts);//total
		printf("\nNome do hospede: %s\n",nh1);
		printf("Tipo de apto: %1.c\n", ap1);
		printf("Total de diarias: %2.f\n", nd1);
		printf("valor diaria = 150\n");
		printf("Consumo interno = %2.f\n", ci1);
		printf("Subtotal: %2.f\n", st);
		printf("Taxa de servico(10%): %2.f\n", ts);
		printf("Total= %2.f\n", t); 
break;
	case 'B' :		
		printf("Digite o nome do hospede ");
		scanf("%s", &nh1 );
		printf("Numero de diarias ");
		scanf("%f", &nd1);
		printf("Consumo interno ");
		scanf("%f", &ci1);

		
		
 		td=(nd1*125);// total das diarias
		st=(td+ci1);//subtotal
		ts=(st*10)/100; //taxa de serviço
		t=(st+ts);//total
		printf("\nNome do hospede: %s\n",nh1);
		printf("Tipo de apto: %1.c\n", ap1);
		printf("Total de diarias: %2.f\n", nd1);
		printf("valor diaria = 125\n");
		printf("Consumo interno = %2.f\n", ci1);
		printf("Subtotal: %2.f\n", st);
		printf("Taxa de servico(10%): %2.f\n", ts);
		printf("Total= %2.f\n", t); 

break;
	case 'C' :	
		printf("Digite o nome do hospede ");
		scanf("%s", &nh1 );
		printf("Numero de diarias ");
		scanf("%f", &nd1);
		printf("Consumo interno ");
		scanf("%f", &ci1);

		
		
 		td=(nd1*100);// total das diarias
		st=(td+ci1);//subtotal
		ts=(st*10)/100; //taxa de serviço
		t=(st+ts);//total
		printf("\nNome do hospede: %s\n",nh1);
		printf("Tipo de apto: %1.c\n", ap1);
		printf("Total de diarias: %2.f\n", nd1);
		printf("valor diaria = 100\n");
		printf("Consumo interno = %2.f\n", ci1);
		printf("Subtotal: %2.f\n", st);
		printf("Taxa de servico(10%): %2.f\n", ts);
		printf("Total= %2.f\n", t); 

break;
	case'D':	
		printf("Digite o nome do hospede ");
		scanf("%s", &nh1 );
		printf("Numero de diarias ");
		scanf("%f", &nd1);
		printf("Consumo interno ");
		scanf("%f", &ci1);

		
		
 		td=(nd1*75);// total das diarias
		st=(td+ci1);//subtotal
		ts=(st*10)/100; //taxa de serviço
		t=(st+ts);//total
		printf("\nNome do hospede: %s\n",nh1);
		printf("Tipo de apto: %1.c\n", ap1);
		printf("Total de diarias: %2.f\n", nd1);
		printf("valor diaria = 75\n");
		printf("Consumo interno = %2.f\n", ci1);
		printf("Subtotal: %2.f\n", st);
		printf("Taxa de servico(10%): %2.f\n", ts);
		printf("Total= %2.f\n", t); 
	break;	
   
 default : 
	printf ("Digite entre A, B, C e D\n");
   

	
   	system("PAUSE");
	return 0;
  }

    }
