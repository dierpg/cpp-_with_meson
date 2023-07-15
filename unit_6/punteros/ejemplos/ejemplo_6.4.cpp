#include <iostream>

int main(){
	int var = 0;
	int* p = &var;

	std::cout << "Valor de var: " << var << std::endl;
	std::cout << "Valor de *p: " << *p <<std::endl;
	*p = 1;
	std::cout << "Valor de *p: " << *p <<std::endl;
	std::cout << "Valor final de var: " << var << std::endl;
	return 0;
}
