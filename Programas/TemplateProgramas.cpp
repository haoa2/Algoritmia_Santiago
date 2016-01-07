/*
    Generador de Template para programas de la Materia de Algoritmia

    Humberto Alejandro Ortega Alcocer <humbertwoody@gmail.com>
    2015
*/
#include <iostream>
#include <fstream>

int main()
{
    std::string nombre, titulo, descripcion, email, file;

    std::cout << "Template de Programa para Algoritmia." << std::endl << std::endl;

    std::cout << "Introduce el nombre del archivo (sin espacios): ";
    std::getline(std::cin, file);
    std::cout << "Introduce tu nombre completo: ";
    std::getline(std::cin, nombre);
    std::cout << "Introduce tu email: ";
    std::getline(std::cin, email);
    std::cout << "Introduce el título del programa: ";
    std::getline(std::cin, titulo);
    std::cout << "Introduce la descripcion del programa: ";
    std::getline(std::cin, descripcion);
 
    
    std::ofstream fout(file.c_str());

    if(!fout)
    {
        std::cout << "Ocurrió un error al tratar de abrir el archivo. Intenta de nuevo más tarde." << std::endl;
        return -1;
    }

    fout << "/*" << std::endl;
    fout << "   " << titulo << std::endl << std::endl;
    fout << "   " << descripcion << std::endl << std::endl;
    fout << "   " << nombre << " <" << email << ">" << std::endl;
    fout << "   " << 2015 << std::endl;
    fout << "*/" << std::endl;
    fout << "\n// Cabeceras (Quita el comentario en las que necesites).\n";
    fout << "#include <stdio.h>" << std::endl;
    fout << "//#include <stdlib.h>" << std::endl;
    fout << "//#include <string.h>" << std::endl;
    fout << "//#include <math.h>" << std::endl;
    fout << "//#include <time.h>" << std::endl << std::endl;
    fout << "// Constantes (Quita el comentario de las pre-definidas que necesites)." << std::endl;
    fout << "//#define MAX_BUFFER 1024" << std::endl;
    fout << "//#define VERBOSE false" << std::endl;
    fout << "// Constantes Por Default." << std::endl;
    fout << "#define false 0" << std::endl;
    fout << "#define true 1" << std::endl << std::endl;
    fout << "// Prototipos de Funciones" << std::endl << std::endl;
    fout << "// Función Principal." << std::endl;
    fout << "int main(int argc, char *argv[])" << std::endl;
    fout << "{" << std::endl;
    fout << "    printf(\"\\t\\t" << titulo << "\\n\");" << std::endl;
    fout << "    // ..." << std::endl;
    fout << "    printf(\"Fin del Programa\\n\");" << std::endl;
    fout << "    return 0; // Fin del Programa con estado 0." << std::endl;
    fout << "}" << std::endl << std::endl;
    fout << "// Implementación de Funciones" << std::endl << std::endl << std::endl;
    fout << "// Fin del Código" << std::endl;
    fout << "/* Template Creado por Humberto Alejandro Ortega Alcocer <humbertowoody@gmail.com> */";
    
    std::cout << "Se ha finalizado la creación de " << file << ". " << std::endl;
    return 0;
}
