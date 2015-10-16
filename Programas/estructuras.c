/*
   Estructuras

   Programa que realiza operaciones básicas con estructuras.

   Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
   2015
*/

// Cabeceras (Quita el comentario en las que necesites.)
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <math.h>
//#include <time.h>


// Prototipos de Funciones y Estructuras.

/*
    Estructura de Fracción

    A(b/c) <- Fracción Impropia, Mixta etc...
    1(b/c) <- Fracción Propia
*/
typedef struct
{
    int a,  // Parte entera
        b,  // Numerador
        c;  // Denominador
} Fraccion;

// Operaciones con Fracciones
Fraccion multiplicar(Fraccion, Fraccion);   // Multiplicación de dos Fracciones
Fraccion sumar(Fraccion, Fraccion);
Fraccion dividir(Fraccion, Fraccion);
Fraccion restar(Fraccion, Fraccion);
Fraccion potencia(Fraccion, int);
Fraccion raizCuadrada(Fraccion*);

// Conversiones
Fraccion mixta_impropia(Fraccion); 
Fraccion impropia_mixta(Fraccion);
bool impropia(Fraccion);
bool mixta(Fraccion);

// Funciones con Fracciones
void imprimir(Fraccion);
void leer(Fraccion);

// Función Principal.
int main(int argc, char *argv[])
{
    
    return 0; // Fin del Programa con estado 0.
}

// Implementación de Funciones

// Operaciones
Fraccion multiplicar(Fraccion A, Fraccion B)
{
    Fraccion res;
    res.a = A.a*B.a;
    res.b = A.b*B.b;
    res.c = A.c*B.c;
    return res;
}

Fraccion sumar(Fraccion A, Fraccion B)
{
    Fraccion res;
    A = mixta_impropia(A);
    B = mixta_impropia(B);
    res.a = 1;
    res.b = (A.b*B.c)+(A.c*B.b);
    res.c = A.c*B.c;
    return impropia_mixta(res);
}

Fraccion dividir(Fraccion A, Fraccion B)
{
    Fraccion res;
    A = mixta_impropia(A);
    B = mixta_impropia(B);
    res.a = 1;
    res.b = A.b*B.c;
    res.c = A.c*B.a;
    return impropia_mixta(res);
}

Fraccion restar(Fraccion A, Fraccion B)
{
    Fraccion res;
    A = mixta_impropia(A);
    B = mixta_impropia(B);
    res.a = 1;
    res.b = (A.b*B.c)-(A.c*B.b);
    res.c = A.c*B.c;
    return impropia_mixta(res);
}

Fraccion potencia(Fraccion A, int pot)
{
    Fraccion res;
    A = mixta_impropia(A);
    res.a = 1;
    res.b = pow(A.b,pot);
    res.c = pow(A.c,pot);
    return impropia_mixta(res);
}

Fraccion raizCuadrada(Fraccion A)
{
    Fraccion res;
    A = mixta_impropia(A);
    res.a = 1;
    res.b = sqrt(A.b);
    res.c = sqrt(A.c);
    return impropia_mixta(res);
}

// Conversiones
Fraccion mixta_impropia(Fraccion A)
{
    if(impropia(A))
    {
        return A;
    }
    Fraccion res;
    res.a = 1;
    res.b = A.a*A.b;
    res.c = A.c;
    return res;
}

Fraccion impropia_mixta(Fraccion A)
{
    if(mixta(A))
    {
        return A;
    }
    Fraccion res;
    res.a = A.b/A.c;
    res.b = A.b%A.c;
    res.c = A.c;
    return res;
}

bool impropia(Fraccion C)
{
    return C.a == 1;
}

bool mixta(Fraccion C)
{
    return C.a != 1;
}

// Funciones.
void imprimir(Fraccion A)
{
    A = impropia_mixta(A);
    printf("     %-3d\n",A.b);
    printf("%3d -----\n",A.a);
    printf("     %-3d\n",A.c);
}

void leer(Fraccion* B)
{
    char opc;
    do{
        printf("¿Desea introducir una fracción [P]ropia o [I]mpropia? ");
        scanf("%c",&opc);
    }while(opc != 'I' && opc != 'i' && opc != 'p' && opc != 'P');
    if(opc == 'I' || opc == 'i')
    {
        printf("Introduce la parte entera de la Fracción: ");
        scanf("%d",&B->a);
        printf("Introduce el numerador de la Fracción: ");
        scanf("%d",&B->b);
        printf("Introduce el denominador de la Fracción: ");
        scanf("%d",&B->c);
    }
    else
    {
        B->a = 1; // Por Default.
        printf("Introduce el Numerador: ");
        scanf("%d",&B->b);
        printf("Introduce el Denominador: ");
        scanf("%d",&B->c);
    }
    printf("Fin de la lectura.\n");
}
// Fin del Código
/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */
