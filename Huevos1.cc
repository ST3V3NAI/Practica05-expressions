#include <iostream>

int main() {
    int cantidadHuevos;
    int huevosPorCaja = 12; // Supongamos que cada caja tiene 12 huevos

    // Solicitar al usuario que ingrese la cantidad de huevos
    std::cout << "Huevos? ";
    std::cin >> cantidadHuevos;

    // Calcular el número de cajas y los huevos sobrantes
    int cajasCompletas = cantidadHuevos / huevosPorCaja;
    int huevosSobrantes = cantidadHuevos % huevosPorCaja;

    // Mostrar el resultado
    std::cout << "Con " << cantidadHuevos << " huevos se pueden llenar " << cajasCompletas << " cajas y sobran " << huevosSobrantes << " huevos." << std::endl;

    return 0;
}

