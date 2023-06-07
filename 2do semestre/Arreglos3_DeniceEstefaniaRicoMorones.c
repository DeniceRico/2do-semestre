//Denice Estefania Rico Morones 219421171 D07 Programacion Estructurada 06/03/23 
#include <stdio.h>
int main()
{
    int op;
    int arr[30];
    int t;
	int i, j; 
	int n;
    int nb;
	int ne;
	int nm;
    int nn;
    
	while(op!=6)
    {
        printf("1- Capturar\n");
        printf("2- Mostrar\n");
        printf("3- Buscar\n");
        printf("4- Eliminar\n");
        printf("5- Modificar\n");
        printf("6- Salir\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            if (t > 30)
            {
                printf("Ha alcanzado el limite de elementos!\n");
                break;
            }
           
            printf("Numeros para el arreglo: ");
            scanf("%d", &n);
            if (n + t > 30)
            {
                printf("Ha alcanzado el limite de elementos!");
                break;
            }
            for (i = 0; i < n; i++)
            {
                printf("Ingrese un numero:");
                scanf("%d", &arr[i]);
                t++;
            }
 			break;
        case 2:
            for (i = 0; i < t; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 3: 
        	printf("Que numero quieres buscar: ");
            scanf("%d", &nb);
            for (i = 0; i < t; i++)
            {
                if (arr[i] == nb)
                {
                    printf("El numero %d esta en esta posicion %d\n", nb, i);
                }
            }
            break;
        case 4:
            printf("Que numero quieres eliminar: ");
            scanf("%d", &ne);
            for (i = 0; i < t; i++)
            {
                if (arr[i] == ne)
                {
                    for (j = i; j < t; j++)
                    {
                        arr[j] = arr[j + 1];
                    }
                    t--;
                }
            }
            break;
        case 5:
            
            
            printf("Que numero quieres modificar: ");
            scanf("%d", &nm);
            printf("Ingresa el nuevo numero: ");
            scanf("%d", &nn);
            for (i = 0; i < t; i++)
            {
                if (arr[i] == nm)
                {
                    arr[i] = nn;
                }
            }
            break;
        default:
            printf("Opcion invalida\n");
            break;
        }

    } 
	if(op=6)
    {
    	printf("Haz salido\n");
	}
	
    return 0;
}
