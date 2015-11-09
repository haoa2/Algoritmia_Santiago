/*
	Searches.h

	Definición de las dos funciones de búsquedas.

	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
	2015
*/
#ifndef SEARCHES_INCLUDED
#define SEARCHES_INCLUDED 

#ifndef VERBOSE_OUTPUT
#define VERBOSE_OUTPUT 0
#endif

/*
	Algoritmos de Búsquedas.

	Los algoritmos de búsqueda toman exactamente los mismos 
	parámetros y devuelven exactamente los mismos datos.

	Parámetros:

		-int* arreglo
		-int elemento a buscar
		-int tamaño del arreglo

	Retorno:

		-int Primera aparición del elemento dentro del arreglo.
			 En caso de que no se encuentre el elemento, la fun-
			 ción retornará un -1.
*/

int linearsearch(int*, int, int); // O(n)
int binarysearch(int*, int, int); // O(k) <- 32 +/-

#endif