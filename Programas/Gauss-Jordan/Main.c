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
    printf("\tMétodo de Gauss - Jordan.\n\n");
    Matriz a;
    printf("Se leerá la matriz.\n");
    leer(&a);
    printf("Aplicando el método de Gauss-Jordan queda:\n");
    imprimir(gaussjordan(a));
    printf("Fin del Programa.\n");
    return 0;
}
