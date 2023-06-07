//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include<stdio.h>

int main()
{
    int vec1[]={1,2,3,4,5};
    int vec2[]={1,2,3,4,5};

    
    int i=0, longitud1, longitud2;

    longitud1= sizeof(vec1)/sizeof(vec1[0]);//calcular la longitud del vector 1
    longitud2= sizeof(vec2)/sizeof(vec2[0]);//calcular la longitud del vector 2

    int resultado = iguales(longitud1, longitud2, i, vec1, vec2);

    if(resultado)//si retorna 1 es porque es verdadero la funcion se vuelve verdadera
    {
        printf("Son iguales");
    }
    else
    {
        printf("No son iguales");
    }
    
    return 0;

}
int iguales(int longitud1, int longitud2, int i, int vec1[], int vec2[])
{
    
    
    if(i==longitud1&&i==longitud2)
    {
        return 1;
    }

    if(vec1[i]!=vec2[i])
    {
        return 0;
    }

    return iguales(longitud1, longitud2, i+1, vec1, vec2);
    
}