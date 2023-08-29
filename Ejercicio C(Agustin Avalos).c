#include <stdio.h>
#include <stdlib.h>

int suma(int num1, int num2)
{
	int sum=0;
	
	sum=num1+num2;
	
	return sum;
}

void resta (int num1, int num2)
{
	int rest=0;
	rest=num1-num2;
	
	printf(" y La resta es:%d\n",rest);
	
}

float divi(int num1, int num2)
{
	
	float division;
	
	division=num1/num2;
	
	return division;
	
}



int main() 
{
	int num1,num2,opcion,operacion,o,d;
	float div;
	
	
	
	printf("Ingresar un numero\n");
	scanf("%d",&num1);
	
	printf("Ingrese otro numero\n");
	scanf("%d",&num2);
	
	printf("\nSeleccione la oparacion que desea realizar con los numeros ingresados\n");
	printf("Opciones\n");
	printf("1) Suma\n");
	printf("2) resta\n");
	printf("3) multiplicacion\n");
	printf("4) Division\n");
	printf("5) para dejar de realizar operaciones\n");
	scanf("%d",&opcion);
	
	while(opcion <5 && opcion > 0 )
	{
		
		
		if(opcion==1)
		{
			printf("\nLa opcion elegida es suma\n");
			
			operacion=suma(num1,num2);
			
			printf("y la suma es:%d\n",operacion);
		}
		else
		{
			if(opcion==2)
			{
				printf("\nLa opcion elegida es resta\n");
				resta(num1,num2);
				
			}
			else
			{
				if(opcion==3)
				{
					printf("\nLa opcion elegida es multiplicacion\n");
					operacion=num1*num2;
					printf("y la multiplicacion es:%d\n",operacion);
				}
				else
				{
					
					
					printf("\nLa opcion elegida es division\n");
					div=divi(num1,num2);
					printf("y la division es:%.2f\n",div);
				}
				
				
				
			}
		}
		
		printf("Va a seguir realizando operaciones si(1) no(2)\n");
		scanf("%d",&o);
		if(o==2)
		{
			return 0;
		}
		printf("con los mismos numero? si(1) no(2)\n");
		scanf("%d",&d);
		if(d==1)
		{
			printf("\nSeleccione la oparacion que desea realizar con los numeros ingresados\n");
			printf("Opciones\n");
			printf("1) Suma\n");
			printf("2) resta\n");
			printf("3) multiplicacion\n");
			printf("4) Division\n");
			printf("5) para dejar de realizar operaciones\n");
			scanf("%d",&opcion);
		}
		else
		{
			printf("Ingresar un numero\n");
			scanf("%d",&num1);
			
			printf("Ingrese otro numero\n");
			scanf("%d",&num2);
			
			printf("\nSeleccione la oparacion que desea realizar con los numeros ingresados\n");
			printf("Opciones\n");
			printf("1) Suma\n");
			printf("2) resta\n");
			printf("3) multiplicacion\n");
			printf("4) Division\n");
			printf("5) para dejar de realizar operaciones\n");
			scanf("%d",&opcion);
		}
		
	}
	return 0;
}

