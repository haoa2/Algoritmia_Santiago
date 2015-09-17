/*
    Programa 10

    Uso de Switch

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com
    2015
*/
#include <stdio.h>

int main()
{
    int a;
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
            printf("uno.\n");
            break;
        case 2:
            printf("dos.\n");
            break;
        case 3:
            printf("tres.\n");
            break;
        case 4:
            printf("cuatro.\n");
            break;
        case 5:
            printf("cinco.\n");
            break;
        case 6:
            printf("seis.\n");
            break;
        case 7:
            printf("siete.\n");
            break;
        case 8:
            printf("ocho.\n");
            break;
        case 9:
            printf("nueve.\n");
            break;
        default:
            printf("El caracter introducido no es un dígito.\n");
            break;
    }
    return 0;
}
