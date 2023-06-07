//Denice Estefania Rico Morones 219421171 D07 Programacion Estructurada 14/03/23
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

int arr[100];
int i;
int *punt; //Se crea un puntero donde le damos el valor del arreglo
 punt=arr; //EL PUNTERO SIEMPRE INICIA EN LA POSICION 0 DEL ARREGLO (arr[0]).
int suma=0;

srand(time(NULL)); //Para que cambie los numeros del rand() cada segundo.

for(i = 0; i < 100; i++)
{
*(punt+i) = rand()%21; //como el *punt siempre va a iniciar en la primera posicion del arreglo (arr[0])
}                      //se le suma i para que recorra todas las posiciones del arreglo hasta 100 (arr[100])
                       //se pone entre parentesis porque se indica que es del puntero
                       //en el rand se pone 21 porque el rango es de entre 0 y 20.


printf("Los elementos son:\n");
for(i=0;i<100;i++)
{
    
    printf("%d ", *(punt+i)); //Aqui se imprimen por posicion del arreglo (arr[i]) hasta 100. 
    
}


for(i=0;i<100;i++)
{
suma+=*(punt+i); //se crea una variable llamada suma que es igual a 0 para que valla almacenando las sumas
                 //suma=suma + *(punt+i), se suma 0 mas el primero elemento del arreglo (i=0) y se almecena en suma
                 //despues la segunda posicion del arreglo con el valor que se almaceno en suma que fue el primer 
                 //elemento del arreglo.
}
printf("La suma los elementos son: %d", suma); //al final todo quedo almacenado en suma.

return 0;
}