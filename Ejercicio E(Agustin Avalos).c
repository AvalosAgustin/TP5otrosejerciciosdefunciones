#include <stdio.h> 

#include <stdlib.h> 

void asteriscos( int n, int i , int k)
{
	for(i=0;i<n;i++) 
	{ 
		for(k=0;k<=1*i;k++) 
		{
			printf("*"); 
			
		} 
		printf("\n"); 
	} 
	
}
int main() 
	
{ 
	
	int n,i=0,k=0; 
	
	printf("Ingrese la cantidad de lineas de asteriscos que desea generar\n");
	scanf("%d",&n); 

	
	asteriscos(n,i,k);
	
	system("pause"); 
	
	return 0; 
	
} 
