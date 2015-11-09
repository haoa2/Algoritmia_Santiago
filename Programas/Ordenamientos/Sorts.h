/*
	Sorts.h

	Cabecera que incluye las definiciones de los distintos tipos de sorts.

	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
	2015
*/
#ifndef SORTS_H_INCLUDED
#define SORTS_H_INCLUDED

// Para activar la salida dentro de las funciones.
#ifndef VERBOSE_OUTPUT
#define VERBOSE_OUTPUT 0
#endif

// Para cambiar el tamaño máximo de un array.
#ifndef MAX_TAM
#define MAX_TAM 100
#endif

/*
	Funcionamiento de las funciones.

	Todas las funciones aquí incluídas, toman y devuelven exactamente 
	los mismos datos en el mismo orden. 

	Los parámetros son:

		- int* Arr -> El arreglo original (Desordenado)
		- int tam  -> El tamaño del arreglo original

	El valor devuelto es:

		- void.
*/

// Los sorts, la mayoría son O(n²).
void bubblesort(int*,int);
void quicksort(int*,int);
void bucketsort(int*,int);
void insertionsort(int*,int);
void radixsort(int*,int);
void selectionsort(int*,int);
void countingsort(int*,int,int,int);
#endif