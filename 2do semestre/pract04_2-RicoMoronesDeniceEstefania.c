//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 Practica 4 17/02/2023//
#include<stdio.h>
int main()
{
int numero;
int abundante;
int cont;
printf("Digite un numero: ");
scanf("%d", &numero);
for (cont=1; cont<numero; cont++)
{
if (numero%cont==0)
{
	abundante+=cont;
}

}
if(abundante>numero)
{
printf("El numero %d si es abundante", numero);
}
else
{
printf("El numero %d no es abundante", numero);
}
return 0;
}

