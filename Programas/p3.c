/*
    Programa 3

    Programa que calcula el área de un Rectángulo.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int main()
{
    int a, b;

    printf("\tCálculo de Áreas de un Rectángulo\n\n");
    
    printf("Introduce la medida de la base: ");
    scanf("%d",&a);
    printf("Introduce la medida de la altura: ");
    scanf("%d",&b);

    printf("La medida del Rectángulo de %dx%d es: %d.\n",a,b,a*b);
    printf("\nRepresentación Gráfica:\n\n\t");

    for(int i = 0; i < a; i++)
    {
        printf("#");
    }
    printf("\n");
    for(int i = 0; i < b-2; i++)
    {
        printf("\t#");
        for(int j = 0; j < a-2; j++)
        {
            printf(" ");
        }
        printf("#\n");
    }
    printf("\t");
    for(int i = 0; i < a; i++)
    {
        printf("#");
    }
    printf("\nFin del Programa\n");
    return 0;
}
