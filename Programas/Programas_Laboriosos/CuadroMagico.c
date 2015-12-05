/*
    Cuardo Mágico

    Programa que Resuelve un cuadro mágico.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

// Constante del Tamaño Máximo del Cuadro.
#define MAX 100

// Estructura del Cuadro.
typedef struct
{
    int n;
    int m[MAX][MAX];
} Cuadro;

// Prototipos de Funciones.
Cuadro resolver(int);
void imprimir(Cuadro);
void linea(int);
int lado(Cuadro);

// Función Principal.
int main()
{
    Cuadro resultado;
    int a;
    
    printf("\t\tCuadro Mágico\n\n");

    printf("Introduzca el tamaño del cuadro: ");
    scanf("%d",&a);
    
    if(a%2 == 0)
    {
        printf("El número introducido no es impar.\n");
        return -1;
    }

    resultado = resolver(a);
    
    printf("El Cuadro Resuelto es:\n");
    imprimir(resultado);
    printf("\nFin del Programa.\n");

    return 0;
}

// Implementación de Funciones
Cuadro resolver(int a)
{
    int f = 0, c = a/2;
    Cuadro r;
    r.n = a;
    for(int i = 1; i <= a*a; i++)
    {
        r.m[f][c] = i;
        f--;
        c++; // Ja.
        if(i%a == 0)
        {
            f+= 2;
            --c;
        }
        else
        {
            if(c == a)
            {
                c -= a;
            }
            else if(f < 0)
            {
                f += a;
            }
        }

    }
    return r;
}

void linea(int a)
{
    printf("\t");
    for(int i = 0; i < a; i++)
    {
        printf("-");
    }
}

int lado(Cuadro b)
{
    int sum = 0;
    for(int i = 0; i < b.n; i++)
    {
        sum += b.m[0][i];
    }
    return sum;
}

void imprimir(Cuadro a)
{
    printf("\n");
    linea(a.n*6);
    for(int i = 0; i < a.n; i++)
    {
        printf("\n\t| ");
        for(int j = 0; j < a.n; j++)
        {
            printf("%3d | ",a.m[i][j]);
        }
        printf("\n");
        linea(a.n*6);
    }
    printf("\n");
    printf("\tLa suma por lado es de: %d\n",lado(a));
}

// Fin del Código.
