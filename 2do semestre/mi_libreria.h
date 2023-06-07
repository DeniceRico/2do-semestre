//Denice Estefania Rico Morones 219421171 D07 Programacion Estructurada 
#include <stdio.h>
void datos()
{
    printf("\nLos tipos de datos son:\n ");
    printf("\nint:\nRango maximo:%d\nTamano:%d\n", __INT_MAX__, sizeof(int));
    printf("\nchar:\nRango maximo:%d\nTamano:%d\n", __SCHAR_MAX__, sizeof(char)); 
    printf("\nshort:\nRango maximo:%d\nTamano:%d\n", __SHRT_MAX__, sizeof(short));
    printf("\nlong:\nRango maximo:%d\nTamano:%d\n", __LONG_MAX__, sizeof(long));
    printf("\nfloat:\nRango maximo:%d\nTamano:%d\n", __FLT_MAX__, sizeof(float));
    printf("\ndouble:\nRango maximo:%d\nTamano:%d\n", __DBL_MAX__, sizeof(double));
    printf("\nunsigned int:\nRango maximo:%d\nTamano:%d\n", __UINT16_MAX__, sizeof(unsigned));
} 
void pascal()
{
    int filas=7;
    int i, j, coef;
    for (i = 0; i < filas; i++) {
        coef = 1;
        for (j = 0; j <= i; j++) {
            printf(" %d", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
void factorial()
{
int i, temp=1;
	
	printf("Dame el valor del factorial:\n");
	scanf("%d", &i);
	
	for(i; i>=1; i--)
	{
		
		temp = i * temp;
	printf("\nEl valor de temporal es: %d", temp);
		
	}
		
}
void matriztri()
{
int arr[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
int x, y, v=1;
printf("Triangular inferior\n");
for(x=0; x<5; x++)
{
    for(y=0; y<=x; y++)
    {
        arr[x][y]=v;
    }
}
for(x=0; x<5; x++)
{
    for(y=0; y<5; y++)
    {
        printf("%d ", arr[x][y]);
    }
    printf("\n");
}
}
void matrizidn()
{
    int arr[5][5];
    int i, j;
    printf("Identidad\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                printf("%d ", 1);
            } else {
                printf("%d ", 0);
            }
        }
        printf("\n");
    }
}
//con paso de parametros:
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
