//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 
#include <stdio.h>

int fibonacci(int i, int j, int a);

int main()
{
    int a;
    int i=0; 
    int j=1;
    int temp;
    printf("Ingresa un número hasta el que quieras llegar: \n");
    scanf("%d", &a);

    
    printf("La sucesión es: \n");
    printf("%d\n", i); 
    printf("%d\n", j);//aqui se imprime el temporal ya que j se convierte al temporal
    fibonacci(i, j, a); 
    return 0;
}

int fibonacci(int i, int j, int a)
{
    int temp = i + j;
    if (temp > a) 
    {
        return 0;
    }
    else
    {
        printf("%d\n", temp); 
        
     
        return fibonacci(j, temp, a); //j es el nuevo valor de i y temp el de j 
    }
}