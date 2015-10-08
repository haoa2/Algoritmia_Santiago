#include <stdio.h>

int main()
{
    int n, a = 10;
    printf("\tPrograma que Muestra una tabla de Multiplicar.\n\n");
    printf("Introduce el número de la tabla a generar: ");
    scanf("%d",&n);
    printf("\n\t A x  B =  AB\n\n");
    while(a >= 1)
    {
        printf("\t%2d x %2d = %2d\n",n,a,n*a);
        a--;
    }
    return 0;
}
