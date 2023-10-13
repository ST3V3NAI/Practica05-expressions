#include <iostream>

int main() {
    int a = 7;
    int b = 3;

    // Operadores aritméticos
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
    std::cout << a << " - " << b << " = " << (a - b) << std::endl;
    std::cout << a << " * " << b << " = " << (a * b) << std::endl;
    std::cout << a << " / " << b << " = " << (a / b) << std::endl;
    std::cout << a << " % " << b << " = " << (a % b) << std::endl;

    // Operadores de comparación
    std::cout << a << " == " << b << " is " << (a == b) << std::endl;
    std::cout << a << " != " << b << " is " << (a != b) << std::endl;
    std::cout << a << " < " << b << " is " << (a < b) << std::endl;
    std::cout << a << " > " << b << " is " << (a > b) << std::endl;
    std::cout << a << " <= " << b << " is " << (a <= b) << std::endl;
    std::cout << a << " >= " << b << " is " << (a >= b) << std::endl;

    return 0;
}

