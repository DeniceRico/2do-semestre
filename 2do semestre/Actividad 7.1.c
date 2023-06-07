//Denice Estefania Rico Morones 219421171 Programacion Estructurada D07
#include <stdio.h>

struct Alumno {
    char nombre[50];
    int codigo;
    char carrera[50];
    float promedio;
}estudiante1;


int main() {
    

    printf("Ingrese el nombre del alumno: ");
    scanf("%s", &estudiante1.nombre);
    printf("Ingrese el codigo del alumno: ");
    scanf("%d", &estudiante1.codigo);
    printf("Ingrese la carrera del alumno: ");
    scanf("%s",&estudiante1.carrera);
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &estudiante1.promedio);
    
    fflush(stdin);
    
    printf("Nombre: %s\n", estudiante1.nombre);
    printf("Codigo: %d\n", estudiante1.codigo);
    printf("Carrera: %s\n", estudiante1.carrera);
    printf("Promedio: %.2f\n", estudiante1.promedio);

    return 0;
}