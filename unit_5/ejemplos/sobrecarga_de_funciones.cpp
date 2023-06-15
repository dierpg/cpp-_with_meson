#include "funciones.hpp"
#include <iostream>

int main(){
	int salidaInt = 0;
	float salidafloat = 0.0;
	ejemplo::helloWorld();
	std::cout << "Valor de salidaInt antes de suma." << std::endl;
	std::cout << salidaInt << std::endl;
	salida = ejemplo::suma(1,1);
	std::cout << "Valor de salidaInt despues de suma." << std::endl;
	std::cout << salidaInt << std::endl;
	std::cout << "Valor de salidaDouble antes de suma" << std::endl;
	std::cout << salidaDouble << std::endl;
	std::cout << "Valor de salidaDouble despues de suma" << std::endl;
	salidaFloat = ejemplo::suma(0.1,1.0);
	std::cout << salidaDouble << std::endl;
}
