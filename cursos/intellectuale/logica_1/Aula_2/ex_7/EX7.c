#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)


   
    {
	  int n1, n2, n3; // int variaveis inteiras
	  
	  printf("digite o primeiro valor ");// %d para reconhecer varialvel d
      scanf("%d", &n1); 
      printf("digite o segundo valor ");
      scanf("%d", &n2);
      printf("digite o terceiro valor ");
      scanf("%d", &n3);

      if (n1<n2&&n1<n3)//&& significa e
	 {		
	  	
		  printf("o primeiro valor e o menor = %d\n", n1);
     }
      else  
      	if (n1>n2&&n2<n3)
      {
      	printf("o segundo valor e o menor = %d\n", n2);
	  }
	  else  
      	if (n1>n3&&n2>n3)
      {
      	printf("o terceiro valor e o menor = %d\n", n3);
	  }
	  
	  system("pause");
	  return(0);
}


   
