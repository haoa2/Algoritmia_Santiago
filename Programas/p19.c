#include <stdio.h>

int main()
{
    printf("\tPotencias de 2\n");

    int i = 1, temp, j;
    printf("\tPot.| Resultado\n");
    printf("\t  0 |           1\n");
    while(i < 32)
    {
        temp = 2;
        j = 1;
        while(j < i)
        {
            temp *= 2;
            j++;
        }
        printf("\t %2d | %11d\n",i,temp);
        i++;
    }
    return 0;
}
