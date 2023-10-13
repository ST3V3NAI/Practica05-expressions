/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica
*
* @author Steven Abolaji Ibidokun
* @date Oct 12th 2023
* @brief Integer divison and remainder of two natural numbers
*
* This program displays the integer division and remainder of two natural numbers
*
* @see https://www.learncpp.com/cpp-tutorial/chars/
*/


#include <iostream>

 int main () {

 int dividendo{0}, divisor{0};

 std::cin >> dividendo;
 if (dividendo < 0) {return 1;}
 std::cin >> divisor;
 if (divisor< 0) {return 1;}

 int cociente = dividendo / divisor;
 int resto = dividendo % divisor;

 std::cout << cociente << " " << resto << std::endl;;

 return 0;
}
