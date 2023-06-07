//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>
int factorial (int);
int main()
{
    int numero;
    printf("Ingrese un numero para calcular el factorial: \n");
    scanf("%d", &numero);
    printf("Factorial: %d",factorial(numero));
    
    return 0;
}
int factorial(int n)
{
    if(n==0)
    {
        n=1;
    }
    else
    {
        n = n * factorial(n-1);
    }
    return n;
}