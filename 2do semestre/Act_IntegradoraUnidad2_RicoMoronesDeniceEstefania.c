//Denice Estefania Rico Morones 219421171 28/02/23 Programacion Estructurada D07 Actividad de aprendizaje integradora de la unidad 
//2:  Implementación de estructuras anidadas
#include <stdio.h>
#include <stdlib.h>
int main()
{
int opuser=0, oppc;
char nombre[20];
int ganado=0, empate=0, perdido=0;
int juegale=1;

printf("¡Bienvenido a piedra papel o tijera!\n");
printf("Ingresa tu nombre:\n");
scanf("%s", &nombre);
printf("Hola %s",nombre);

while(juegale==1)
{
printf("\nPor favor elige una opcion: 1)Papel, 2)Tijera, 3)Piedra,4)Salir\n");
scanf("%d", &opuser);
if(opuser==4)
{
	printf("Haz salido\n");break;
}
oppc=(rand()%3)+1;

switch(oppc)
{
	case 1:oppc=0;printf("\nla computadora ha elegido piedra\n");break;
	case 2:oppc=1;printf("\nLa computadora ha elegido tijera|n"); break;
	case 3:oppc=2;printf("\nLa computadora ha elegido piedra\n"); break;	
}
printf("Tu opcion fue %d y la del pc fue %d", opuser, oppc);

if(opuser==oppc)
{
	printf("\nEmpate!\n");
	empate++;
}
else if((opuser==1)&&(oppc==2))
{
	printf("\nHaz perdido\n");
	perdido++;
}
else if((opuser==1)&&(oppc==3))
{
	printf("\nHaz ganado!\n");
	ganado++;
}
else if((opuser==2)&&(oppc==1))
{
	printf("\nHaz ganado!\n");
	ganado++;
}
else if((opuser==2)&&(oppc==3))
{
	printf("\nHaz perdido!\n");	
	perdido++;
}
else if((opuser==3)&&(oppc==2))
{
	printf("\nHaz ganado!\n");
	ganado++;
}
else if((opuser==3)&&(oppc==1))
{
	printf("\nHaz perdido!\n");
	perdido++;
}


printf("\nLlevas %d partidas ganadas, %d partidas perdidas y %d partidas empatadas.\n", ganado, perdido, empate);
        printf("Quieres seguir jugando? 1) si, 0) no ");
        scanf("%d",&juegale);
        

}
printf("\nGracias por jugar tu record fue de %d partidas ganadas",ganado);
return 0;
}
