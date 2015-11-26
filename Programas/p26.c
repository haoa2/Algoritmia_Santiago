/*
   Lectura de Archivos

   Programa que ilustra el manejo de archivos usando el formato del estándar de C

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites.)
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>

#define RUTA "p26.c"

// Prototipos de Funciones

// Función Principal.
int main(int argc, char *argv[])
{
    FILE *archivo;
    if(argc == 2)
    {
        archivo = fopen(argv[1],"r");
    }
    else
    {
        archivo = fopen(RUTA,"r");
    }
    char c;

    printf("Contenido del Archivo %s:\n",RUTA);
    while((c=fgetc(archivo)) != EOF)
    {
        printf("%c",c);
    }
    printf("\nFin del Contenido.\n");
    fclose(archivo);
    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones


// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
