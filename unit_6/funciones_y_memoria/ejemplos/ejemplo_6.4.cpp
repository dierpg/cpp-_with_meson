#include <iostream>
#include "ejemplo.hpp"

int main(){
	int valor = 1;
	std::cout << "Dato en valor : " << valor << std::endl;

	std::cout << "Dato obtenido al llamar a pasarPorValor: " << ejemplo::pasarPorValor(valor) << std::endl;

	std::cout << "Dato de valor despues de la llamada de pasarPorValor: " << valor << std::endl;

	ejemplo::pasarPorReferencia(valor);

	std::cout << "Dato de valor despues de llamada a pasarPorReferencia: " << valor << std::endl;
	return 0;
}
