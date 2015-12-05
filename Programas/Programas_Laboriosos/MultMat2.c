/*
    Multiplicación de Matrices.

    Programa que realiza la multiplicación de dos matrices.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>
// Constante de Tamaño Máximo.
#define MAX 100

// Estructura para encapsular la Matriz.
typedef struct
{
    char* nom;          // Nombre de la Matriz.
    int tam;            // Tamaño de la Matriz.
    int m[MAX][MAX];    // Matriz.
} Matriz;

// Prototipos de Funciones
Matriz multiplicar(Matriz,Matriz);  // Multiplicación de Dos Matrices.
void leer(Matriz*);                 // Leer una Matriz.
void imprimir(Matriz);              // Imprimir una Matriz.

// Función Principal.
int main()
{
    Matriz A,   // Matriz A.
           B;   // Matriz B.
    int temp;   // Almacenamiento temporal del tamaño de la Matriz.

    printf("\t\tMultiplicación de Matrices\n\n");
    printf("Introduzca el tamaño de las Matrices: ");
    scanf("%d",&temp);

    // Comprobación si el valor es inaceptable.
    if(temp < 1 || temp > MAX)
    {
        printf("El valor que usted introdujo no se encuentra en un rango aceptable.\n");
        return -1; // Error.
    }

    // Se llenan las Matrices.
    A.nom = "Matriz A";
    B.nom = "Matriz B";
    A.tam = B.tam = temp;

    printf("Introduzca los datos de las Matrices:\n");
    
    // Lectura de las Matrices.
    leer(&A); 
    leer(&B);
    
    // Impresión de los Resultados.
    printf("\nEl producto de %s:\n",A.nom);
    imprimir(A);
    printf("Por %s:\n",B.nom);
    imprimir(B);
    printf("Resulta en:\n");
    imprimir(multiplicar(A,B)); // (¿) No le veo caso a almacenar el resultado (?)

    printf("\nFin del Programa.\n");

    return 0;
}

// Implementación de las funciones.

// Función de Multiplicación de Matrices.
Matriz multiplicar(Matriz x, Matriz y)
{
    Matriz res;
    res.nom = "Matriz Resultante";
    res.tam = x.tam;
    int temp; // Almacenamiento temporal de la sumatoria.

    for(int i = 0; i < x.tam; i++)
    {
        for(int j = 0; j < y.tam; j++)
        {
            temp = x.m[i][0]*y.m[0][j]; // Primer elemento.
            for(int k = 1; k < y.tam; k++)
            {
                temp += x.m[i][k]*y.m[k][j]; // Sumatoria.
            }
            res.m[i][j] = temp;
        }
    }
    return res;
}

// Función para imprimir una Matriz.
void imprimir(Matriz r)
{
    printf("Contenido de %s:\n\n",r.nom);
    printf("\t    |");
    for(int i = 0; i < r.tam; i++)
    {
        printf(" %3d |",i+1);
    }
    printf("\n\t");
    for(int i = 0; i < ((r.tam+1)*6); i++)
    {
        printf("-");
    }
    printf("\n");
    for(int i = 0; i < r.tam; i++)
    {
        printf("\t %2d |", i+1);
        for(int j = 0; j < r.tam; j++)
        {
            printf(" %3d |",r.m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Función para leer una Matriz.
void leer(Matriz *h)
{
    printf("Leyendo el contenido de %s de tamaño %dx%d:\n\n",h->nom,h->tam,h->tam);
    for(int i = 0; i < h->tam; i++)
    {
        for(int j = 0; j < h->tam; j++)
        {
            printf("-Introduzca el dato de la posición [%d][%d]: ",i+1,j+1);
            scanf("%d",&h->m[i][j]);
        }
    }
}

// Fin del Código.
