#include <stdio.h>
#include <stdlib.h>

int main (void)

{
    float v1, v2;


    printf("escreva o primeiro valor ");
    scanf("%f",&v1);

    printf("escreva o segundo numero ");
    scanf("%f",&v2);


    if (v1<v2)
    {   printf("%.2f %.2f\n", v1,v2);
    }
    else
        if (v2<v1)
        {   printf("%.2f %.2f\n", v2,v1);
        }
    system("pause");
    return(0);
}
