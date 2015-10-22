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
        printf(" %3d |",i+1);
    }
    printf("\n\t");
    for(int i = 0; i < ((a.tam+1)*6); i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i = 0; i < a.tam; i++)
    {
        printf("\t %2d |",i+1);
        for(int j = 0; j < a.tam; j++)
        {
            printf(" %3d |",a.m[i][j]);
        }
        printf("\n");
    }
}

// Leer una Matriz
void leer(Matriz *a)
{
    printf("Leyendo Matriz...\n");
    char opc;
    do{
        printf("¿Desea introducir un nombre para la matriz? S/N > ");
        scanf(" %c",&opc);
    }while(opc != 's' && opc != 'S' && opc != 'n' && opc != 'N');
    if(opc == 's' || opc == 'S')
    {
        printf("Introduzca el nombre de la matriz: ");
        scanf(" %s",&a->nom);
    }
    else
    {
        a->nom = "NULO";
    }
    for(int i = 0; i < a->tam; i++)
    {
        for(int j = 0; j < a->tam; i++)
        {
            printf("Introduzca el elemento para la posición [%d][%d]: ",i,j);
            scanf(" %d",&a->m[i][j]);
        }
    }
    printf("Fin de lectura de Matriz.\n");
}

Matriz gaussjordan(Matriz A)
{
    Matriz res;
    return res;
}
