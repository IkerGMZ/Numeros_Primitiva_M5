// Numeros_Primitiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "Primitiva_Header.h"

int main()
{
    // Generar números de la primitiva
    std::vector<int> numeros = generarNumerosPrimitiva();

    // Mostrar los números generados
    std::cout << "Numeros de la Primitiva:" << std::endl;
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Generar reintegro
    int reintegro = generarReintegro();
    std::cout << "Reintegro: " << reintegro << std::endl;

    return 0;
}
