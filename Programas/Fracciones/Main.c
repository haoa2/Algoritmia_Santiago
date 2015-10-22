/*
	Main.c

	Programa principal que hace uso de la librería Fracciones.h

	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
	2015
*/

// Operaciones con Fracciones
#include "Fracciones.h"

// STD I/O
#include <stdio.h>

// Constante de Centinela del do-while principal.
#define SALIR 12

// Prototipo de Función para imprimir el Menú Principal.
void imprimirMenu();

// Función Principal.
int main(int argc, char const *argv[])
{
	Fraccion f1, f2; 	// Dos Fracciones (sin inicializar)
	int k;				// El valor Escalar para algunas operaciones.

	int opc; char temp; // Para los menús.

	// Ciclo Principal.
	do{
		// Imprimir el menú.
		imprimirMenu();
		// Validar la entrada.
		do{
			printf("Introduzca un dato válido > ");
			scanf(" %d",&opc);
		}while(opc < 1 || opc > 12);

		// Leer los datos de entrada.
		if(((opc%2 == 0) && (opc < 10)) || opc == 9)
		{
			printf("Introduzca el valor escalar: ");
			scanf(" %d",&k);
			printf("Introduzca la Fracción:\n");
			f1 = leer();
		}
		else if((opc%2 != 0) && (opc < 9))
		{
			printf("Introduzca la primera Fracción: \n");
			f1 = leer();
			printf("Introduzca la segunda Fracción: \n");
			f2 = leer();
		}
		else if(opc == 11 || opc == 10)
		{
			printf("Introduzca la Fracción a convertir: \n");
			f1 = leer();
		}

		// Procesar los datos e imprimirlos
		switch(opc)
		{
			case 1:
				printf("El resultado de la suma es:\n");
				imprimir(suma(f1,f2));
				break;
			case 2:
				printf("El resultado de la suma es:\n");
				imprimir(suma(f1,k));
				break;
			case 3:
				printf("El resultado de la resta es:\n");
				imprimir(resta(f1,f2));
				break;
			case 4:
				printf("El resultado de la resta es:\n");
				imprimir(resta(f1,k));
				break;
			case 5:
				printf("El resultado de la multiplicación es:\n");
				imprimir(multiplicacion(f1,f2));
				break;
			case 6:
				printf("El resultado de la multiplicación es:\n");
				imprimir(multiplicacion(f1,k));
				break;
			case 7:
				printf("El resultado de la división es:\n");
				imprimir(division(f1,f2));
				break;
			case 8:
				printf("El resultado de la división es:\n");
				imprimir(division(f1,k));
				break;
			case 9:
				printf("El resultado de elevar a la potencia %d la fracción es:\n",k);
				imprimir(potencia(f1,k));
				break;
			case 10:
				printf("La conversión de Impropia a Mixta resulta en:\n");
				imprimir(impropiaMixta(f1));
				break;
			case 11:
				printf("La conversión de Mixta a Impropia resulta en:\n");
				imprimir(mixtaImpropia(f1));
				break;
		}
		printf("¿Desea Realizar otra Operación? S/N > ");
		scanf(" %c",&temp);
		if (temp == 'N' || temp == 'n')
		{
			opc = 12;
		}
	}while(opc != SALIR);
	
	printf("\nFin del Programa.\n");

	return 0;
}

// Implementación del Menú.
void imprimirMenu()
{
	printf("\t\tOperaciones con Fracciones\n\n");
	printf("Seleccione una operación a realizar:\n");
	printf("\t 1) Sumar dos Fracciones.\n");
	printf("\t 2) Sumar una Fracción y un valor escalar.\n");
	printf("\t 3) Restar dos Fracciones.\n");
	printf("\t 4) Restar una Fracción y un valor escalar.\n");
	printf("\t 5) Multiplicar dos Fracciones.\n");
	printf("\t 6) Multiplicar una Fracción y un valor escalar.\n");
	printf("\t 7) Dividir dos Fracciones.\n");
	printf("\t 8) Dividir una Fracción y un valor escalar.\n");
	printf("\t 9) Elevar una Fracción a una potencia.\n");
	printf("\t10) Convertir una Fracción Impropia a Mixta.\n");
	printf("\t11) Convertir una Fracción Mixta a Impropia.\n");
	printf("\n\t12) Salir.\n\n");
}

// Fin del Código Principal.