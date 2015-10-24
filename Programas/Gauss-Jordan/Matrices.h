/*
    Matrices.h

    Librería para el uso de Matrices.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/

#ifndef MATRICES_H_INCLUIDA
#define MATRICES_H_INCLUIDA

// Definimos la constante global de Tamaño
#ifndef MAX_DEF
    #define MAX_DEF 100
#endif
// Constante Global de Nombre Nulo
#ifndef NOMBRE_NULO
    #define NOMBRE_NULO "NULO"
#endif
// Constante Global para "Verbose Output" del método de Gauss Jordan
#ifndef VERBOSE_OUT
    #define VERBOSE_OUT false
#endif
// Constante con la ruta de Fracciones.h
#ifndef RUTA_FRACCIONES
    #define RUTA_FRACCIONES "../Fracciones/Fracciones.h"
#endif

// Incluir Fracciones.h para operaciones con Fracciones.
#include RUTA_FRACCIONES

/*
    Estructura principal de Matriz.
*/
struct _Matriz
{
    Fraccion m[MAX_DEF][MAX_DEF];    // La matriz.
    char * nom;                 // Nombre de la Matriz.
    int tam;
};

// Definición del tipo "Matriz".
typedef struct _Matriz Matriz;


/*
    Funciones con Matrices.
*/

// Misceláneas
void imprimir(Matriz);
void leer(Matriz*);


// Operaciones con Matrices.

// Operaciones Aritméticas Básicas con Matrices

// TODO: Everything c:

/*
    Método de Gauss - Jordan para resolver Matrices.

    Sus métodos se encuentran de forma privada en el archivo de Implementación.
    (Matrices.c).
*/
Matriz gaussjordan(Matriz);


#endif 
/*
    Fin del Archivo.
*/
