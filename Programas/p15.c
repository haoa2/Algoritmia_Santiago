/*
    Programa 15

    Programa que imprime los caracteres mayúscuas usando el ciclo While.

    Hmberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int main()
{
    char c = 'A';
    while(c <= 'Z')
    {
        printf("\t %d - %c\n",c,c);
        ++c;
    }

    return 0;
}
