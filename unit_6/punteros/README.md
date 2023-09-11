# Introduccion
En su forma mas sencilla, un puntero es una variable
que almacena la direccion de memoria de otra variable.

Considere el siguiente ejemplo_6.5:

```cpp
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

```
Con la siguiente salida:

```
Valor de value: 0
Direccion de value:0x7ffca78ae16c
Valor de p: 0x7ffca78ae16c
Valor de *p: 0
```

Preste atencion a la ultima linea en la que el simbolo ```*```
es utilizado para acceder al valor de value. A esto se le
conoce como desreferenciado de punteros.
En primera instancia se puede pensar que una referencia y un puntero
son lo mismo, sin embargo esto puede llevar a confuciones a continuacion
se denotan las diferencias mas comunes entre estas:

1. Las referencias deben ser inicializadas al declararse,
los punteros no.

2. La referencia da el valor de la variable implicitamente,
el puntero requiere de desreferenciamiento.

3. Una vez asignada la direccion en la referencia esta no puede cambiar,
los punteros pueden cambiar sus direcciones durante la ejecucion del
programa.
