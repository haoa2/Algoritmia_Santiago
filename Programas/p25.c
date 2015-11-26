/*
   Matriz Transpuesta

   Programa que permite generar la matriz transpuesta a partir de una matriz base.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites.)
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>

#define  MAX 100 // Cambiar en caso de necesitar más espacio.

// Prtototipos de Estructuras
typedef struct
{
    int m[MAX][MAX];    // Matriz
    int rows;           // Filas
    int cols;           // Columnas
} Matriz;               // La estructura tiene por nombre "Matriz"; según.

// Prototipos de Funciones
void leer(Matriz*);
void imprimir(Matriz);
void transp(Matriz*);

// Función Principal.
int main(int argc, char *argv[])
{
    Matriz a;

    printf("\n\t\tPrograma para Transponer una Matriz\n\n");
    printf("Lectura de Datos.\n");

    leer(&a);
    //transp(&a);
    imprimir(a);

    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones
void leer(Matriz* m)
{
    do{
        printf("Introduce un valor válido para el número de Filas: ");
        scanf(" %d",&m->rows);
        printf("Introduce un valor válido para el número de Columnas: ");
        scanf(" %d",&m->cols);
    }while(m->rows > MAX || m->cols > MAX);
    printf("A continuación se leerá la matriz de %dx%d:\n\n",m->rows,m->cols);
    for(int i = 0; i < m->rows; i++)
    {
        for(int j = 0; j < m->cols; j++)
        {
            printf("Introduzca el elemento para la posición [%d][%d]: ",i,j);
            scanf(" %d",&m->m[i][j]);
        }
    }
    printf("Fin de la lectura de la Matriz.\n");
}

void imprimir(Matriz m)
{
    printf("El contenido de la matriz es:\n\n");
    for(int i = 0; i < m.rows; i++)
    {
        printf("\t|");
        for(int j = 0; j < m.cols; j++)
        {
            printf(" %-3d |",m.m[i][j]);
        }
        printf("\n");
    }
}

void transp(Matriz* mat)
{
}
// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
