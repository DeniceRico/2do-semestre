//Denice Estefania Rico Morones 219421171 D07 Programacion Estructurada 06/03/23

#include <stdio.h>

int main()
{
	int arr[100];
	int t;
	int i;
	int op;
	int may=arr[0];
	int men=arr[0];
	
	printf("Ingrese la cantidad de numeros para el arreglo:\n");
	scanf("%d", &t);
	
	for(i=0;i<t;i++)
	{
		printf("Ingrese el numero:\n");
		scanf("%d", &arr[i]);
	}
		printf("Menu:\n");
		
		printf("Ingrese una opcion:\n");
		
		printf("1- Mostrar cuadrados\n");
        
		printf("2- Mostrar el mayor\n");
        
		printf("3- Mostrar el menor\n");
        
		printf("4- Mostrar numeros pares\n");
        
		printf("5- Mostrar numeros impares\n");
        
		printf("6- Salir\n");
        
        scanf("%d", &op);
	
	
	
	
	switch(op)
	{
		case 1:
			
            for (i = 0; i < t; i++)
            {
                printf("%d ", arr[i] * arr[i]);
            }
            break;
        case 2: 
        	for (i = 0; i < t; i++)
        	{
        		if (arr[i] > may)
                {
                    may = arr[i];
                }
				
			}
			printf("El mayor es: %d\n", may);
			break;
		case 3:
			for (i = 0; i < t; i++)
        	{
        		if (arr[i] < men)
                {
                    men = arr[i];
                }
				
			}
			printf("El menor es: %d\n", men);
			break;
		case 4:
			for (i = 0; i < t; i++)
        	{
        		if (arr[i]%2==0)
        
                {
                   printf("%d\n",arr[i]);
                }
			}
			break;
		case 5:
			for (i = 0; i < t; i++)
        	{
        		if (arr[i]%2!=0)
        
                {
                   printf("%d\n",arr[i]);
                }
			}
			break;
		case 6:
			printf("Haz salido");break;
	}
	
	return 0;
}
