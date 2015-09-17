/*
    Programa 11

    Programa que indica si un número es par en el rango (1-10).

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int main()
{
    int a;

    printf("\tPrograma que indica si un número es par.\n\n");

    printf("Introduce el número: ");
    scanf("%d",&a);

    switch(a)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Es impar.\n");
            break;

        case 0: // El Cero es un número par. 0/2 = 0 ya que 0*2 = 0.
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Es par.\n");
            break;

        default:
            printf("El número es menor a 1, mayor a 10, o no es un número.\n");
            break;
    }

    printf("Fin del Programa.\n");
    return 0;
}
