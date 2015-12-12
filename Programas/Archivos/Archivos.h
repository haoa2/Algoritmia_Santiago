/*
    Archivos.h

    Cabecera que permite la interacción con archivos, así como proporciona
    algunas funciones de uso recurrente durante el empleo de los mismos.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#ifndef ARCHIVOS_H_INCLUDED
#define ARCHIVOS_H_INCLUDED

/*
    Constantes

    Las siguientes constantes tienen como objetivo simplificar 
    la apertura de archivos.
*/
#define LECTURA     "r"
#define ESCRITURA   "w"
#define APPEND      "a"
// Más complejas.
#define IO_EXISTE   "r+"
#define IO_NUEVO    "w+"
#define IO_APPEND   "a+"
// Tamaño máximo del Archivo
#ifndef MAX_BUFFER
    #define MAX_BUFFER 2048 // 2MB.
#endif

int file2arr(FILE* archivo, char* buffer)
{
    char temp;
    int i;
    rewind(archivo); // Desde el inicio, supongo.
    for(i = 0; i < MAX_BUFFER && ((temp = fgetc(archivo)) != EOF); i++)
    {
        buffer[i] = temp;
        if(i == MAX_BUFFER-1)
        {
            printf("Error: No se ha podido leer el archivo en plenitud ya que excede los 2 MB, redefina la constante MAX_BUFFER.\n");
            return MAX_BUFFER;
        }
    }
    return i;
}

#endif
/*
    Fin del Documento
*/
