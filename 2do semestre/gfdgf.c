#include <stdio.h>
int main ()
{
	int op;
	
	printf("Ingrese un numero correspondiente a un mes dela�o:\n");
	scanf("%d",&op);
	
	while(1<=op<=12)
	{
		switch(op)
		{
			case 1:printf("El mes es enero\n"); break;
			case 2:printf("El mes es febrero\n");break;
			case 3:printf("El mes es marzo\n");break;
			case 4:printf("El mes es abril\n");break;
			case 5:printf("El mes es mayo\n");break;
			case 6:printf("El mes es junio\n");break;
			case 7:printf("El mes es julio\n");break;
			case 8:printf("El mes es agosto\n");break;
			case 9:printf("El mes es septiembre\n");break;
			case 10:printf("El mes es octubre\n");break;
			case 11:printf("El mes es noviembre\n");break;
			case 12:printf("El mes es diciembre\n");break;
			
		}
		if(op>12)
		{
			printf("Ingrese un mes valido\n");
			
		}	
	printf("Ingrese un numero correspondiente a un mes dela�o:\n");
	scanf("%d",&op);
	}
	return 0;
}

