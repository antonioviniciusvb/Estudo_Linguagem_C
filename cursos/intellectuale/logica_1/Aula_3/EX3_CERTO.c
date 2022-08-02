#include<stdio.h>
#include<stdlib.h>

int main (void)
{
  int numero, total_masc = 0 , total_fem = 0, total_mascExp = 0 , total_femExp = 0;
  
  float idade_media =0, ac_idade=0;  
  int cont_cand = 0 ,i,idade;
  
  char sexo, exp, resp;
  
 
  {
  printf("\nDigite o numero do candidato: ");
  scanf("%d",&numero);
  
  printf("\nDigite a idade: ");
  scanf("%d",&idade);
  
  printf("\nPossui experiencia (S / N)");
  fflush(stdin);
  scanf("%c",&exp);
  
  do
  {
   printf("\nDigite o sexo do candidato (M ou F): ");
   fflush(stdin);
   scanf("%c",&sexo); 
  
   if(sexo == 'M' || sexo == 'm')
   {
     total_masc = total_masc + 1; 
     
     if((exp =='S' || exp == 's') && (idade >= 18))
     {
         total_mascExp = total_mascExp + 1;
     }
   }
   else
      if(sexo == 'F' || sexo =='f')
      {
          total_fem = total_fem + 1;   
          if((exp =='S' || exp == 's')&& (idade >= 18))
          {
           total_femExp = total_femExp + 1;
          }           
      }
      else
         printf("Valor invalido \n\n");  
  }while((sexo != 'M') && (sexo != 'm') && (sexo != 'F')  && (sexo != 'f' ));         
   
   
       
  ac_idade = ac_idade + idade;   
  cont_cand = cont_cand + 1;  
 
  printf("\nDeseja cadastrar outro candidato (S) ou tecle algo para terminar)");
  fflush(stdin);
  scanf("%c",&resp); 
  
 }while(resp == 'S');
 
  printf("\n******** Resultados ********\n");   
  idade_media = ac_idade / cont_cand;  
  printf("\nMedia de idade: %.2f\n",idade_media);
  
  printf("Total de homens: %d\n",total_masc);
  printf("Total de mulheres: %d\n",total_fem);

  printf("Total de homens com EXP: %d\n",total_mascExp);
  printf("Total de mulheres com EXP: %d\n",total_femExp);


  system("pause");
  return(0);
}

