//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 Practica 4 17/02/2023//
#include <stdio.h>
int main()
{
	float a;
	int num, cont;
	
	printf("cuantos numeros quiere mostrar:\n");
	scanf("%d", &num);
	
	
	for(cont=1; cont<=num; cont++ )
	{
		
		a+=(float)(2*cont)/(2*cont-1);
		
	}
	printf("El resultado de la suma es: %f", a);
	
	return 0;
}
