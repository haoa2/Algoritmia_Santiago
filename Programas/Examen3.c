/*
   ATOI

   Hacer una función para transformar una cadena de dígitos a un entero.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites).
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>

// Constantes (Quita el comentario de las pre-definidas que necesites).
//#define MAX_BUFFER 1024
//#define VERBOSE false
// Constantes Por Default.
#define false 0
#define true 1

// Prototipos de Funciones
int strtoi(char*);

// Función Principal.
int main(int argc, char *argv[])
{
    if(argc != 2)
    {
        printf("El parámetro debe ser la cadena.\n");
        return -1;
    }
    
    printf("La cadena es: %s\nEl entero es: %d\n",argv[1],strtoi(argv[1]));

    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones
int strtoi(char* a)
{
    int res = 0,
        i = 0;

    while(a[i])
    {
        res = (res*10)+(a[i]-'0');
        i++;
    }
    return res;
}

// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
