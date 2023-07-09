#include <iostream>
#include <string>

int main(){
	int conditionArg = 0;
	do{
		std::cout << "Evaluando condicion" << std::endl;
		if(conditionArg==5){
			std::cout << "Condicion falsa." << std::endl;
		}
		std::cout << "Condicion cierta." << std::endl;
		// incremento de conditionArg
		conditionArg++;
	}while(conditionArg!=5);
	std::cout << conditionArg << std::endl;
	return 0;
}
