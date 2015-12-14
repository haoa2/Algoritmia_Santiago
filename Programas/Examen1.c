/*
   Validar Datos

   Programa que recibe un entero y comprueba que esté entre la 'z' y la 'a'.

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

// Función Principal.
int main(int argc, char *argv[])
{
    int a;

    printf("\t\tPrograma que valida un dato.\n\n");

    do{
        printf("Introduzca un valor entre %d y %d: ",'A','Z');
        scanf(" %d",&a);
    }while(a < 'A' || a > 'Z');
    
    printf("La letra correspondiente al entero %d es:  %c\n",a,a);

    for(int i = a; i <= 'Z'; i++)
    {
        printf("%d - %c.\n",i,i);
    }
    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones


// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
