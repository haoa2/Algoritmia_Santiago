/*
    Programa 1

    Programa que Imprime mi nombre en la pantalla.

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <stdio.h>

int main(int argc, char* argv[])
{
	if(argc != 2)
	{
		printf("\tHola, mi nombre es Humberto :)\n");
	}
	else
	{
		printf("\tHola, mi nombre es %s :)\n",argv[1]);
	}
	return 0;
}
