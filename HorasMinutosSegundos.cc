#include <iostream>

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número entero
    std::cout << "Por favor, ingrese un número entero: ";
    std::cin >> numero;

    int horas = numero / 10000;  // Obtener las horas
    int minutos = (numero % 10000) / 100;  // Obtener los minutos
    int segundos = numero % 100;  // Obtener los segundos

    // Mostrar la hora en el formato HH:MM:SS
    std::cout << horas << ":" << minutos << ":" << segundos << std::endl;

    return 0;
}

