#include <iostream>
#include <string>
int main(){

	std::string message;
	bool flag = true;
	flag ? message = "verdadero" : message = "falso";
	std::cout << message << std::endl;
	return 0;
}
