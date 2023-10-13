#include <iostream>

int main() {
    char letraMayuscula, letraMinuscula;

    // Solicitar al usuario que ingrese una letra mayúscula
    std::cout << "Por favor, ingrese una letra mayúscula: ";
    std::cin >> letraMayuscula;

    // Verificar si la entrada es una letra mayúscula
    if (letraMayuscula >= 'A' && letraMayuscula <= 'Z') {
        // Calcular la letra minúscula correspondiente
        letraMinuscula = letraMayuscula + ('a' - 'A');

        // Mostrar la letra minúscula
        std::cout << "La letra minúscula correspondiente es: " << letraMinuscula << std::endl;
    } else {
        std::cout << "No ingresaste una letra mayúscula válida." << std::endl;
    }

    return 0;
}

