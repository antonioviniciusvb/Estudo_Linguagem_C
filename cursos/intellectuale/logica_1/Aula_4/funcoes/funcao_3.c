#include<stdio.h>
#include<stdlib.h>

//-----------------area de prot�tipos de fun��es------------------------------------------------------------------------------------------
float media(float n1, float n2);
float soma (float n1, float n2);
float subtracao (float n1, float n2);
float multiplicacao (float n1, float n2);
float divisao (float n1, float n2);
void cabec(void);
void receber(void);

//---------------------�rea de variaveis globais------------------------------------------------------------------------------------------

float v1, v2;

//----------------------�rea de fun��o principal---------------------------------------------------------------------------------------------

int main (void)
{
    float m, so, su, mul, d;

    receber();//chamada de fun��o receber

    m = media(v1, v2); // chama a fun��o media e atribui o retorno em m
    so = soma(v1, v2);
    su = subtracao(v1,v2);
    mul= multiplicacao(v1, v2);
    d = divisao(v1, v2);

    cabec();

    printf("Media = %5.2f\n", m);
    printf("Soma = %5.2f\n", so);
    printf("subtracao = %5.2f\n", su);
    printf("Multiplicacao = %5.2f\n", mul);
    printf("Divisao = %5.2f\n", d);
    system("pause");
    return 0;
}
//----------------------------------ar�a de fun��es-------------------------------------------------------------------------------------

/* fun��o media
objetivo: calcular media
recebe n1 e n2 do tipo float
retorna a vari�vel resultado que cont�m a media*/

float media (float n1, float n2)
    {

    float resultado;
    resultado = (n1+n2)/2;
    return(resultado);
    }
/* fun��o soma
objetivo: calcular a soma
recebe n1 e n2 tipo float
retorna a vari�vel resultado que cont�m a soma*/

float soma (float n1, float n2)
    {
    float resultado;
    resultado = n1 + n2;
    return(resultado);
    }
/*fun��o subtracao
objetivo: calcular a subtracao
recebe n1 e n2 tipo float
retorna a vari�vel resultado que cont�m a subtracao*/

float subtracao (float n1, float n2)
    {
    float resultado;
    resultado = (n1-n2);
    return(resultado);
    }
/*fun��o multiplicacao
objetivo: calacular  a multiplicacao
recebe n1 e n2 tipo float
retorna a vari�vel resultado que cont�m a multiplicacao*/

float multiplicacao( float n1, float n2)
    {
    float resultado;
    resultado = (n1*n2);
    return(resultado);
    }

/*fun��o divisao
objetivo: calcular a divisao
recebe n1 e n2 tipo float
retorna a vari�vel resultado que cont�m a divisao*/

float divisao( float n1, float n2)
    {
    float resultado;
    resultado =(n1/n2);
    return(resultado);
    }

/*procedimento do cabe�alho
objetivo: imprimir um cabecalho*/

void cabec (void)
    {
    printf("******************RESULTADOS************************\n");
    }


/*procedimento receber
objetivo: receber as vari�veis globais v1 e v2*/

void receber (void)
    {
    printf("Digite o primeiro valor\n");
    scanf("%f", &v1);
    printf("Digite o segundo valor\n");
    scanf("%f", &v2);
    }
