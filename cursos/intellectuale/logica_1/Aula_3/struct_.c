#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    struct cadastro_aluno
    {
        char nome[40];
        float nota1, nota2;
    };
    struct cadastro_aluno aluno;

    printf("\nCadastro de Aluno\n\n");
    printf("Informe o Nome......:");
    fflush(stdin);
	fgets(aluno.nome,40,stdin);
    printf("Informe a 1a.nota...:");
    scanf("%f", &aluno.nota1);
    printf("Informe a 2a.nota...:");
    scanf("%f", &aluno.nota2);

    printf("\n");
    printf("\nLendo os dados da struct\n");
    printf("Nome....%s\n", aluno.nome);
    printf("Nota1....%6.2f\n", aluno.nota1);
    printf("Nota1....%6.2f\n", aluno.nota2);
    printf("\n\n\n");
    system("pause");
    return(0);

}
