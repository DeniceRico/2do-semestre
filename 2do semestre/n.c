#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    int i;

    // Generar números aleatorios
    srand(time(NULL));  // Inicializar semilla para la función rand()
    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 100;  // Generar un número aleatorio entre 0 y 99
    }

    // Imprimir el arreglo
    printf("Arreglo generado: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}





