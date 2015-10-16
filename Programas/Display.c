/*
    Display

    Programa que imprime la cadena Binaria representando la combinación lógica para encender
    distintos números en binario (0-9).

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

char * letraBin(int);

int main()
{
    int num;
    printf("\tCombinación Binaria de un Display de 7 Segmentos\n\n");

    printf("Introduzca el número: ");
    scanf("%d",&num);

    printf("La combinación para el número %d es: %s\n\n",num,letraBin(num));

    printf("Fin del Programa\n");

    return 0;
}

char* letraBin(int n)
{
    char* arr= "0000000"; // Inicializando.

    return arr;
}
