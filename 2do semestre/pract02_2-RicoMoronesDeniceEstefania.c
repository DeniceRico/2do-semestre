//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 Practica 2 11/02/2023//

#include <stdio.h>
int main()
{
	int num, i=1, cont=0;
	printf("Ingrese un numero:");
	scanf("%d", &num);
	
	while(i<= num)
	{
		if(num % i==0)
		{
		cont++;
		}	
		i++;		
	}
	if(cont==2)
	{
		printf("El numero es primo");
	}
	else
	{
		printf("El numero no es primo");
	}
	
	
	return 0;
}
