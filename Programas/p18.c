#include <stdio.h>

int main()
{
    int a, fac = 1;
    printf("\tFactorial\n\n");
    printf("Introduzca el número para calcular su factorial: ");
    scanf("%d",&a);

    while(a >= 1)
    {
        fac *= a;
        a--;
    }

    printf("El factorial es: %d\n",fac);

    return 0;
}
