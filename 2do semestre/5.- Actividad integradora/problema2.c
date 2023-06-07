//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include<stdio.h>
int main()
{
    int a, b;
    do
    {
        printf("Ingrese el primer numero: \n");
        scanf("%d", &a);
    } while (a<0);

    do
    {
        printf("Ingresa el segundo numero: \n");
        scanf("%d", &b);
    } while (b<0);
    
    if(a>b)
    {
        printf("El MCD es: %d",mcd(a,b));
    }
    else if(a<b)
    {
        printf("El MCD es: %d",mcd(b,a));
    }
    
    return 0;
}
 int mcd(int a, int b)
 {
    int nose= a%b;
    if(nose==0)
    {
        return b;
    }
    else
    {
        mcd(b, nose);
    }
 }