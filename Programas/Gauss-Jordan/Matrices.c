/*
    Matrices.c

    Implementación de las funciones para uso de Matrices.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/

// Incluir la librería de Prototipos.
#include "Matrices.h"

// Librería STD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Constantes Privadas

// Funciones Privadas.



// Funciones Públicas (Las que están en el .h)

// Imprimir una Matriz
void imprimir(Matriz a)
{
    if(strcmp(a.nom,NOMBRE_NULO) != 0)
    {
        printf("Contenido de %s:\n\n",a.nom);
    }
    else
    {
        printf("Contenido de la Matriz:\n\n");
    }

    printf("\t    |");
    for(int i = 0; i < a.tam; i++)
    {
        printf("       %3d       |",i+1);
        //        "  X  [%3d|%-3d] "
    }
    printf("\n\t");
    for(int i = 0; i < ((a.tam+1)*14); i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i = 0; i < a.tam; i++)
    {
        printf("\t %2d |",i+1);
        for(int j = 0; j < a.tam; j++)
        {
            printf(" ");
            imprimir(a.m[i][j]);
            printf(" |");
        }
        printf("\n\t");
        for(int i = 0; i < ((a.tam+1)*14); i++)
        {
            printf("-");
        }
        printf("\n");
    }
}

// Leer una Matriz
void leer(Matriz *a)
{
    // Variables temporales.
    char opc;
    
    printf("Leyendo Matriz...\n");

    // Nombre de la Matriz.
    do{
        printf("¿Desea introducir un nombre para la matriz? S/N > ");
        scanf(" %c",&opc);
    }while(opc != 's' && opc != 'S' && opc != 'n' && opc != 'N');
    if(opc == 's' || opc == 'S')
    {
        printf("Introduzca el nombre de la matriz (Máx. 140 caracteres): ");
        scanf(" %140[^\n]", a->nom);
    }
    else
    {
        a->nom = NOMBRE_NULO;
    }

    // Dimensiones de la Matriz
    do{
        printf("Introduzca un valor válido para las dimensiones de la matriz:\n>");
        scanf("%d",&a->tam);
    }while(a->tam > MAX_DEF || a->tam < 1);

    printf("Se leerá la matriz de %dx%d:\n",a->tam,a->tam);

    // Elementos de la Matriz.
    for(int i = 0; i < a->tam; i++)
    {
        for(int j = 0; j < a->tam; j++)
        {
            if (i)
            {
                printf("\n");
            }
            printf("Leyendo elemento en la posición [%d][%d].\n",i,j);
            a->m[i][j] = leer();
        }
    }
    printf("Fin de lectura de Matriz.\n");
}

Matriz gaussjordan(Matriz A)
{
    if (VERBOSE_OUT)
    {
        printf("Inicia el procedimiento de solución para la matriz: \n");
        imprimir(A);
    }
    Matriz res;
    return res;
}
