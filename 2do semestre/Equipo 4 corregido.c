#include<stdio.h>
int primo(int x, int y)
{
    #define MAX_NUM 1000
    printf("Los numeros primos son: ");
    int i, j, cont;
    int b=0;
    int arreglo[MAX_NUM];
    

    for (i = x; i <= y; i++)
    {
        cont = 0;
        for (j = 1; j <= i; j++)//va empezar a dividir a i entre 1 hasta el numero donde valla i y va verificar cuando divisores tiene
        {
            if (i % j == 0)
            {
                cont++;//si el residuo es 0 el contador aumenta y guardaria los divisores
            }
        }
        if (cont == 2)//si solo tiene dos (el 1 y si mismo) entonces es primo y los imprime
        {
            arreglo[b]=i;
            b++;//va ir recorriendo las posiciones del arreglo hasta que con todos los numeros primos resultantes
           
        } 
    }
    for (i = 0; i < b; i++)//para imprimir los numeros iniciamos desde la primero posicion del arreglo que seria i
                           //hasta que llegue a la ultima posicion del ultimo
                           //numero primo que se verifico                 
    {
        printf("%d ", arreglo[i]);
    }

}
int calcularFactorial(int n) {
    int factorial = 1;
    if (n < 0) {
        return -1;
    } else if (n == 0) {
        return factorial; 
    }

    for (int i = 1; i <= n; i++) {
            factorial *= i;
            }
    return factorial;
}
int primo1(int numero){

    if (numero <= 1){
        return 0;
    }
    for(int i=2; i*i<=numero; i++){
        if(numero % i == 0){
            return 0;
        }
    }
    return 1;
}
int cuadradoperfecto(int num) {
    int i;
    for (i = 1; i * i <= num; i++) {
        if (num % i == 0 && num / i == i) {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int op;
    int num;
    int numero;
    int n;
    int in, fi;
    int arreglo, resultado;

    printf("Bienvenido a menu, ingresa una opcion:\n");
    printf("1. Cuadrados perfectos\n");
    printf("2. Evaluacion de numeros primos\n");
    printf("3. Numeros factoriales\n");
    printf("4. Numeros primos dentro de un arreglo\n");
    scanf("%d",&op);

    switch (op)
    {
    case 1: 
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    if (cuadradoperfecto(num)) {
        printf("%d es un cuadrado perfecto.\n", num);
    } else {
        printf("%d NO es un cuadrado perfecto.\n", num);
    } break;
    case 2: 

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);
    if(primo1(numero)){
        printf("%d es un numero primo.\n", numero);
        return 1;
    }
    else {
        printf("%d no es un numero primo.\n", numero);
    } break;
    case 3: 
    printf("Ingrese un número: ");
    scanf("%d", &n);

    int factorial = calcularFactorial(n);
    if (factorial == -1) {
        printf("Error: número inválido\n");
    } else {
        printf(" el factorial de %d = %d\n", n, factorial);
    } break;
    case 4: 
    printf("Ingrese el valor inicial: ");
    scanf("%d", &in);
    printf("Ingrese el valor final: ");
    scanf("%d", &fi);
    primo(in, fi);
    break;
    
    }
    return 0;
}