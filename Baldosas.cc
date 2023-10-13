#include <iostream>

int main() {
    double largo, ancho;
    const double tamanoBaldosa = 0.6; // Tamaño de la baldosa en metros

    // Solicitar al usuario que ingrese las dimensiones de la habitación
    std::cout << "Largo? ";
    std::cin >> largo;

    std::cout << "Ancho? ";
    std::cin >> ancho;

    // Calcular el área de la habitación
    double areaHabitacion = largo * ancho;

    // Calcular cuántas baldosas enteras se necesitan
    int baldosasEnteras = static_cast<int>(areaHabitacion / (tamanoBaldosa * tamanoBaldosa));

    // Mostrar el resultado
    std::cout << "La habitación tendrá " << baldosasEnteras << " baldosas enteras." << std::endl;

    return 0;
}

