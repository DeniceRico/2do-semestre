//Denice Estefania Rico Morones 219421171 D07 Practica 3, 14/02/23
#include <stdio.h>
int main()
{
int n, a=0, b=1,aux, cont=0;
printf("Cuantos numeros quieres:\n");
scanf("%d", &n);
do
{
	aux=a+b;
	a=b;
	b=aux;
	cont++;
	
	printf("%d, ", aux);
}
while(cont<=n);

return 0;
}
