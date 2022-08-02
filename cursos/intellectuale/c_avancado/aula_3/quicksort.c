#include<stdio.h>

void Quick(int *vetor, int inicio, int fim);

int main(void)
{ 						  
   int vetor[10] = {7, 9, 4, 3, 6, 1, 18, 2, 10, 5};
   int i;   
  
   printf("Vetor desordenado:\n");
  	
	   for(i = 0; i < 10; i++)
	   {
   		   printf("%d ", vetor[i]);
   	   }
  			 printf("\n");   
   
   			Quick(vetor, 0, 9);
   
  		 	printf("Vetor ordenado:\n");
  		
		   for(i = 0; i < 10; i++)
		   {
      			printf("%d ", vetor[i]);
  			}
		
		printf("\n");   
}

void Quick(int *vetor, int inicio, int fim)
{
   int pivo, aux, i, j, meio;
   
   i = inicio; // 1
   j = fim; // 8
   
   meio = (int) ((i + j) / 2); // posição 4
   pivo = vetor[meio]; // posição 4 valor 6
   
   do
   {
      while (vetor[i] < pivo) 
	  	i++;
	  	
		  	while (vetor[j] > pivo) 
	  			j--;
      
      if(i <= j)
	  {
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
 for(i = 0; i < 10; i++)
		   {
      			printf("%d", vetor[i]);
  			}
   }while(j > i);
   
  	 if(inicio < j) 
	   Quick(vetor, inicio, j);
  	 
  	 if(i < fim) 
	   Quick(vetor, i, fim);   

}
