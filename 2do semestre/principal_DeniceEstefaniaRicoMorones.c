//Denice Estefania Rico Morones 219421171 D07 Programacion Estructurada 
#include "mi_libreria.h"
int main()

{
    int op;
    int num;
    int numero;
    int n;
    int in, fi;
    int arreglo, resultado;
    int op1, op2, op3;

       do
       {
        printf("Bienvenido a menu");
       printf("\nElija una opcion: \n");
       printf("1.- Funciones sin parámetros\n2.- Funciones con parámetros\n3.-  Salir\n");
       scanf("%d", &op1);
        
        switch(op1)
        {
            case 1: 
            do
            { 
            printf("\nElija una funcion: \n");
            printf("1-Tamano de los datos\n");
            printf("2-Triangulo de Pascal\n");
            printf("3-Factorial de un numero\n");
            printf("4-Matriz Triangular inferior\n");
            printf("5-Matriz Identidad\n");
            printf("6- Salir\n");
            scanf("%d", &op2);

                switch(op2)
                {
                case 1: datos(); break;
                case 2: pascal(); break;
                case 3: factorial(); break;
                case 4: matriztri(); break;
                case 5: matrizidn(); break;
                }
            } while (op2!=6);
            printf("Haz salido!\n");
            break;
            
            case 2: 
            do
            {
            printf("Elija una funcion: \n");
            printf("1-Cuadrado perfecto\n");
            printf("2-Evaluar numero primo\n");
            printf("3-Factorial\n");
            printf("4-Numero primos en un rango\n");
            printf("5-Salir\n");
            scanf("%d", &op3);
                
                switch(op3)
                {
                    case 1: 
                        printf("Ingrese un numero entero: ");
                        scanf("%d", &num);
                        if (cuadradoperfecto(num)) {
                        printf("%d es un cuadrado perfecto.\n", num);
                        } 
                        else {
                            printf("%d NO es un cuadrado perfecto.\n", num);
                        } 
                        
                        break;
                    case 2: 
                        printf("Ingrese un numero entero: ");
                        scanf("%d", &numero);
                        if(primo1(numero)){
                        printf("%d es un numero primo.\n", numero);
                        return 1;
                        }
                        else {
                        printf("%d no es un numero primo.\n", numero);
                        } 
                        
                        break;
                    case 3: 
                        printf("Ingrese un número: ");
                        scanf("%d", &n);

                        int factorial = calcularFactorial(n);
                        if (factorial == -1) {
                        printf("Error: número inválido\n");
                        } 
                        else {
                            printf(" el factorial de %d = %d\n", n, factorial);
                        } 
                        
                        break;
                    case 4: 
                        printf("Ingrese el valor inicial: ");
                        scanf("%d", &in);
                        printf("Ingrese el valor final: ");
                        scanf("%d", &fi);
                        primo(in, fi);
                        
                        break;
                }
            } while(op3!=5); 
            break;

        }
       } while (op1!=3);
       
       return 0;
}