#include "funciones.hpp"
#include <iostream>

int main(){
	int argForFactorial = 5;
	std::cout << "Valor de 5 factorial." << std::endl;
	std::cout << ejemplo::factorial(argForFactorial) << std::endl;
	return 0;
}
