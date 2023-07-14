#include <iostream>
#include "ejemplo.hpp"

int main(){
	std::cout << "Referencia de foo: " << (void*)&ejemplo::foo << std::endl;
	return 0;
}
