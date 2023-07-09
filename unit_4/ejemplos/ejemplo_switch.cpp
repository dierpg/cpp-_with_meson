#include <iostream>
#include <string>

int main(){

	std::string message;

	int arg = 0;

	switch(arg){
		case 1:
			message = "1";
			break;
		case 2:
			message = "2";
			break;
		default:
			message = "default";
	}
	std::cout << message << std::endl;
	return 0;
}
