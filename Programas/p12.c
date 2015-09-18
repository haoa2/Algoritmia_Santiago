/*
    Programa 12

    Programa que ejemplifica el uso de funciones.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int suma( int, int );

int main()
{
    int x, y;

    printf("\tPrograma que Suma dos números\n\n");
    printf("Introduce X: ");
    scanf("%d",&x);
    printf("Introduce Y: ");
    scanf("%d",&y);

    printf("\nEl resultado de X(%d) + Y(%d) es: %d.\n",x,y,suma(x,y));

    printf("Fin del Programa.\n");

    return 0;
}

int suma(int a, int b)
{
    return a + b;
}
