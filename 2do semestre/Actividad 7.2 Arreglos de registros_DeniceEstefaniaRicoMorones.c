//Denice Estefania Rico Morones 219421171 Programacion Estructurada D07
#include <stdio.h>
#define MAX 100

struct datos
{
    int clave;
    char materia[50];
    float calificacion;
    char situacion;
    char ciclo[20];
};

void capturarMaterias(struct datos arreglo[], int numMaterias);
void leermaterias(struct datos arreglo[], int numMaterias);
void consultar_materias_por_ciclo(struct datos arreglo[], int numMaterias, char ciclo_buscar);
void buscar_materia_por_nombre(struct datos arreglo[], int numMaterias, char nombre[]);
void eliminar_materia(struct datos arreglo[], int numMaterias, int clave);
void eliminar_todas_materias(struct datos arreglo[], int *numMaterias);

int main()
{
    int opcion;
    struct datos arreglo[MAX];
    int numMaterias;
    char ciclo_buscar;
    char nombre[50];
    int clave;
    do
    {
        printf("-----------------------MENU-----------------------\n");
        printf("1. Capturar materias\n");
        printf("2. Leer materias\n");
        printf("3. Consultar listado de materias por ciclo\n");
        printf("4. Consultar materia por clave\n");
        printf("5. Eliminar una materia\n");
        printf("6. Eliminar todas las materias\n");
        printf("7. Salir\n");
        printf("--------------------------------------------------\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingresa el numero de materias: ");
                scanf("%d", &numMaterias);
                capturarMaterias(arreglo, numMaterias);
                break;
            case 2:
                leermaterias(arreglo, numMaterias);
                break;
            case 3:
                printf("Ingrese el ciclo escolar a buscar: ");
                scanf(" %s", ciclo_buscar);
                consultar_materias_por_ciclo(arreglo, numMaterias, ciclo_buscar);
                break;
            case 4:
                printf("Ingrese el nombre de la materia a buscar: ");
                scanf("%s", nombre);
                buscar_materia_por_nombre(arreglo, numMaterias, nombre);
                break;
            case 5:
                printf("Ingrese la clave de la materia a eliminar: ");
                scanf("%d", &clave);
                eliminar_materia(arreglo, numMaterias, clave);
                break;
            case 6:
                eliminar_todas_materias(arreglo, &numMaterias);
                printf("Se han eliminado todas las materias.\n");
                break;
            case 7:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida, intente de nuevo.\n");
                break;
        }
    } while (opcion != 7);

    return 0;
}

void capturarMaterias(struct datos arreglo[], int numMaterias)
{
    int i;

    for(i = 0; i < numMaterias; i++)
    {
        printf("Materia #%d\n", i + 1);
        printf("Nombre: ");
        scanf("%s", arreglo[i].materia);
        printf("Clave: ");
        scanf("%d", &arreglo[i].clave);
        printf("Calificacion: ");
        scanf("%f", &arreglo[i].calificacion);
        printf("Situacion (A = Aprobada, R = Reprobada, P = Pendiente): ");
        scanf(" %c", &arreglo[i].situacion);
        printf("Ciclo: ");
        scanf("%s", arreglo[i].ciclo);
        printf("\n");
    }
}
void leermaterias(struct datos arreglo[], int numMaterias)
{
    int i;

    for(i = 0; i < numMaterias; i++)
    {
        printf("Nombre de la materia #%d%s\n", i + 1, arreglo[i].materia);
        printf("Clave: %d\n",arreglo[i].clave );
        printf("Calificacion: %d\n", arreglo[i].calificacion);
        
        printf("Situacion (A = Aprobada, R = Reprobada, P = Pendiente): %c\n",arreglo[i].situacion );
        
        printf("Ciclo: %s\n", arreglo[i].ciclo);
        
        printf("\n");
    }
}
void consultar_materias_por_ciclo(struct datos arreglo[], int numMaterias, char ciclo_buscar)
{
    int i;
    printf("Listado de materias del ciclo escolar %c:\n", ciclo_buscar);
    for (i = 0; i < numMaterias; i++)
    {
        if (arreglo[i].ciclo[0] == ciclo_buscar)
        {
            printf("Clave: %d\n", arreglo[i].clave);
            printf("Materia: %s\n", arreglo[i].materia);
            printf("Calificacion: %.2f\n", arreglo[i].calificacion);
            printf("Situacion: %c\n", arreglo[i].situacion);
            printf("Ciclo: %c\n\n", arreglo[i].ciclo[0]);
        }
    }
}
void buscar_materia_por_nombre(struct datos arreglo[], int numMaterias, char nombre[])
{
    int i, encontrado = 0;

    for (i = 0; i < numMaterias; i++)
    {
        if (strcmp(arreglo[i].materia, nombre) == 0)
        {
            encontrado = 1;
            printf("Clave: %d\n", arreglo[i].clave);
            printf("Materia: %s\n", arreglo[i].materia);
            printf("Calificacion: %.2f\n", arreglo[i].calificacion);
            printf("Situacion: %c\n", arreglo[i].situacion);
            printf("Ciclo: %s\n\n", arreglo[i].ciclo);
        }
    }

    if (!encontrado)
    {
        printf("No se encontraron materias con ese nombre.\n");
    }
}
void eliminar_materia(struct datos arreglo[], int numMaterias, int clave) {
    int i, encontrado = 0;
    
    for (i = 0; i < numMaterias; i++) {
        if (arreglo[i].clave == clave) {
            encontrado = 1;
            arreglo[i] = arreglo[numMaterias - 1];
            numMaterias--;
            printf("La materia con clave %d ha sido eliminada.\n", clave);
            break;
        }
    }
    
    if (!encontrado) {
        printf("No se encontró la materia con clave %d.\n", clave);
    }
}
void eliminar_todas_materias(struct datos arreglo[], int *numMaterias) 
{
    *numMaterias = 0;
}