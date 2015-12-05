/*
    Cambios Base

    Programa que cambia cualquier número base 10 (Decimal) a base n (n > 0).

    Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com>
    2015
*/
#include <iostream>
/* No es necesario incluir string, viene en iostream */

std::string  cambio_base(int n, int b)
{
    const std::string posibilidades = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string res;
    
    while(n >= b)
    {
        res.insert(0,1,posibilidades[n%b]);
        n = n/b;
    }

    if(n > 0)
    {
        res.insert(0,1,posibilidades[n]);
    }

    return res;
}

int main()
{
    int n, base;

    std::cout << "Introduce el número en Decimal: ";
    std::cin >> n;
    std::cout << "Introduce la base a la cual quieres cambiarlo: ";
    std::cin >> base;

    std::cout << "El valor " << n << " base " << base << " es: " << cambio_base(n,base) << std::endl;

    return 0;
}
