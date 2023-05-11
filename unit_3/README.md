# Datos y variables

En los lenguajes de programacion existe el concepto de variable, una variable
almacena los datos sobre los cuales esta operando el programa, un ejemplo de esto
seria el siguiente:

```cpp
#include <iostream>

int main(){
	int x = 20;
	std::cout << x;
	return 0;
}

```

En este caso hablamos de la variable x como una variable ```tipada``` note que el tipo es int que
en este caso significa que la variable es de tipo entero, la expresion
```cpp
int x = 0;
```
se denomina inicializacion de la variable.
Segun la variable esta permite una serie de ```operaciones``` y posee ciertas ```propiedades```.
Estas pueden ser examinadas haciendo uso de palabras que cumplen funcionalidades especificas en
el lenguaje:

```cpp

#include <iostream>
#include <string>
#include <typeinfo>

int main(){
	int x = 20;
	std::cout << x << std::endl;
	// Tamaño en bytes de la variable
	std::cout << sizeof(x) << std::endl;
	// Identificador del tipo
	std::cout << typeid(x).name <<std::endl;
	return 0;
}

```
Deberia obtener la siguiente salida en la terminal:

```bash
20
4
i
```
La primera linea devuelve el dato que fue almacenado en la variable,
la segunda nos da el tamaño en bytes que ocupa el dato en memoria y
la tercera nos indica el nombre que recibe el tipo de dato de la variable
(este puede cambiar segun el compilador y arquitectura por lo que si no se
usa gcc se deben revisar los implementation defined behaviours).
