//Denice Estefania Rico Morones 219421171 Programacion estructurada D07 Practica 2 11/02/2023//
#include <stdio.h>
int main()
{
    int op = 0, x = 1;

    while (op < 6)
    {
        x = 1;
        printf("Ingrese una opcion\n");
        printf("1-Multiplos de 2\n");
        printf("2-Multiplos de 3\n");
        printf("3-Multiplos de 5\n");
        printf("4-Multiplos de 7\n");
        printf("5-Multiplos de 11\n");
        printf("6-Salir\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            while (x <= 100)
            {
                printf("%d\n", 2 * x);
                x++;
            }
            break;
        case 2:
            while (x <= 100)
            {
                printf("%d\n", 3 * x);
                x++;
            }
            break;
        case 3:
            while (x <= 100)
            {
                printf("%d\n", 5 * x);
                x++;
            }
            break;
        case 4:
            while (x <= 100)
            {
                printf("%d\n", 7 * x);
                x++;
            }
            break;
        case 5:
            while (x <= 100)
            {
                printf("%d\n", 11 * x);
                x++;
            }
            break;
        }
    }

    return 0;
}
