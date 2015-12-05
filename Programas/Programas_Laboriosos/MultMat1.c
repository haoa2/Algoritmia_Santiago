/*
    Multiplicación de Matrices.

    Programa que multiplica un par de matrices.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>
// El máximo tamaño de una matriz.
#define DIMENSION 100

// Prototipos de Funciones.
void leer_matriz(int m[][DIMENSION], int a);
void multiplicar_matrices(int x[][DIMENSION], int y[][DIMENSION], int z[][DIMENSION], int a);
void imprimir_matriz(int m[][DIMENSION], int a);

// Función Principal.
int main(int argc, char **argv)
{
    int mat_a[DIMENSION][DIMENSION],
        mat_b[DIMENSION][DIMENSION],
        mat_c[DIMENSION][DIMENSION];
    int a;

    printf("\tMultiplicación de Matrices.\n\n");
    printf("Programa que multiplica un par de matrices.\n");
    printf("Introduzca el valor de la magnitud de la matriz: ");
    scanf("%d",&a);

    printf("Leyendo la matriz A:\n");
    leer_matriz(mat_a,a);
    printf("Leyendo la matriz B:\n");
    leer_matriz(mat_b,a);

    multiplicar_matrices(mat_a,mat_b,mat_c,a);

    printf("La multiplicación de la Matriz A:\n");
    imprimir_matriz(mat_a,a);
    printf("Por la Matriz B:\n");
    imprimir_matriz(mat_b,a);
    printf("Resulta en la Matriz:\n");
    imprimir_matriz(mat_c,a);

    return 0;
}

// Implementación de Funciones.

void leer_matriz(int m[][DIMENSION], int a)
{
    printf("Se leerá una matriz de %dx%d.\n\n",a,a);

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            printf("Introduzca el dato para la posición [%d][%d]: ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    printf("Fin de la lectura.\n");
}

void imprimir_matriz(int m[][DIMENSION], int a)
{
    printf("Contenido de la matriz:\n");
    for(int i = 0; i < a; i++)
    {
        printf("\t");
        for(int j = 0; j < a; j++)
        {
            printf(" %4d ",m[i][j]);
        }
        printf("\n");
    }
}

void multiplicar_matrices(int x[][DIMENSION], int y[][DIMENSION], int z[][DIMENSION], int a)
{
}
