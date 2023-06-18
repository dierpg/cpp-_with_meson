#include <iostream>

namespace ejemplo {
	void helloWorld(){
    std::cout << "Hello World!" << std::endl;
    return;
	}
	int suma(int a, int b){
		return a + b;
	}
	float suma(float a, float b){
		return a + b;
	}
	inline void inlineHelloWorld(){
	  std::cout << "Hello inline!" << std::endl;
    return;
	}
	void noInlineHelloWorld(){
		std::cout << "Hello inline!" << std::endl;
    return;
	}

	int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: multiply n by factorial of (n-1)
    else {
        return n * factorial(n - 1);
    }
}
}
