#include<stdio.h>
#include<stdlib.h>
#include<locale.h> 
#include<conio.h>
#include<ctype.h>

void controle_entrada_numerica();


char numero_digitado[50];

int main(void)
{
	printf("Informe um numero: ");
	controle_entrada_numerica();
	
	printf("\n\n\O numero digitado foi: %s\n\n", numero_digitado);
	system("pause");
	return 0;
}

controle_entrada_numerica()
{
	char c;
	int i;
	
	i=0;
	do
	{
		c=getch();
		
		if(isdigit(c)!=0)
		{
				numero_digitado[i]= c;
				i++;
					printf("%c", c);			
		}	
		else if (c ==8&&i)
		{
			numero_digitado[i]='\0';
			i--;
			printf("\b \b");
		}
		
	}while(c!=13);
	numero_digitado[i]='\0';
}
