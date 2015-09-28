/*
    Programa 14
    
    Bubble Sort: en funciones.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>
// Constantes
#define TAM_ARRAY 5

// Prototipos de Funciones
void leer(int *);
void bubblesort(int *);
void imprimir(int *);

// Función Main
int main ( void )
{
    int nums[TAM_ARRAY];

    printf("\n\tBubble Sort\n");

    leer(nums);

    printf("Ordenando...\n");

    bubblesort(nums);

    printf("El arreglo resultante es:\n\n");

    imprimir(nums);

    printf("\nFin del Programa\n");

    return 0;
}

// Instanciación de Funciones
void leer(int * arr)
{
    printf("Leyendo %d datos en el arreglo.\n\n",TAM_ARRAY);

    for(int i = 0; i < TAM_ARRAY; i++)
    {
        printf("Introduce el valor para la posición #%d: ",i+1);
        scanf("%d",arr+i);
    }

    printf("Se leyeron %d datos correctamente.\n",TAM_ARRAY);
}

void bubblesort(int * arr)
{
    int temp_swap;
    for(int i = 0; i < TAM_ARRAY; i++)
    {
        for(int j = i+1; j < TAM_ARRAY; j++)
        {
            if(arr[i] > arr[j])
            {
                temp_swap = arr[i];
                arr[i] = arr[j];
                arr[j] = temp_swap;
            }
        }
    }
}

void imprimir(int * arr)
{
    printf("\tÍndice | Contenido\n");
    printf("\t------------------\n");
    for(int i = 0; i < TAM_ARRAY; i++)
    {
        printf("\t %-6d| %-10d\n",i,arr[i]);
    }
}
