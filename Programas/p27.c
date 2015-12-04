/*
   Incidencias de Una Frase

   Programa que indica el n�úmero de incidencias de una frase en un archivo.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites.)
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>

#define MAX_BUFFER 1024 // 1024 Bytes. 1 Kb.

// Prototipos de Funciones
void file2arr(char*,char*);
int ocurrencias(char*,char*);

// Función Principal.
int main(int argc, char *argv[])
{
    char *filename;
    char* searchStr;
    char buffer[MAX_BUFFER];

    printf("\t\tPrograma que Busca incidencias de una Frase en un Archivo.\n\n");

    if(argc != 2)
    {
        printf("Introduce el nombre del archivo sin espacios: ");
        scanf(" %s",filename);
    }
    else
    {
        filename = argv[1];
    }

    file2arr(filename,buffer);

    if(argc != 3)
    {
        printf("Introduce un String a buscar: ");
        scanf(" %s",&searchStr);
    }
    else
    {
        searchStr = argv[2];
    }

    
    printf("La palabra %s, aparece %d veces en el archivo %s.\n",searchStr,ocurrencias(searchStr,buffer),filename);

    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones
void file2arr(char* filename, char* buffer)
{
    FILE* in;
    in = fopen(filename,"r");
    char temp;
    
    for(int i = 0; i < MAX_BUFFER && ((temp = fgetc(in)) != EOF); i++){
        buffer[i] = temp;
    }
    fclose(in);
}

int ocurrencias(char* str, char* buff)
{
    return 3;
}


// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
