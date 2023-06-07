//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>
#include <string.h>
#define MAX 20

int reversa(char *palabra, int i);
void reversa1(char *palabra2);

int main()
{
    char palabra[MAX];
    
    printf("Ingresa una palabra: \n");
    scanf("%s", palabra);
    int i = strlen(palabra);
    char palabra2[MAX];
    strcpy(palabra2, palabra);

    printf("Metodo recursivo: \n");
    printf("La palabra invertida es: ");
    reversa(palabra, i - 1);
    printf("\n");

    printf("Metodo no recursivo: \n");
    printf("La palabra invertida es: ");
    reversa1(palabra2);
    printf("%s\n", palabra2);

    return 0;
}

int reversa(char *palabra, int i)
{
    if (i < 0)
    {
        return 0;
    }
    else
    {
        printf("%c", palabra[i]);
        return reversa(palabra, i - 1);
    }
}

void reversa1(char *palabra2)
{
    int inicio = 0;
    int fin = strlen(palabra2) - 1;

    while (inicio < fin)
    {
        char temp = palabra2[inicio];
        palabra2[inicio] = palabra2[fin];
        palabra2[fin] = temp;
        inicio++;
        fin--;
    }
}