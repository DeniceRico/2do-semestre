#include <stdio.h>
int main()
{
	int n;


	printf("Ingresa un mes valido:\n ");
	scanf("%d", &n);


	while(n<=12)
    {
	switch (n)
	{
		case 1: printf("el mes es enero\n"); break;
		case 2: printf("el mes es febrero\n"); break;
		case 3: printf("el mes es marzo\n"); break;
		case 4: printf("el mes es abril\n"); break;
		case 5: printf("el mes es mayo\n"); break;
		case 6: printf("el mes es junio\n"); break;
		case 7: printf("el mes es julio\n"); break;
		case 8: printf("el mes es agosto\n"); break;
		case 9: printf("el mes es septiembre\n"); break;
		case 10: printf("el mes es octubre\n"); break;
		case 11: printf("el mes es noviembre\n"); break;
		case 12: printf("el mes es diciembre\n"); break;
	}
    
	printf("Ingresa un mes valido:\n ");
	scanf("%s", &n);
    }


return 0;

}








