/*
    Programa 4

    Programa que Calcula el área de una circunferencia.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float r;
    char opcion;

    printf("\tCálculo de Área de Circunferencia\n\n");
    printf("¿Desea intrudocir el [D]iámetro o el [R]adio? ");
    scanf("%c",&opcion);
    printf("Introduzca el dato: ");
    scanf("%f",&r);

    if(opcion == 'd' || opcion == 'D')
    {
        r /= 2;
    }
    
    printf("El valor de la circunferencia con Radio %.2f es igual a: %.2f.\n",r,M_PI*(r*r));

    return 0;
}
