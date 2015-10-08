/*
    Programa 21

    Programa que convierte una cadena en un entero.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>
#include <string.h>

int myatoi(char[]);

int main()
{
    printf("\tPrograma que convierte una cadena a entero.\n\n");

    int a;
    char cad[10];

    printf("Introduce un número: ");
    scanf("%s",cad);

    a = myatoi(cad);

    printf("El valor numérico es: %d\n",a);
    printf("%d x 2 = %d\n",a,a*2);

    printf("Fin del Programa\n");

    return 0;
}

int myatoi(char a[])
{
    int i = 0,
        res = 0;
    while(i < strlen(a))
    {
        printf("%d \n",res);
        res = (res*10)+(a[i]-'0');
        i++;
    }
    return res;
}
