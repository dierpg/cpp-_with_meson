#include <iostream>

int main(){
	bool flag = false;

	if(!flag){
		std::cout << "Me ejecuto cuando flag es falso." << std::endl;
	}

	if(flag!=true){
		std::cout << "Me ejecuando cuando flag es falso." << std::endl;
	}

	if(flag==false){
		std::cout << "Me ejecuto cuando flag es falso." << std::endl;
	}

	return 0;
}
