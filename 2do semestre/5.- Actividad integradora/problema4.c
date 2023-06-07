//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>
#include <string.h>
#define MAX 20

int reversa(char *palabra, int i);//el puntero es para modificar directamente los
                                  //de la palabra original  

int main()
{
    char palabra[MAX];
    printf("Ingresa una palabra: \n");
    scanf("%s", palabra);
    int i = strlen(palabra);

    printf("La palabra invertida es: ");
    reversa(palabra, i);
    printf("\n");

    return 0;
}

int reversa(char *palabra, int i)
{
    if (i < 0)//si la posicion es 0 se llega al ultimo caracter y regresa la
              //palabra modificada  
    {
        return reversa(palabra, i);
    }
    else
    {
        printf("%c", palabra[i]);//primero imprime la ultima letra(caracter) que sería la 
                                 //ultima posicion del arreglo  
        return reversa(palabra, i - 1);//y regresa la palabra (funcion)
                                       //recorriendo un lugar menos el arreglo 
                                       //para asi invertirla.  
    }
}