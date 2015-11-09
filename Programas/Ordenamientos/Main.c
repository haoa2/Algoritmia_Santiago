/*
	Main.c

	Programa que prueba distintos tipos de sorting en 
	un array, compara los tiempos de ejecución de cada
	uno y los muestra.

	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
	2015
*/

// Modifíquese al gusto.
#define VERBOSE_OUTPUT 0
#define MAX_TAM 1000000

// Las cabeceras principales.
#include "Sorts.h"
#include "Searches.h"

// STD Headers.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipos de funciones locales.
void menu_principal();
void arreglo_manual(int*,int);
void arreglo_aelatorio(int*,int);
double tiempo_real(clock_t,clock_t);
void copiar(int*,int*,int);

int main()
{
	// HO HO HO MERRY XMAS.
	srand(time(NULL));

	clock_t inicio,
			fin;

	int arr[MAX_TAM]; // El areglo "original" o "sin ordenar".
	int temp[MAX_TAM];

	char opc;
	int tam;

	do{
		menu_principal();
		do{
			printf("\n¿Qué desea hacer?\n");
			printf("\t- [I]ntroducir el arreglo Manualmente.\n");
			printf("\t- [G]enerar el arreglo con valores aleatorios.\n");
			printf("\t- [S]alir del Programa.\n\n");
			printf("Su opción: ");
			scanf(" %c",&opc);

		}while(opc != 'I' &&	// Introducir el arreglo a mano (¡Qué flojera!) 
			   opc != 'i' &&	// ^^
			   opc != 'G' &&	// Generar el arreglo con valores aleatorios.
			   opc != 'g' && 	// ^^
			   opc != 'S' &&	// Salir. :(
			   opc != 's');		// ^^

		if (opc != 's' && opc != 'S')
		{
			do{
				printf("Introduzca un tamaño de arreglo válido: ");
				scanf(" %d",&tam);
			}while(tam < 0 || tam > MAX_TAM);
			if(opc == 'i' || opc == 'I')
			{
				arreglo_manual(arr,tam);
			}
			else // opc == 'm' || opc == 'M'
			{
				arreglo_aelatorio(arr,tam);
			}

			printf("Fin de la Lectura/Generación del Arreglo.\n");
			printf("Comienzan Pruebas.\n");

			printf("-Bubble Sort.\n");
			copiar(temp,arr,tam);
			inicio = clock();
			bubblesort(temp,tam);
			fin = clock();
			printf("\t-El tiempo consumido fue de %f segundos.\n\n", tiempo_real(inicio,fin));

			printf("-Selection Sort.\n");
			copiar(temp,arr,tam);
			inicio = clock();
			selectionsort(temp,tam);
			fin = clock();
			printf("\t-El tiempo consumido fue de %f segundos.\n\n", tiempo_real(inicio,fin));

			printf("-Quick Sort.\n");
			copiar(temp,arr,tam);
			inicio = clock();
			quicksort(temp,tam);
			fin = clock();
			printf("\t-El tiempo consumido fue de %f segundos.\n\n", tiempo_real(inicio,fin));

			/*printf("-Bucket Sort.\n");
			copiar(temp,arr,tam);
			inicio = clock();
			bucketsort(temp,tam);
			fin = clock();
			printf("\t-El tiempo consumido fue de %f segundos.\n\n", tiempo_real(inicio,fin));*/

			printf("-Insertion Sort.\n");
			copiar(temp,arr,tam);
			inicio = clock();
			insertionsort(temp,tam);
			fin = clock();
			printf("\t-El tiempo consumido fue de %f segundos.\n\n", tiempo_real(inicio,fin));
				
			/*printf("-Radix Sort.\n");
			copiar(temp,arr,tam);
			inicio = clock();
			radixsort(temp,tam);
			fin = clock();
			printf("\t-El tiempo consumido fue de %f segundos.\n\n", tiempo_real(inicio,fin));*/

			printf("-Counting Sort.\n");
			copiar(temp,arr,tam);
			inicio = clock();
			countingsort(temp,tam,0,100);
			fin = clock();
			printf("\t-El tiempo consumido fue de %f segundos.\n\n", tiempo_real(inicio,fin));

			printf("Fin de las pruebas.\n");
			
			/* DIOS PERDÓNAME */
			printf("Presione una tecla para continuar...\n");
			getchar();
			getchar();
			/* VA, GRACIAS */
		}

	}while(opc != 's' && opc != 'S');
	printf("Gracias por usar este programa.\n");
	return 0;
}

void copiar(int* temp, int* arr, int tam)
{
	for(int i = 0; i < tam; i++)
	{
		temp[i] = arr[i];
	}
}

double tiempo_real(clock_t ini, clock_t fin)
{
	return (double)(fin - ini) / CLOCKS_PER_SEC;
}

void arreglo_aelatorio(int* arr, int tam)
{
	for(int i = 0; i < tam; i++)
	{
		arr[i] = rand()%100;
	}
}

void arreglo_manual(int* arr, int tam)
{
	printf("Se inician a leer %d valores del arreglo.\n", tam);
	for(int i = 0; i < tam; i++)
	{
		printf("Introduce un valor entero para la posición [%d]: ",i);
		scanf(" %d",&arr[i]);
	}
	printf("Fin de la lectura.\n");
}

void menu_principal()
{
	printf("\n\t\tALGORITMOS DE ORDENAMIENTO\n\n");
	printf("Programa que ejecuta los siguientes tipos de ordenamiento sobre un array:\n\n");
	printf("\t-Bubble Sort.\n");
	printf("\t-Radix Sort.\n");
	printf("\t-Selection Sort.\n");
	printf("\t-Insertion Sort.\n");
	printf("\t-Bucket Sort.\n");
	printf("\t-Quick Sort.\n\n");

	printf("El tamaño máximo del Arreglo está establecido en %d valores.\n", MAX_TAM);
	printf("La salida descriptiva está %s.\n", VERBOSE_OUTPUT ? "activada" : "desactivada" );

}
