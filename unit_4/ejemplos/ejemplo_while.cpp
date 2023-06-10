
#include <iostream>
#include <string>

int main(){
	int conditionArg = 5;
	// Dato a cambiar dentro del while
	int i = 0;
	while(conditionArg==5){
		std::cout << iw << std::endl;
		i++;
		if(i==6){
			conditionArg--;
		}
	}
	std::cout << conditionArg << std::endl;

	return 0;
}
