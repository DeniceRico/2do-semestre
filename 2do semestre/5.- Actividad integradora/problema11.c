//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>



int main()
{
    
    int vec[5] = {-1, 0, 2, 3, 5};

   
    int tam = sizeof(vec) / sizeof(vec[0]);

    for (int i = 0; i < tam; i++) // la función vector continúa siendo llamada 
                                  //recursivamente para los elementos restantes en el vector, 
                                  //ya que la función se llama a sí misma en cada iteración del 
                                  //ciclo for en la función main.
    {
        if (vector(vec, i, tam) == i) 
        {
            printf("El valor del elemento %d en el vector SI igual a su indice.\n", i);
        } 
        else 
        {
            printf("El valor del elemento %d en el vector NO es igual a su indice.\n", i);
        }
    }

    return 0;
}

int vector(int vec[], int i, int tam)
{
    
    if (i == tam) 
    {
        return 0; 
        
    }

    if (vec[i] == i) 
    {
        return i; //indica que el valor del elemento en esa posición es igual a su índice
    }

    return vector(vec, i + 1, tam); 
    
}