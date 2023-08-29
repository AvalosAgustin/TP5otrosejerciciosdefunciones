#include <stdio.h>
int menor_media_docena(int unidad, int precio)
{
	int pago;
	pago=unidad*precio;
	return pago;
}
float excede_media_docena(int unidad, int precio)
{
	float pago,descuento;
	pago=unidad*precio;
	descuento=(pago-((pago*4)/100));
	return descuento;
}

float excede_docena(int unidad, int precio)
{
	float pago,descuento;
	pago=unidad*precio;
	descuento=(pago-((pago*10)/100));
	return descuento;
}



int main() 
{
	int unidad,precio,Topago;
	float Totalpago;
	printf("Ingresar cuantas unidades va a comprar\n");
	scanf("%d",&unidad);
	
	printf("Ingrese el precio de lo que vale 1 unidad\n");
	scanf("%d",&precio);
	if(unidad <6)
	{
		printf("no excede la docena ni la media docena. ");
		printf("Por lo tanto no tienes descuento\n");
		Topago=menor_media_docena(unidad,precio);
		printf("En total pagas:%d$",Topago);
		
	}
	else
	{
		if(unidad>6 && unidad <12){
			
			Totalpago=excede_media_docena(unidad,precio);
			printf("Tienes un 4 porciento menos y en total pagas:%.2f$",Totalpago);
		}
		else
		{
			Totalpago=excede_docena(unidad,precio);
			printf("Tienes un 10 porciento menos y en total pagas:%.2f$",Totalpago);
		}
		
	}
	return 0;
}

