/*
    Programa 6

    Programa que cambia un número tecleado (1-5) con letra.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

char *numeros[11] = {
    "Cero",
    "Uno",
    "Dos",
    "Tres",
    "Cuatro",
    "Cinco",
    "Seis",
    "Siete",
    "Ocho",
    "Nueve",
    "Diez"
};

char* numtostr( int );

int main()
{
    int num;

    printf("\tPrograma que imprime un número alfabéticamente\n\n");

    printf("Introduce el número (0-10): ");
    scanf("%d",&num);

    printf("El número %d se escribe como: %s\n",num, numtostr(num));

    printf("Fin del Programa\n");

    return 0;
}

char* numtostr( int n)
{
    if( n < 0 || n > 10)
    {
        return "Número no registrado :(";
    }
    return numeros[n];
}
