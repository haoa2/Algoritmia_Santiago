/*
    Programa 16

    Programa que imprime las letras del Abecedario de la Z->A con while.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int main()
{
    char a = 'Z';
    while(a >= 'A')
    {
        a--;
        printf("\t%d - %c\n",a,a);
    }
    return 0;
}
