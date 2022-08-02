#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


/*biblioteca math.h, nela tem fun��es matem�ticas prontas, ex: logaritmos, pot�ncia e arredontamentos.
Todas as fun��es desta biblioteca retornam um valor do tipo double, pois s�o calc�los matem�ticos, assim teremos mais precis�o.*/
 
int main(void)

{
	double x = 8.25;
	
	double arrendonda_pbaixo = 0.0;
	double arrendonda_pcima = 0.0;
	double raiz_quadrada = 0.0;
	double potencia = 0.0;
	
	double seno = 0.0;
	double cosseno = 0.0;
	double tangente = 0.0;
	
	double logaritmo_natural = 0;
	double logaritmo_xbase10 = 0;
	
	puts("\n****************************Utilizando a math.h*********************************");
	printf("\nFuncoes de arredondamentos\n\n");
	printf("Valor original de x = %.2lf\n\n", x);
	
	/*Fun��o floor faz o arrendondamento pbaixo, ex: n1 = 5.80, o mesmo n�mero arrendondado fic� 5.
	 Sempre usar uma vari�vel para atribuir o memso valor do arrendomento, pois o valor puro poder� ser usado mais para frente*/
	
	//floor arrendonda p/ baixo
	
		arrendonda_pbaixo = floor(x);
		printf("Valor aproximado para baixo %.3lf\n\n", arrendonda_pbaixo);
	
//ceil arrendonda p/ cima
		
		arrendonda_pcima = ceil(x);
		printf("Valor aproximado para cima %.3lf\n\n", arrendonda_pcima);

		puts("\n************************Funcoes de raiz e  potenciacao*************************\n");
		
//verifica��o de x, veja que ele n�o foi alterado
		printf("Valor Original de x: %.4lf\n\n", x);
		
//sqrt calcula raiz quadrada
		
		raiz_quadrada = sqrt(x);
		printf("Valor de raiz quadrada: %.4lf\n\n", raiz_quadrada);
		
		x = ceil(x); // arrendondando o x para cima, x passa a valer 9


		potencia = pow(x,2);//pow elevando o valor de x ao quadrado
		
		printf("Valor de %.2lf ao quadrado %lf\n\n", x, potencia);
		
		printf("\n-----------------------------------------------------\n\n");
		printf("Funcoes trigonometricas\n\n");
		
		x = 0; // atribuindo zero em x para fazer os calculos trigonom�tricos
		
		// sin: efetua o calculo de seno
		
		seno = sin(x);
		printf("\nValor de seno %.2lf - %.4lf\n\n", x, seno);

//cos: efetua o calculo de cosseno 		
		cosseno = cos(x);
		printf("\nValor de cosseno de %.2lf - %.4lf\n\n", x, cosseno);		

		x=1; //atribuindo 1 em x
		
//tan: efetua o calculo de tangente
		tangente = tan(x);
		printf("\nValor de tangente de %.2lf - %.5lf\n\n", x, tangente);
		
		printf("\n*********************Funcao logaritmicas***********************\n\n");
		
		x = 2.718282;
				
//log: efetua o calculo logaritmo natural
		
		logaritmo_natural = log(x);	
		printf("\nLogaritmo natural de x %.6lf = %.4lf\n\n", x, logaritmo_natural);
			
		x = 10;
		
		//log10: efetua o caluculo *10
		
		logaritmo_xbase10 = log10(x);
		printf("\nLogaritmo natural de x %.1lf = %.1lf\n\n", x, logaritmo_xbase10);
		printf("\n-------------------------------------------\n\n");
					
	system("pause");
	return(0);
}
