//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>
#define MAX 10
int main()
{
    int num[MAX];
    int n, x, i=0;
    int max;

    printf("Ingrese el numero de elementos para el arreglo: \n");
    scanf("%d", &n);
    
    if(n>10)
    {
        printf("El maximo de elementos en el arreglo es 10");
    }
    else
    {
    for(x=0;x<n;x++)
    {
        printf("Ingrese los elementos del arreglo: ");
        scanf("%d", &num[x]);   
    }
        printf("El maximo es: %d", mayor(num, n, i, max));
    }
    

    return 0;
}
int mayor(int num[], int n, int i, int max)
{
    if(i == n-1)//caso base
    {
        return max;
    }
    if(num[i] > max)
    {
        max = num[i];//en la primera vuelta max va ser igual al primer elemento del arreglo
                     //en la que sigue si el numero del siguiente elemtno del arreglo es mas
                     //grande que el del anterior, ese nuevo numero se va guardar en el max
    }
    return mayor(num, n, i+1, max);//y va retornar la funcion con el siguiente elemento
                                   //del arreglo; en el caso de no se haya cumplido el if 
                                   //anterior, se retorna el max anterior (el que ha sido mayor
                                   //hasta el momento).
}