/*
   Búsqueda Binaria

   Programa que realiza una Búsqueda Binaria dentro de un array de enteros.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites.)
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>

#define MAX_TAM 1000

// Prototipos de Funciones

int busqueda(int, int*, int);
void leer(int*,int*);
void ordenar(int*, int);

// Función Principal.
int main(int argc, char *argv[])
{
    char opc;   // Opción de entrada.

    int arr[MAX_TAM],   // El vector.
        tam,            // El tamaño del vector.
        valor,          // El valor a buscar.
        res;            // El resultado (posición).

    printf("\t\tBúsqueda Binaria.\n\n");
    
    do{
        printf("¿Desea introducir el arreglo? S/N > ");
        scanf(" %c",&opc);
    }while(opc != 'S' && opc != 's' && opc != 'n' && opc != 'N');
    
    if(opc == 's' || opc == 'S')
    {
        leer(arr,&tam);
    }
    else
    {
        printf("Introduzca el tamaño del arreglo a generar: ");
        scanf(" %d",&tam);
        if(tam < 1 || tam > MAX_TAM)
        {
            printf("Error: Ha introducido un valor inválido, se ha truncado a %d.\n",MAX_TAM);
            tam = MAX_TAM;
        }
        for(int i = 0; i < tam; i++)
        {
            arr[i] = i+1; // 1-tam;
        }
    }

    printf("\nIntroduzca el valor a buscar en el arreglo: ");
    scanf("%d",&valor);

    res = busqueda(valor,arr,tam);

    if(res != -1)
    {
        printf("El dato (%d) se encuentra en la posición [%d] dentro del arreglo.\n", valor, res);
    }
    else
    {
        printf("El valor no se encuentra dentro del arreglo.\n");
    }
    printf("\nFin del Programa.\n");
    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones

int busqueda(int dato, int* vec, int tam)
{
    int l = 0,
        r = tam-1,
        m;

    while(l <= r)
    {
        m = l + (r-l)/2;

        if(vec[m] == dato)
        {
            return m;
        }
        
        if(vec[m] < dato)
        {
            l = m+1;
        }
        else
        {
            r = m-1;
        }
    }
    return -1;
}

void leer(int * vec, int * tam)
{
    printf("Introduzca el tamaño del arreglo a leer: ");
    scanf(" %d",tam);
    if(*tam > MAX_TAM || *tam < 1)
    {
        printf("Error: Se ha introducido un valor inválido, el tamaño se ha truncado a %d.\n",MAX_TAM);
    }
    for(int i = 0; i < *tam; i++)
    {
        printf("Introduzca el valor para la posición [%d]: ",i+1);
        scanf(" %d",&vec[i]);
    }

    printf("Se procede a ordenar el arreglo...\n");
    ordenar(vec,*tam);
    printf("Fin de la lectura del arreglo.\n");
}

void ordenar(int * vec, int t)
{
    int temp;
    printf("El arreglo desordenado es:\n  ={");
    for(int i = 0; i < t; i++)
    {
        printf("%d,",vec[i]);
    }
    printf("%d}\n",vec[t-1]);
    for(int i = 0; i < t; i++)
    {
        for(int j = i+1; j < t; j++)
        {
            if(vec[i] > vec[j])
            {
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
        }
    }
    printf("El arreglo ordenado es:\n ={");
    for(int i = 0; i < t-1; i++)
    {
        printf("%d,",vec[i]);
    }
    printf("%d}\n",vec[t-1]);
}

// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
