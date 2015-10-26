/*
   Numero de Días

   Programa que calcula el número de días de un determinador mes.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites.)
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//#include <time.h>


// Prototipos de Funciones

int dias(int);

// Función Principal.
int main(int argc, char *argv[])
{
   int temp;
   char *mes[12] = {
       "Enero",
       "Febrero",
       "Marzo",
       "Abril",
       "Mayo",
       "Junio",
       "Julio",
       "Agosto",
       "Septiembre",
       "Octubre",
       "Noviembre",
       "Diciembre"
   };

   printf("\tPrograma que Calcula el número de Días en un Determinado Mes.\n\n");

   printf("Introduce el número del mes (Enero->1, Febrero->2...): ");
   scanf(" %d",&temp);

   printf("El número de días en %s es: %d.\n",mes[temp-1], dias(temp));

   printf("\nFin del Programa.\n");

   return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones

int dias(int mes)
{
    if(mes == 2)
    {
        return 28;
    }
    else if(mes < 8)
    {
        return 30+(mes%2);
    }
    else
    {
        return 31-(mes%2);
    }
}

// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
