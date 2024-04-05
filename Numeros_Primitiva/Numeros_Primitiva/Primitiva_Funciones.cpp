#include <iostream>
#include <vector>
#include <cstdlib>
#include "Primitiva_Header.h"

std::vector<int> generarNumerosPrimitiva() {
    std::vector<int> numerosPrimitiva;

    // Inicializar generador de números aleatorios
    srand(time(nullptr));

    while (numerosPrimitiva.size() < 6) {
        int numero = rand() % 49 + 1; // Generar números entre 1 y 49

        // Verificar si el número ya está en el vector
        bool repetido = false;
        for (int num : numerosPrimitiva) {
            if (num == numero) {
                repetido = true;
                break;
            }
        }

        // Si no está repetido, añadirlo al vector
        if (!repetido) {
            numerosPrimitiva.push_back(numero);
        }
    }

    return numerosPrimitiva;
}

int generarReintegro() {
    return rand() % 10; // Generar reintegro entre 0 y 9
}