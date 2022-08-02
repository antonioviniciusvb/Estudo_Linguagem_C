#include <stdio.h>
#include <stdlib.h>

int main (void)

{
	
	float sb, ch, pd, desconto, liquido;
	
	printf("insira valor de salario base ");
	scanf("%f", &sb);
	printf("insira valor de carga horaria ");
	scanf("%f", &ch);
	printf("insira valor de percentual de desconto ");
	scanf("%f", &pd);
	

	desconto =  (sb*ch)*pd/100;
	liquido = (sb* ch) -desconto;
	printf("o seu salario liquido e = %8.2f", liquido);
	printf("\n");
	return(0);


}
