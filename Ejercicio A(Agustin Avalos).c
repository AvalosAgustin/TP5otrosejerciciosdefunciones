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
	float division,a,b;
	a=num1;
	b=num2;
	
	division=a/b;
	
	return division;
	
}

int main() 
{
	int num1,num2,opcion,operacion;
	float div;
	
    printf("Ingresar un numero\n");
	scanf("%d",&num1);
	
	printf("Ingrese otro numero\n");
	scanf("%d",&num2);
	
	printf("Seleccione la oparacion que desea realizar con los numeros ingresados\n");
	printf("Opciones\n");
	printf("1) Suma\n");
	printf("2) resta\n");
	printf("3) multiplicacion\n");
	printf("4) Division\n");
	
	scanf("%d",&opcion);
	
	if(opcion==1)
	{
		printf("La opcion elegida es suma\n");
		
		operacion=suma(num1,num2);
		
		printf("y la suma es:%d",operacion);
	}
	else
	{
		if(opcion==2)
		{
			printf("La opcion elegida es resta\n");
			resta(num1,num2);
			
		}
		else
		{
			if(opcion==3)
			{
				printf("La opcion elegida es multiplicacion\n");
				operacion=num1*num2;
				printf("y la multiplicacion es:%d",operacion);
			}
			else
			{
				printf("La opcion elegida es division\n");
				div=divi(num1,num2);
				printf("y la division es:%.2f",div);
			}
		}
		
	}
	
	return 0;
}

