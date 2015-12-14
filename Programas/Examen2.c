/*
   Implementación de Funciones

   Programa que implementa un par de funciones para leer e imprimir un entero

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
int leer();
void leer(int*);
void imprimir(int);

// Función Principal.
int main(int argc, char *argv[])
{
    int dato;

    printf("\t\tPrograma que Valida un Dato.\n\n");
    
    do{
        printf("Introduce un dato válido en el rango %d-%d: ",'A','Z');
        dato = leer();
        // leer(&dato); // The same.
    }while(dato < 'A' || dato > 'Z');

    for(int i = dato; i <= 'Z'; i++)
    {
        imprimir(i);
    }
    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones
int leer()
{
    int temp;
    scanf(" %d",&temp);
    return temp;
}

void leer(int* a)
{
    scanf(" %d",a);
}

void imprimir(int a)
{
    printf("El valor es: %d, %c.\n",a,a);
}

// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
