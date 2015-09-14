/*
    Programa 8 (Tarea)

    Programa que detecta si un caracter es un(a):
        -Letra Mayúscula
        -Letra Minúscula
        -Dígito
        -Ninguna de las anteriores

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

bool digito( char );
bool minuscula( char );
bool mayuscula( char );

int main()
{
    char letra;

    printf("\tPrograma que Detecta si un caracter es Mayúscula, Minúscula o Dígito\n");

    printf("Introduce el caracter: ");
    scanf("%c",& letra);
    
    if(digito(letra))
    {
        printf("El caracter (%c) es un dígito.\n",letra);
    }
    else if(mayuscula(letra))
    {
        printf("El caracter (%c) es una letra mayúscula.\n",letra);
    }
    else if(minuscula(letra))
    {
        printf("El caracter (%c) es una letra minúscula.\n",letra);
    }
    else
    {
        printf("El caracter (%c) no es ninguna opción disponible.\n", letra);
    }

    printf("Fin del Programa.\n");
    return 0;
}

bool digito( char a )
{
    return (a >= '0' && a <= '9');
}

bool minuscula( char a )
{
    return (a >= 'a' && a <= 'z');
}

bool mayuscula( char a )
{
    return (a >= 'A' && a <= 'Z');
}
