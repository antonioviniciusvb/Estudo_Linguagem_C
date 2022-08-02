#include <stdio.h>
#include <stdlib.h>

int main (void)

{
    int numero, i, total_masc=0, total_fem=0, total_mascexp=0, total_femexp=0;
    float idade, ac_idade=0 ,, idade_media=0;
    char sexo, exp;
    int cont_cad=0;

    for(i=2, i<=2, i++)

 {
    printf("\nDigite o numero do candidato: ");
    scanf("%d", &numero);
    printf("\nDigite a idade: ");
    scanf("%f", &idade);
    printf("\nDigite o sexo do candidato (M ou F): ");
    fflush(stdin);
    scanf("%c", &sexo);
    printf("\nPossui experiencia (S/N): ");
    fflush(stdin);
    scanf("%c", &exp);

     if (sexo=='M'||sexo=='M')
     {
        total_masc=total_masc+1;
     }
     else
       if (sexo=='F'||sexo=='F')
     {
        total_fem=total_fem+1;
     }
        else
            print("Valor invalido");


        ac_idade=ac_idade+idade;
        cont_cad=cont_cad+1;
  }


    {






    }

}
