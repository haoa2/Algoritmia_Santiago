/*
    Fracciones.h

    Cabecera que contiene los prototipos de las funciones para las operaciones
    con Fracciones.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#ifndef FRACCIONES_H_INCLUIDO
#define FRACCIONES_H_INCLUIDO

/*
    Estructura de Fracción

    Contiene los siguientes datos miembro:

        - int a     -> Parte entera (0 por default)
        - int b     -> Numerador
        - int c     -> Denominador
*/
struct _Fraccion
{
    int a,
        b,
        c;
};

// Definición del Tipo de Dato "Fracción".
typedef struct _Fraccion Fraccion; 

/*
    OPERACIONES CON FRACCIONES
*/

// Misceláneas

void imprimir(Fraccion);
Fraccion leer();

// Matemáticas

// Multiplicación de Fracciones
Fraccion multiplicacion(Fraccion,Fraccion); // Una Fracción por otra Fracción
Fraccion multiplicacion(Fraccion, int);     // Una Fracción por un valor escalar

// Suma de Fracciones
Fraccion suma(Fraccion, Fraccion);  // Una Fracción más otra Fracción
Fraccion suma(Fraccion, int);       // Una Fracción más un valor escalar

// Resta de Fracciones
Fraccion resta(Fraccion,Fraccion);  // Una Fracción menos otra Fracción
Fraccion resta(Fraccion,int);       // Una Fracción menos un valor escalar

// División de Fracciones
Fraccion division(Fraccion, Fraccion);  // Una Fracción entre otra Fracción
Fraccion division(Fraccion, int);       // Una Fracción entre un valor escalar

// Potencia de Fracciones
Fraccion potencia(Fraccion, int); // Una Fraccion elevada a la N.

// Conversiones
Fraccion impropiaMixta(Fraccion);   // Transforma una fracción de forma Impropia a Mixtra
Fraccion mixtaImpropia(Fraccion);   // Transforma una fraccion de forma Mixta a Impropia

#endif 