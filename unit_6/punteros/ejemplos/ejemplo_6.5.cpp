#include <iostream>

int main(){
	int value = 0;
	int* p = &value;
	std::cout << "Valor de value: " << value << std::endl;

	std::cout <<"Direccion de value: " << &value << std::endl;

	std::cout << "Valor de p: " << p << std::endl;

	std::cout << "Valor de *p: " << *p << std::endl;

	return 0;
}
