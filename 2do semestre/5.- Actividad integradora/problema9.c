//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>

int mult(int x, int y);
int main()
{
    int x, y;

    printf("Ingresa dos numeros para multiplicarlos: \n");
    scanf("%d %d",&x, &y);

  
    
    
    printf("el resultado de %d * %d es: %d\n", x, y, mult(x,y));
    mult(x,y);

    return 0;
}
int mult(int x, int y)
{
    if(y==0)
    {
        return 0;
    }
    if(y%2==0)
    {
        return mult(2*x, y/2);
    }
    else
    {
        return x + mult(2*x, y/2);
    }
}