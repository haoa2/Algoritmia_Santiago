/*
    Programa 5

    Programa que le indica al usuario si un entero es menor o igual que 10.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int main()
{
    int num;

    printf("\tPrograma que Comprueba si un número es Menor o igual a 10\n\n");

    printf("Introduce un número: ");
    scanf("%d",&num);

    if(num <= 10)
    {
        printf("El número es menor o igual a 10.\n");
    }
    else
    {
        printf("El número es mayor a 10.\n");
    }
    printf("Fin del Programa\n");
    return 0;
}
