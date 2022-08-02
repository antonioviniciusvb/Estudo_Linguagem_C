#include<stdio.h>
#include<stdlib.h>

float calcule_hora_trabalhada(float psalario_minimo)
	{
		
		float resultado;
	
		resultado = psalario_minimo/10;
		return(resultado);
	}

float calcule_salario_mes(float phora_trabalhada, float pvalorhora_trabalhada)
	{
		float resultado;
		
		resultado = phora_trabalhada*pvalorhora_trabalhada;
		return(resultado);
	}	
	
float calcular_acrescimo_por_dependentes(int pnumero_dependentes)

	{
		float resultado;
		
		resultado = (pnumero_dependentes*32);
		return(resultado);
		
	}
	
float calcule_valor_hora_extra(float pnumero_horas_extras, float pvalorhora_trabalhada)
	{
		float resultado;
		
		resultado= (pvalorhora_trabalhada*1.5)*pnumero_horas_extras;
		return(resultado);
		
	}
	
float calcule_salario_bruto(float psalario_mes, float pvalor_dependentes, float pvalor_horas_extras)

	{
		float resultado;
		
		resultado = (psalario_mes+pvalor_dependentes)+pvalor_horas_extras;
		return(resultado);
	}
	
float calcule_imposto_de_renda(float psalario_bruto)

	{
		float resultado;
		
		if(psalario_bruto<200)
				 {
					printf("\nFuncionario Isento\n");
					resultado = psalario_bruto;
				
		 		}
			 else	
					if((psalario_bruto>=200)&&(psalario_bruto<=500))
				{
					resultado = psalario_bruto*0.1;
						
				}
			else			
					if(psalario_bruto>500)
				{
					resultado = psalario_bruto*0.2;
				
				}
			
		return(resultado);
	}
	
float calcule_salario_liquido(float psalario_bruto, float pimposto_de_renda)

	{
		float resultado;
		
		resultado = (psalario_bruto - pimposto_de_renda);
		return(resultado);
	}	
	
float calcule_valor_gratificacao(float psalario_liquido)

	{
		
		float resultado;
			if(psalario_liquido<=350)
				 {
					
					resultado = 100;
				
		 		}
			 else	
					if(psalario_liquido>350)
				{
					resultado = 50;
						
				}
		return(resultado);	
		
	}

float calcule_salario_a_receber(float psalario_liquido, float pgratificacao)
	
	{
		float resultado;
		
		resultado = (psalario_liquido+pgratificacao);
		return(resultado);
	}
	

	
int main (void)
{

    
	float  salario_minimo=0, numero_horas_extras=0, valor_hora_trabalhada=0, salario_mes=0, valor_de_dependentes=0, valor_hora_extra=0;
	float  valor_salario_bruto=0, valor_imposto_de_renda=0, valor_salario_liquido=0, valor_gratificacao=0, valor_salario_a_receber=0;

	int horas_trabalhadas=0, numero_dependentes=0;








		printf("Digite o valor  do salario minimo: ");
    	scanf(" %f", &salario_minimo);
    
		printf("Digite o numero de horas trabalhadas: ");
    	scanf(" %d", &horas_trabalhadas);
    	
		printf("Digite o numero de dependentes do funcionario: ");
    	scanf(" %d", &numero_dependentes);    	    	
		
		printf("Digite o numero de horas extras: ");
    	scanf(" %f", &numero_horas_extras); 
   
   
   		valor_hora_trabalhada = calcule_hora_trabalhada(salario_minimo);
   		salario_mes = calcule_salario_mes(horas_trabalhadas,valor_hora_trabalhada);
   		valor_de_dependentes = calcular_acrescimo_por_dependentes(numero_dependentes);
   		valor_hora_extra= calcule_valor_hora_extra(numero_horas_extras, valor_hora_trabalhada);
   		valor_salario_bruto = calcule_salario_bruto(salario_mes,valor_de_dependentes,valor_hora_extra);
   		valor_imposto_de_renda = calcule_imposto_de_renda(valor_salario_bruto);
   		valor_salario_liquido = calcule_salario_liquido(valor_salario_bruto,valor_imposto_de_renda);
   		valor_gratificacao= calcule_valor_gratificacao(valor_salario_liquido);
   		valor_salario_a_receber= calcule_salario_a_receber(valor_salario_liquido,valor_gratificacao);
   
   
   
   	
			
			
				printf("\nValor Hora Trabalhada: %.2f",valor_hora_trabalhada);
				printf("\nSalario Mes: %6.2f", salario_mes);
				printf("\nAcrescimos p/ dependentes: %6.2f", valor_de_dependentes);
				printf("\nHoras Extras: %6.2f", valor_hora_extra);
				printf("\nSalario Bruto: %6.2f",valor_salario_bruto);			
				printf("\nImposto de Renda: %6.2f", valor_imposto_de_renda);
				printf("\nSalario Liquido: %6.2f", valor_salario_liquido);
				printf("\nGratificacao: %6.2f\n", valor_gratificacao);
				printf("\nSalario a Receber: %6.2f\n", valor_salario_a_receber);
		
		


    system("pause");
    return(0);
}
