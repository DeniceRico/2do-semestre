//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>

int potencia(int a, int b) {
    if (b == 0) {
        return 1; // Caso base: cualquier número elevado a 0 es 1
    } else if (b % 2 == 0) {
        int temp = potencia(a, b / 2);
        return temp * temp;
    } else {
        int temp = potencia(a, b / 2);
        return a * temp * temp;
    }
}

int main() {
    int base;
    int exp;
    printf("Ingrese un numero base: \n");
    scanf("%d", &base);

    printf("Ingrese un numero como exponente: \n");
    scanf("%d", &exp);

    int resultado = potencia(base, exp);
    printf("%d^%d = %d\n", base, exp, resultado);
    
    return 0;
}