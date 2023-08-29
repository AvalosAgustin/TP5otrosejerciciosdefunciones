#include <stdio.h>
int resudoble(int num)
{
	int result;
	
	result=((num*num)-(2*num));
	
	return result;
}
int main() 
{
	int num,total;
	printf("El numero que ingrese se duplicara y se restara por el numero ingresado elevado al cuadrado\n");
	printf("Ingrese un numero\n");
	scanf("%d",&num);
	
	total=resudoble(num);
	
	printf("El resultado de la resta al doble de un numero a su cuadrado es::%d\n",total);
	return 0;
}

