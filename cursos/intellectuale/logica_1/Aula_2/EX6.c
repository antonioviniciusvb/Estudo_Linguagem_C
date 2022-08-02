#include <stdio.h>
#include <stdlib.h>

          
int main (void)

{
	float n1, total;

    printf("insira seu consumo em kwh ");
    scanf("%f", &n1);

    if (n1<=300)
    {   total = (n1*1.25);
        printf("total a pagar e = %2.f\n", total);
    }
    else
        if(n1<=500)
        {
        total = (n1*1.5);
        printf("total a pagar e = %2.f\n", total);
        }
    else
        if(n1<=600)
        {
        total = (n1*1.75);
        printf("total a pagar e = %2.f\n", total);
        }
    else
        if(n1<=800)
        {
        total = (n1*2);
        printf("total a pagar e = %2.f\n", total);
        }
    else
        if(n1>800)
        {
        total = (n1*2.5);
        printf("total a pagar e = %2.f\n", total);
        }

    system("pause");
    return(0);


}
