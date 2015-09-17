/*
    Programa 10

    Uso de Switch

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com
    2015
*/
#include <stdio.h>

int main()
{
    int a, b = 0;
    printf("\tPrograma que Ilustra el uso de Switch\n\n");
    printf("Introduce el valor de a: ");
    scanf("%d",&a);
    
    printf("El número %d en letra es: ",a);
    switch(a)
    {
        case 0:
            printf("cero.\n");
            break;
        case 1:
            b += 1;
            printf("uno.\n");
            break;
        case 2:
            b += 2;
            printf("dos.\n");
            break;
        case 3:
            b += 3;
            printf("tres.\n");
            break;
        case 4:
            b += 4;
            printf("cuatro.\n");
            break;
        case 5:
            b += 5;
            printf("cinco.\n");
            break;
        case 6:
            b += 6;
            printf("seis.\n");
            break;
        case 7:
            b += 7;
            printf("siete.\n");
            break;
        case 8:
            b += 8;
            printf("ocho.\n");
            break;
        case 9:
            b += 9;
            printf("nueve.\n");
            break;
        default:
            printf("El caracter introducido no es un dígito.\n");
            break;
    }

    printf("El valor de b es de %d\n",b);

    return 0;
}
