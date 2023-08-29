#include <stdio.h> 
#include <stdlib.h> 
void asteriscos( int i, int k)
{
	while(i<5) 
	{ 
		for(k=0;k<=1*i;k++) 
		{ 
			printf("*"); 
		} 
		printf("\n"); 
		i++;
	}
}
int main() 
{ 
	int i=0,k; 
	asteriscos(i,k);
	system("pause"); 
	
	return 0; 
} 
