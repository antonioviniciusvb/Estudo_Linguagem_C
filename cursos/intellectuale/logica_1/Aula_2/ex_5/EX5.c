#include <stdio.h>
#include <stdlib.h>

int main (void)

{float a1, b1, area;

    printf("escreva valor da altura do triangulo ");
    scanf("%f", &a1);
    printf("escreva valor da base do triangulo ");
    scanf("%f", &b1);

   area = (a1*b1)/2;

    printf("area = %.2f\n", area);
    system("pause");
    return(0);


}
