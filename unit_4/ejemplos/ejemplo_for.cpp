#include <iostream>
#include <string>

int main(){
	int forLimit = 5;
	// int i = 0 corresponde a nuestra expresion inicial
	// i < forLimit corresponde a la condicion de finalizacion
	// i++ corresponde a la expresion de actualizacion
	for(int i = 0; i<forLimit; i++){
		std::cout << i << std::endl;
	}
	return 0;
}
