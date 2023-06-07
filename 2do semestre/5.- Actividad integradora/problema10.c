//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 <
#include <stdio.h>


int main()
{
    int vec[10]={10, 9, 8 ,7 ,6 ,5 ,4 ,3 ,2 , 1};
    int i, tam;


    tam=sizeof(vec)/sizeof(vec[0]);

    for (int i = 0; i < tam; i++) 
    {
        if (vector(vec, i, tam)) 
        {
            printf("El valor del elemento %d SI igual a su indice.\n", i);
        } 
        else 
        {
            printf("El valor del elemento %d NO es igual a su indice.\n", i);
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
        return 1; 
    } 
    else 
    {
        return vector(vec, i + 1, tam); 
    }
}