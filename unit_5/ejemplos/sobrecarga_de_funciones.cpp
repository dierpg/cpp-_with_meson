#include "funciones.hpp"
#include <iostream>

int main(){
	int salidaInt = 0;
	float salidaFloat = 0.0;
	ejemplo::helloWorld();
	std::cout << "Valor de salidaInt antes de suma." << std::endl;
	std::cout << salidaInt << std::endl;
	salidaInt = ejemplo::suma(1,1);
	std::cout << "Valor de salidaInt despues de suma." << std::endl;
	std::cout << salidaInt << std::endl;
	std::cout << "Valor de salidaFloat antes de suma" << std::endl;
	std::cout << salidaFloat << std::endl;
	std::cout << "Valor de salidaFloat despues de suma" << std::endl;
	float a1 = 0.1;
	float a2 = 0.2;
	salidaFloat = ejemplo::suma(a1,a2);
	std::cout << salidaFloat << std::endl;
	return 0;
}
