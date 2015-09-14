/*
    Programa 7

    Programa que indica si un caracter es mayúscula o minúscula.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

bool minuscula( char );
bool mayuscula( char );

int main()
{
    char letra;
    
    printf("\tPrograma que Comprueba si una letra es mayúscula o minúscula\n\n");

    printf("Introduce una letra: ");
    scanf("%c",&letra);

    if(minuscula(letra))
    {
        printf("La letra introducida (%c) es Minúscula.\n",letra);
    }
    else if(mayuscula(letra))
    {
        printf("La letra introducida (%c) es Mayúscula.\n",letra);
    }
    else
    {
        printf("El valor introducido no es una letra.\n");
    }

    printf("\nFin del Programa.\n");

    return 0;
}

bool minuscula( char a )
{
    return ( a >= 'a' && a <= 'z');
}

bool mayuscula( char a )
{
    return (a >= 'A' && a <= 'Z');
}
