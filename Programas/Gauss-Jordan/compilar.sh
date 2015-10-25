#!/bin/bash
#
#	Script que compila todos los *.c en un directorio para
#	el programa de Matrices. Automáticamente referencía el 
#	path de la libería de Fracciones (La implementación).
#
# 	Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
# <3

clear

NOMBRE=$1

if [ -z "$1" ]; then
	echo "No se introdujo un valor para el archivo.out";
	echo "Usando Salida.out";
	NOMBRE="Salida"
fi

echo "Compilando $NOMBRE"


# Usando todo tipo de comprobaciones porque #LLOLO.
g++ *.c ../Fracciones/Fracciones.c -Wall -Wextra -ansi -pedantic -Weffc++ -Wshadow -g -o $NOMBRE.out

# Mensaje Final. Clang es más descriptivo.
echo "{Si hubo errores que no entiendes (...), usa Clang}"