//Denice Estefania Rico Morones 219421171 D07 Practica 3, 14/02/23
#include <stdio.h>
int main()
{
	int cont=1, num, mayors=0;
	do{
		printf("ingresa un numero:");
		scanf("%d", &num);
		
		if(num>mayors)
		{
			mayors=num;
		}
		cont++;	
	}
	while(cont<=10);
	printf("El numero mayor es:%d",mayors);
	return 0;
}
