#include <stdio.h>


void mes (int num)
{
	
	switch(num)
	{
	 case 1: printf("El mes es enero y tiene 31 dias");break;
	 case 2:printf("El mes es febrero y tiene 28 dias");break;
	 case 3:printf("El mes es marzo y tiene 31 dias");break;
	 case 4:printf("El mes es abril y tiene 30 dias");break;
	 case 5:printf("El mes es mayo y tiene 31 dias");break;
	 case 6:printf("El mes es junio y tiene 30 dias");break;
	 case 7:printf("El mes es julio y tiene 31 dias");break;
	 case 8:printf("El mes es agosto y tiene 31 dias");break;
	 case 9:printf("El mes es septiembre y tiene 30 dias");break;
	 case 10:printf("El mes es octubre y tiene 31 dias");break;
	 case 11:printf("El mes es noviembre y tiene 30 dias");break;
	 case 12:printf("El mes es diciembre y tiene 31 dias");break;
	 default:printf("error el mes debe de estar entre 1 y 12\n");
	}

}

int main() 
{
	int num;
	
	printf("Ingrese un numero(del 1 al 12)\n");
	scanf("%d",&num);
	mes (num);

	return 0;
}

