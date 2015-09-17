/*
    Programa 9

    Programa que realiza operaciones con los operadores lógicos.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int main()
{
    int a, b;

    printf("\tUso de Operadores Lógicos\n\n");

    printf("Introduce el primer valor: ");
    scanf("%d",&a);

    printf("Introduce el segundo valor: ");
    scanf("%d",&b);

    printf("a && b = %d\n",a && b);
    printf("!(a && b) = %d\n",!(a && b));
    printf("a || b = %d\n",a || b);
    printf("!(a || b) = %d\n",!(a || b));

    printf("\nFin del Programa\n");
    return 0;
}
