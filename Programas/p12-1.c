/*
    Programa 12-1

    Nociones de recursión

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int sumatoria( int );

int main()
{
    int h;

    printf("\tPrograma que realiza una sumatoria Recursivamente.\n\n");
    printf("Introduzca el valor para calcular su sumatoria: ");
    scanf("%d",&h);

    printf("El valor de la sumatoria de %d es: %d.\n",h,sumatoria(h));

    printf("Fin del Programa.\n");
    return 0;
}

int sumatoria( int j )
{
    if(j == 0)
    {
        return j;
    }
    else
    {
        return j + sumatoria( j-1 );
    }
}

