# Introduccion
El uso de direcciones de memoria dentro del lenguaje c++ es fundamental
para el desarrollo de aplicaciones en este lenguaje, debido a esto
es necesario manipular y guardar direcciones de memoria.

La herramienta a utilizar para este objetivo es conocida como punteros,
a continuacion se explicaran algunos detalles de estos.

# Simbolo para punteros

El siguiente corresponde a un ejemplo de puntero:
```cpp
int* p;
```
Sin embargo esto corresponderia a un error, debido a que los punteros
deben ser inicializados al ser declarados, debido a esto el siguiente
codigo seria el correcto:

```cpp
int var = 0;
int* p = &var;
```
El puntero como tal es una variable que almacena sirve de sinonimo a
una direccion de memoria.

# Usando un puntero

Examine el siguiente ejemplo 6.4:

```cpp
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

```

Con salida:

```
Valor de var: 0
Valor de *p: 0
Valor de *p: 1
Valor final de var: 1
```
Note que *p quiere decir el valor al que apunta la direccion de memoria,
estamos usando p para con la sintaxis *p para cambiar el valor de var.

# Funciones y punteros

Para entender la utilidad de esto es necesario hacer uso de funciones,
considere el siguiente ejemplo de dos funciones en ejemplo.hpp:

```cpp
int pasarPorValor(int arg){
	arg += 2;
	return arg;
}

void pasarPorReferencia(int* p){
	*p += 2;
}
```
Haremos uso de estas en el ejemplo 6.5:

```cpp

```
