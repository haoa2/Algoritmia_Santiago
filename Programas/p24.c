/*
   Inversión de Arrays

   El programa consiste en invertir el orden de los elementos dentro de un array.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites.)
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
//#include <math.h>
#include <time.h>

#define MAX_TAM 100

// Prototipos de Funciones

void invertir(int *, int);  // Invertir el array.
void leer(int*,int*);       // Leer el array.
void imprimir(int*,int);    // Imprime el array.
void recorre_izq(int*,int);

// Función Principal.
int main(int argc, char *argv[])
{
    // Variables Locales.
    int arreglo[MAX_TAM];
    int tamanio;

    srand(time(NULL)); // Randomize rand seed.

    printf("\t\tInversión de Arreglos\n\n");
    printf("Programa que invierte el contenido de un arreglo.\n");
    
    leer(arreglo,&tamanio);

    printf("Antes de Invertir...\n");
    imprimir(arreglo,tamanio);
    
    invertir(arreglo,tamanio);
    
    printf("Después de invertir...\n");
    imprimir(arreglo,tamanio);

    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones


void imprimir(int* arr, int tam)
{
    printf("El contenido del arreglo es:\n\t|");
    for(int i = 0; i < tam; i++)
    {
        printf(" %d |",arr[i]);
    }
    printf("\n");
}

void leer(int* arr, int* tam)
{
    char c;
    do{
        printf("Introduce un tamaño válido del arreglo: ");
        scanf(" %d",tam);
    }while(*tam < 1);

    do{
        printf("¿Desea [G]enerar el arreglo o [I]ntroducir manualmente los datos? ");
        scanf(" %c",&c);
    }while(c != 'i' && c != 'I' && c != 'g' && c != 'G');

    if(c == 'i' || c == 'I')
    {
        printf("Leyendo datos manualmente.\n DATOOOOOS: %d\n",*tam);
        for(int i = 0; i < *tam; i++)
        {
            printf("Introduce un valor para la posición [%d]: ",i);
            scanf(" %d",&arr[i]);
        }
    }
    else
    {
        printf("Generando el contenido del arreglo.\n");
        for(int i = 0; i < *tam; i++)
        {
            arr[i] = rand()%100; // Hasta 100...
        }
    }
}


// Primera Implementación (Iterativa)
/*
void invertir(int* arr, int tam)
{
    int temp;
    for(int i = 0; i < tam/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[(tam-1)-i];
        arr[tam-i] = temp;
    }
}
*/

// Segunda Implementación (Recursiva)
void invertir(int * arr, int tam)
{
    if(tam == 1)
    {
        return;
    }
    else
    {
        int temp = *(arr);
        invertir(arr+1,tam-1);
        recorre_izq(arr,tam);
        //++arr;
        arr[tam-1] = temp;
    }
}

void recorre_izq(int *arr, int n)
{
    int temp;
    for(int i = 0; i < n-2; i++)
    {
        arr[i] = arr[i+1];
    }
}
// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
