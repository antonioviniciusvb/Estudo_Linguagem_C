#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)

{
	float n1, n2, n3;
		
	printf("digite sua primeira nota ");
	scanf("%f", &n1);
	printf("digite sua primeira nota ");
	scanf("%f", &n2);
	printf("digite sua primeira nota ");
	scanf("%f", &n3);


	if(n1>n2&&n1>n3)
	
	{
		printf("sua maior nota e = %2.f\n", n1);
	}
	else 
		if(n1<n2&&n2>n3)
		{
			printf("sua maior nota e = %2.f\n", n2);
	    }
	
	else 
		if (n1<n3&&n2<n3)
	   {
	   	printf("sua maior nota e = %2.f\n", n3);
	   }
 
	   system("pause");
	   return(0);

}
