#include <iostream>

int main() {
    int segundos;

    // Solicitar al usuario que ingrese el número de segundos
    std::cout << "Por favor, ingrese un número de segundos: ";
    std::cin >> segundos;

    // Calcular el número de horas enteras
    int horas = segundos / 3600;

    // Mostrar el resultado
    std::cout << segundos << " segundos contienen " << horas << " horas enteras." << std::endl;

    return 0;
}

