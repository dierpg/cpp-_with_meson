# Introduccion
El simbolo ```&``` no solo es utilizado en c++ para obtener una direccion
de memoria, este tambien es utilizado para declaraciones de tipo.
Esta caracteristica tiene distintos usos, para este caso en especifico
se detallara su uso en el caso de las funciones.

# Pasar por valor
Considere el siguiente codigo:
```cpp
#include <iostream>
#include "ejemplo.hpp"

int main(){
	int valor = 1;
	std::cout << "Dato de valor :" << valor << std::endl;

	std::cout << "Dato obtenido al llamar a pasarPorValor: " << ejemplo::pasarPorValor(valor) << std::endl;

	std::cout << "Dato de valor despues de la llamada de pasarPorValor: " << valor << std::endl;
	return 0;
}
```
La salida esperada es:
```
Dato en valor : 1
Dato obtenido al llamar a pasarPorValor: 3
Dato de valor despues de la llamada de pasarPorValor: 1
```

Como puede notar el dato en la variable no cambia, esto significa que dentro
de la funcion existe una copia de la variable independiente de las variables
en main.

# Pasar por referencia

Considere el siguiente codigo en ejemplo_6.4:

```cpp
#include <iostream>
#include "ejemplo.hpp"

int main(){
	int valor = 1;
	std::cout << "Dato en valor :" << valor <<std::endl;

	std::cout << "Dato obtenido al llamar a pasarPorValor: " << ejemplo::pasarPorValor(valor) << std::endl;

	std::cout << "Dato de valor despues de la llamada de pasarPorValor: " << valor << std::endl;

	ejemplo::pasarPorReferencia(valor);

	std::cout << "Dato de valor despues de llamada a pasarPorReferencia: " << valor << std::endl;
	return 0;
}

```
Con salida:

```
Dato en valor : 1
Dato obtenido al llamar a pasarPorValor: 3
Dato de valor despues de la llamada de pasarPorValor: 1
Dato de valor despues de llamada a pasarPorReferencia: 2
```
Si se examina el codigo de la libreria se encontrara lo siguiente:

```cpp

namespace ejemplo {
	int pasarPorValor(int arg){
		arg += 2;
		return arg;
	}
	void pasarPorReferencia(int& p){
		p = 2;
		return;
	}

}
```
Note que los tipos cambian para ambas funciones,
en el caso de pasarPorReferencia se hace uso de el tipo
referencia a un entero, esto permite que esta funcion
comparta la direcccion de memoria de este argumento
con su direccion en main, de esta forma los cambios
en main se ven reflejados en la variable dentro main
evitando una duplicacion de variables.

Si se requiere compartir la informacion sin modificarla
es buena practica hacer del argumento pasado por referencia
una constante de la siguiente manera:
```cpp
void pasarPorReferencia(const int& a){

}
```
