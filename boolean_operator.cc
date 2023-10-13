#include <iostream>

int main() {
    bool a, b;

    std::cout << "Tabla de verdad de los operadores lógicos (AND, OR, NOT):" << std::endl;
    std::cout << "=============================================" << std::endl;

    for (a = true; a >= false; a = !a) {
        for (b = true; b >= false; b = !b) {
            // Operador AND
            std::cout << a << " && " << b << " = " << (a && b) << std::endl;

            // Operador OR
            std::cout << a << " || " << b << " = " << (a || b) << std::endl;

            // Operador NOT
            std::cout << "!" << a << " = " << !a << std::endl;
            std::cout << "!" << b << " = " << !b << std::endl;

            std::cout << "---------------------------------------------" << std::endl;
        }
    }

    return 0;
}

