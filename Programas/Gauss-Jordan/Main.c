/*
    Main.c

    Función principal del Programa.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include "Matrices.h"

#include <stdio.h>

int main(int argc, char *argv[])
{
	Matriz A;
	printf("Leyendo...\n");
	leer(&A);
	printf("Imprimiendo...\n");
	imprimir(A);
	printf("OKTL\n");

    return 0;
}
