#include <stdio.h>

int main()
{
    printf("\tCorrimiento de Bits.\n");
    int a = 1, i = 1;
    while(a)
    {
        printf("%d - %d\n",i,a);
        a = a<<1;
        i++;
    }
    return 0;
}
