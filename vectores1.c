// Uso de Vectores
// Autor: Ignacio Aular

#include <stdio.h>
#define TAM 5

int main(void)
{
	float sueldo[TAM];
	int i;
	int j;
	float total = 0.0f;
	float promedio = 0.0f;
	float mayor = 0.0f;
	float menor = 0.0f;
	float auxiliar = 0.0f;
	
	for ( i = 0; i < TAM; i++ )
	{
		printf("Ingrese su sueldo: ");
		scanf("%f", &sueldo[i]);
		total += sueldo[i]; // t = t + s[i];
	}
	
	promedio = total / TAM;
	mayor = sueldo[0];
	menor = sueldo[0];
	
	for ( i = 0; i < TAM; i++ )
	{
		if ( mayor < sueldo[i] )
			mayor = sueldo[i];
	}
	
	for ( i = 0; i < TAM; i++ )
	{
		if ( menor > sueldo[i] )
			menor = sueldo[i];
	}
	
	putchar('\n');
	
	printf("Vector Ingresado:\n");
	for ( i = 0; i < TAM; i++ )
	{
		printf("sueldo[%d] = %.1f\n", i, sueldo[i]);
	}
	
	for ( i = 0; i < TAM; i++ )
	{
		for ( j = i; j < TAM; j++ )
		{
			if ( sueldo[j] < sueldo[i] )
			{
				auxiliar = sueldo[i];
				sueldo[i] = sueldo[j];
				sueldo[j] = auxiliar;
			}
		}
	}
	
	putchar('\n');
	
	printf("Promedio = %.1f\n", promedio);
	printf("Mayor = %.1f\n", mayor);
	printf("Menor = %.1f\n", menor);
	
	putchar('\n');
	
	printf("Vector Ordenado:\n");
	for ( i = 0; i < TAM; i++ )
	{
		printf("sueldo[%d] = %.1f\n", i, sueldo[i]);
	}
	
	return 0;
}
