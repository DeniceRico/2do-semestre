//Realice una función que reciba como parámetros un valor inicial y un valor final, la función deberá calcular los números primos contenidos en ese rango en un arreglo. 

#include <stdio.h>
int primo(int x, int y);

int main()
{
    int in, fi;
    int arreglo;

    printf("Ingrese un numero inicial: ");
    scanf("%d", &in);
    printf("Ingrese un numero final: ");
    scanf("%d", &fi);

    primo(in, fi);
    
    arreglo = primo(in, fi);
    
    
    printf("Los numeros son: ", arreglo);
    
    return 0;
}

int primo(int x, int y)
{
    int arr[100];
    int i, j, b;
    int es=1;
    b=1;
    for (i=x; i<=y; i++)
    {
       
        for(j=2; j<i; j++)
        {
            arr[b]=i;
            if(i % j==0)
            {
                es=0;
            }
        }
        if(es)
        {
          printf("Los numeros son: %d", arr[i]);  
        }
    }

    return arr;
}