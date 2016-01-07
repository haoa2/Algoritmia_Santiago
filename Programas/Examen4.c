/*
   Ocurrencias en una Cadena

   Programa que imprime el número de coincidencias de un caracter en una cadena

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
int ocurrencias(char*,char);

// Función Principal.
int main(int argc, char *argv[])
{
    printf("\t\tPrograma que imprime el número de ocurrencias en una cadena.\n\n");

    if(argc != 3)
    {
        printf("El programa requiere de dos parámetros, el primero es la cadena, el segundo el caracter.\n");
        return -1;
    }

    printf("Las ocurrencias de '%c' en '%s' son %d.\n",argv[2][0],argv[1],ocurrencias(argv[1],argv[2][0]));

    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones
int ocurrencias(char* a,char b)
{
    int i = 0,
        oc = 0;
    
    while(a[i])
    {
        if(a[i] == b)
        {
            oc++;
        }
        i++;
    }
    return oc;
}

// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
