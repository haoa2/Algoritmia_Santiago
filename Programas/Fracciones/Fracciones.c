/*
	Fracciones.c

	Implementación de las funciones en Fracciones.h

	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
	2015
*/

// Librería
#include "Fracciones.h"

// Librerías STD.
#include <stdio.h>
#include <math.h>

// Funciones privadas

bool mixta(Fraccion A)
{
	return A.a != 0;
}

bool impropia(Fraccion A)
{
	return A.a == 0;
}

// Conversiones

Fraccion impropiaMixta(Fraccion A)
{
	if (mixta(A))
	{
		return A;
	}

	A.a = A.b/A.c;
	if(A.b%A.c == 0)
	{
		A.b = 1;
	}
	else
	{
		A.b = A.b%A.c;
	}
	return A;
}

Fraccion mixtaImpropia(Fraccion A)
{
	if(impropia(A))
	{
		return A;
	}
	A.b = ((A.a*A.c)+A.b);
	A.a = 0;
	return A;
}

// Misceláneas

void imprimir(Fraccion t)
{
	/* Impresión Antigua 
	if(impropia(t))
	{
		printf("     %-3d\n",t.b);
		printf("    -----\n");
		printf("     %-3d\n",t.c);
	}
	else
	{
		printf("     %-3d\n",t.b);
		printf("%3d -----\n",t.a);
		printf("     %-3d\n",t.c);
	}
	*/
	if(impropia(t))
	{
		printf("   X [%3d|%-3d] ",t.b,t.c);
	}
	else
	{
		printf(" %3d [%3d|%-3d] ",t.a,t.b,t.c);
	}
}


Fraccion leer()
{
	Fraccion temp;
	char opc;
	
	do{
		printf("¿Desea introducir una fracción [M]ixta o [I]mpropia? > ");
		scanf(" %c",&opc);
	}while(opc != 'm' && opc != 'M' && opc != 'I' && opc != 'i');
	
	if(opc == 'm' || opc == 'M')
	{
		printf("Introduzca la parte entera de la fracción: ");
		scanf(" %d",&temp.a);
	}
	else
	{
		temp.a = 0; // Por Default.
	}

	printf("Introduzca el numerador de la fracción: ");
	scanf(" %d",&temp.b);

	printf("Introduzca el denominador de la fracción: ");
	scanf(" %d",&temp.c);

	printf("Se leyó correctamente la fracción:\n");
	imprimir(temp);

	return temp;
}

// Matemáticas

// Multiplicación de Fracciones
Fraccion multiplicacion(Fraccion A, Fraccion B) // Una Fracción por otra Fracción
{
	Fraccion res;
	A = mixtaImpropia(A);
	B = mixtaImpropia(B);
	res.a = 0;
	res.b = A.b*B.b;
	res.c = A.c*B.c;
	return res;
}

Fraccion multiplicacion(Fraccion A, int k)     // Una Fracción por un valor escalar
{
	if(impropia(A))
	{
		A.a = k;
	}
	else
	{
		A.a *= k;
	}
	return A;
}

// Suma de Fracciones
Fraccion suma(Fraccion A, Fraccion B)  // Una Fracción más otra Fracción
{
	Fraccion res;
	A = mixtaImpropia(A);
	B = mixtaImpropia(B);
	res.a = 0;
	res.b = (A.b*B.c)+(A.c*B.b);
	res.c = A.c*B.c;
	return res;
}

Fraccion suma(Fraccion A, int k)       // Una Fracción más un valor escalar
{
	if (mixta(A))
	{
		A.a += k;
	}
	else
	{
		A.a = k;
	}
	return A;
}

// Resta de Fracciones
Fraccion resta(Fraccion A, Fraccion B)  // Una Fracción menos otra Fracción
{
	Fraccion res;
	A = mixtaImpropia(A);
	B = mixtaImpropia(B);
	res.a = 0;
	res.b = (A.b*B.c)-(A.c*B.b);
	res.c = A.c*B.c;
	return res;
}

Fraccion resta(Fraccion A, int k)       // Una Fracción menos un valor escalar
{
	if(mixta(A))
	{
		A.a -= k;
	}
	else
	{
		A.a = k*(-1);
	}
	return A;
}

// División de Fracciones
Fraccion division(Fraccion A, Fraccion B)  // Una Fracción entre otra Fracción
{
	Fraccion res;
	A = mixtaImpropia(A);
	B = mixtaImpropia(B);

	res.a = 0;
	res.b = A.b*B.c;
	res.c = A.c*B.b;

	return res;
}

Fraccion division(Fraccion A, int k)       // Una Fracción entre un valor escalar
{
	A = mixtaImpropia(A);
	A.c *= k;
	return A;
}

// Potencia de Fracciones
Fraccion potencia(Fraccion A, int n) // Una Fraccion elevada a la N.
{
	A = mixtaImpropia(A);
	A.b = pow(A.b,n);
	A.c = pow(A.c,n);
	return A;
}