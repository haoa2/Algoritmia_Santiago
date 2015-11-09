/*
	Searches.c

	Implementación de las funciones de Searches.h con
	búsquedas.

	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
	2015
*/
#include "Searches.h"
#include <stdio.h>

int linear_search(int* arr, int t, int n)
{
	if(VERBOSE_OUTPUT)
	{
		printf("Se llamó a la función linear_search.\n");
		printf("Comienza búsqueda en %d elementos.\n",n );
		printf("Se busca el elemento %d.\n",t );
	}
	for(int i = 0; i < n; i++)
	{
		if(VERBOSE_OUTPUT)
		{
			printf("El elemento en la posición %d",i);
		}
		if(arr[i] == t)
		{
			if(VERBOSE_OUTPUT)
			{
				printf(" es el que se busca.\n");
				printf("Fin del algoritmo.\n");
			}
			return i;
		}
		if(VERBOSE_OUTPUT)
		{
			printf(" no es el que se busca. Prosigue.\n");
		}
	}
	if(VERBOSE_OUTPUT)
	{
		printf("El elemento no se encuentra dentro del arreglo.\n");
	}
	return -1;
}

int binary_search(int* arr, int t, int n)
{
	int izq = 0, 
		der = n-1, 
		med;

	if (VERBOSE_OUTPUT)
	{
		printf("Se llamó a la función binary_search.\n");
		printf("Los valores iniciales son:\n");
		printf("-Izquierda: %d\n",izq );
		printf("-Derecha: %d\n",der);
	}

	while(izq <= der)
	{
		med = izq + (der - izq)/2;
		if (VERBOSE_OUTPUT)
		{
			printf("La mitad actual se encuentra en el punto %d\n", med);
			printf("El elemento en ese punto es");
		}
		if (arr[med] == t)
		{
			if (VERBOSE_OUTPUT)
			{
				printf(" el dato a buscar.\n");
				printf("Fin del Algoritmo.\n");
			}
			return med;
		}

		if (arr[med] < t )
		{
			if (VERBOSE_OUTPUT)
			{
				printf(" menor al dato a buscar.\n");
				printf("Se aumenta el índice del lado izquierdo.\n");
			}
			izq = med + 1;
		}
		else
		{
			if (VERBOSE_OUTPUT)
			{
				printf(" mayor al dato a buscar.\n");
				printf("Se disminuye el índice del lado derecho.\n");
			}
			der = med - 1;
		}

	}
	printf("No se encontró el valor dentro del arreglo.\n");
	return -1;
}