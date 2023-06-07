//Denice Estefania Rico Morones 219421171 Programacion estructurada 06/03/23
#include <stdio.h>

int main()
{
    int num;
    int r[100];
    int op[100];
    int c;
    int i;
    printf("Ingresa un numero");
    scanf("%d", &num);
    for (i = 0; num != 1; i++)
    {
        r[i] = num;
        if (num % 2 == 0)
        {
            num = num / 2;
            op[i] = num;
        }
        else
        {
            num = num * 3 + 1;
            op[i] = num;
        }
        c = i;
    }
    printf("Los resultados son: ");
    for (i = 0; i <= c; i++)
    {
        printf("%d ", r[i]);
    }
    printf("\n");
    printf("Las operaciones fueron: ");
    for (i = 0; i <= c; i++)
    {
        printf("%d ", op[i]);
    }
    printf("\n");
    printf("Cantidad de operaciones: %d\n", c);
    return 0;
}

