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
	leer(&A);
	imprimir(A);

    return 0;
}
