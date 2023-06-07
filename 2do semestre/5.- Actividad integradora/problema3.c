//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include<stdio.h>
#define MAX 100

int vec(int A[],int n);
int main()
{
    int n, i;
    int A[MAX];

    printf("Ingrese el numero de elementos para el arreglo: \n");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("Ingrese los elementos del arreglo: ");
        scanf("%d", &A[i]);
    }
    printf("La suma es: %d", vec(A, n-1));
    
    return 0;
}
int vec(int A[],int n)
{
    if(n==0) 
    {
        return A[0];
    }
    else 
    {
        return A[n]+vec(A, n-1);
    }
}