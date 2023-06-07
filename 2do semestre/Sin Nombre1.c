#include<stdio.h>

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
            printf("%d ", coef);
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
void matriz()
{
int arr[5][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
int x, y, v=1;
printf("Triangular inferior");
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
        printf("%d", arr[x][y]);
    }
    printf("\n");
}

printf("Identidad");
for(x=0; x<5; x++)
{
    for(y=0; y=x+1; y++)
    {
        arr[x][y]=v;
    }
}
for(x=0;x<5;x++)
{
    for(y=0;y<5;y++)
    {
        print("%d", arr[x][y]);
    }
    printf("\n");
}


}
int main()
{
int op;

printf("Bienvenido al menu\nIngrese una opcion:");
printf("\n1-Tamano de los tipos de datos ");
printf("\n2-Triangulo de Pascal");
printf("\n3-Factorial");
printf("\n4-Matriz triangular inferior e identidad\n");
scanf(" %d", &op);

switch(op)
{
    case 1: datos(); break;
    case 2: pascal(); break;
    case 3: factorial(); break;
    case 4: matriz(); break;
}

    return 0;
}
