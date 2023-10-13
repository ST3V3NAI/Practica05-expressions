#include <iostream>

int main() {
    char letraMinuscula;

    // Solicitar al usuario que ingrese una letra minúscula
    std::cout << "Por favor, ingrese una letra minúscula: ";
    std::cin >> letraMinuscula;

    // Verificar si la entrada es una letra minúscula válida
    if (letraMinuscula >= 'a' && letraMinuscula <= 'z') {
        // Convertir a mayúscula restando 32 al valor ASCII
        char letraMayuscula = letraMinuscula - 32;

        // Mostrar la letra mayúscula
        std::cout << "La letra mayúscula correspondiente es: " << letraMayuscula << std::endl;
    } else {
        std::cout << "No ingresaste una letra minúscula válida." << std::endl;
    }

    return 0;
}

