/*
   Búsqueda de Substring Revursiva

   Programa que busca un substring en una cadena dada de la lectura de un archivo de forma de recursiva.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites).
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>
#include "Archivos/Archivos.h"

// Constantes (Quita el comentario de las pre-definidas que necesites).
//#define MAX_BUFFER 1024
//#define VERBOSE false

// Constantes Por Default.
#define false 0
#define true 1

// Prototipos de Funciones y Prototipos

// Estructura string.
struct _string
{
    char str[MAX_BUFFER];
    int tam;
};

typedef struct _string string; // Tipo de dato "string"

/*
    índice
    devuelve el indice donde se encontró el substring o -1 en caso de no existir
    los parámetros son:
        -el string original (buffer o haystack)
        -el substring a encontrar (needle)
        -el índice para iniciar la búsqueda
*/
int indice(string,string,int);
/*
    comparar
    devuelve true en caso de que el needle esté en el haystack, false en caso contrario
    los parámetros son:
        -el índice de inicio de la búsqueda
        -el haystack
        -el needle (solo se búscará la longitud del needle)
*/
int comparar(int,string,string);
/*
    leer
    devuelve void
    los parámetros son:
        -un puntero a la estructura donde almacenar la información
*/
void leer(string*);

// Función Principal.
int main(int argc, char *argv[])
{
    string or;
    string sub;
    char* filename;
    // Para empaquetarlos posteriormente.
    char temp[MAX_BUFFER];
    int templen;
    FILE *archivo;

    printf("\tPrograma que busca un substring en un archivo\n\n");
    
    if(argc != 2)
    {
        printf("Introduzca el nombre del fichero a abrir: ");
        scanf(" %s",filename);
    }
    else
    {
        filename = argv[1];
    }

    printf("Se leerá %s ...\n");
    // Abrir archivo.
    archivo = fopen(filename,LECTURA);
    
    // Lectura
    templen = file2arr(archivo,or.str);

    // Empaquetamiento
    or.tam = templen;
    
    printf("Introduce la palabra que deseas buscar: ");
    leer(&sub);

    // Función principal.
    templen = indice(or,sub,0); // Reuso de variable.
    if(templen == -1)
    {
        printf("No se eoncontró el substring en el archivo.\n");
    }
    else
    {
        printf("El substring se encontró por primera vez en el archivo en la posición %d\n",templen);
    }

    printf("\nFin del Programa\n");
    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones

int indice(string s, string sub, int pos)
{
    if(pos >= s.tam)
    {
        return -1;
    }
    if(comparar(pos,s,sub))
    {
        return pos;
    }
    
    return indice(s,sub,pos+1);
}

int comparar(int pos, string original, string subs)
{
    for(int i = 0; i < subs.tam && pos < original.tam; i++, pos++)
    {
        if(original.str[pos] != subs.str[i])
        {
            return false;
        }
    }
    return true;
}

void leer(string* estructura)
{
    scanf(" %s",&estructura->str);
    for(int i = 0; i < MAX_BUFFER; i++)
    {
        if(estructura->str[i] == '\0')
        {
            estructura->tam = i;
            break;
        }
    }
}
// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
