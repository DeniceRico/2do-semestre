//Denice Estefania Rico Morones 219421171 Programacion Estructurada D07
#include<stdio.h>
#define est 20
#define asig 6
int main()
{
    char nombres[est][20];
    int cal[est][asig];
    int i, j;
    char asign[asig][20] = {"Espanol", "Matematicas", "Historia", "Sociales", "Geografia", "Ciencias"};
    float promedio[est], promedio2[asig] = {0.0};
    float sum = 0.0;
    float general= 0.0;

    for (i = 0; i < est; i++)
    {
        printf("Ingrese el nombre del estudiante:");
        scanf("%s", nombres[i]);
        for (j = 0; j < asig; j++)
        {
            printf("Ingrese la calificacion:");
            scanf("%d", &cal[i][j]);
        }
    }
    
    for (int i = 0; i < est; i++)
    {
        
        for (int j = 0; j < asig; j++)
        {
            sum += cal[i][j];
            promedio2[j] += cal[i][j];
        }
        promedio[i] = sum / asig;
    }
    for (int i = 0; i < asig; i++)
    {

        promedio2[i] /= est;
    }
    printf("Nombre                    Español   Matemáticas   Historia   Sociales   Geografía   Ciencias   Promedio  \n");
    printf("                        |         |             |           |         |           |          |          |\n");
    for (int i = 0; i < est; i++)
    {
        printf("%-24s| ", nombres[i]);
        for (int j = 0; j < asig; j++)
        {
            switch (j)
            {
            case 0:
                printf("      %d| ", cal[i][j]);
                break;
            case 1:
                printf("          %d| ", cal[i][j]);
                break;
            case 2:
                printf("        %d| ", cal[i][j]);
                break;
            case 3:
                printf("      %d| ", cal[i][j]);
                break;
            case 4:
                printf("      %d| ", cal[i][j]);
                break;
            case 5:
                printf("        %d| ", cal[i][j]);
                break;
            }
        }
        printf("     %.2f|\n", promedio[i]);
        printf("                                                                                                    \n");
        printf("Promedio por asignatura | ");
        for (int i = 0; i < asig + 1; i++)
    {
        switch (i)
        {
        case 0:
            printf("   %.2f| ", promedio2[i]);
            break;
        case 1:
            printf("       %.2f| ", promedio2[i]);
            break;
        case 2:
            printf("    %.2f| ", promedio2[i]);
            break;
        case 3:
            printf("    %.2f| ", promedio2[i]);
            break;
        case 4:
            printf("     %.2f| ", promedio2[i]);
            break;
        case 5:
            printf("    %.2f| ", promedio2[i]);
            break;
        case 6:
            
            for (int j = 0; j < est; j++)
            {
               general += promedio[j];
            }
            general /= est;
            printf("    %.2f|\n", general);
            break;
        }
    }

    
}

    
    
     return 0;
}
