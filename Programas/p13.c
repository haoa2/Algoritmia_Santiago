/*
    Programa 13

    Programa que calcula el número de permutaciones que puede haber en un conjunto.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int factorial( int );
int combina( int, int );

int main()
{
    int n, r;

    printf("\tPrograma que Calcula las Permutaciones posibles de un conjunto.\n\n");

    printf("Introduce el número de elementos: ");
    scanf("%d",&n);

    printf("Introduce el número de objetos a probar: ");
    scanf("%d",&r);

    printf("\nEl número de combinaciones (%d)C(%d) = %d.\n\n",n,r,combina(n,r));

    printf("Fin del Programa.\n");

    return 0;
}

int factorial( int f )
{
    if( f <= 0)
    {
        return 1;
    }
    else
    {
        return f*factorial(f-1);
    }
}

int combina( int n, int r )
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}
