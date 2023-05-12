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
	std::string miTipoDeDato;
	std::string tamanoDeDato = "El tamano de mi dato es: ";
	tamanoDeDato.append(std::to_string(sizeof(x)));
	std::cout << "Mi dato es: "+std::to_string(x) << std::endl;
	// Tamaño en bytes de la variable
	std::cout << tamanoDeDato << std::endl;
	// Identificador del tipo
	miTipoDeDato.assign(1, *typeid(x).name());
	std::cout << "El identificador del dato es: "+miTipoDeDato << std::endl;
	return 0;
}

```
Deberia obtener la siguiente salida en la terminal:

```bash
Mi dato es: 20
El tamano de mi dato es: 4
El identificador del dato es: i
```
La primera linea devuelve el dato que fue almacenado en la variable,
la segunda nos da el tamaño en bytes que ocupa el dato en memoria y
la tercera nos indica el nombre que recibe el tipo de dato de la variable
(este puede cambiar segun el compilador y arquitectura por lo que si no se
usa gcc se deben revisar los implementation defined behaviours).

Como puede observar la declaracion de una variable inicia por su tipo seguido
del nombre que asignamos para la variable, sin embargo al hacer uso de variables
tambien se puede modificar su comportamiento con modificadores:

```cpp
#include <iostream>
#include <string>
#include <typeinfo>

int main(){
	short int x = 20;
	std::string miTipoDeDato;
	std::string tamanoDeDato = "El tamano de mi dato es: ";
	tamanoDeDato.append(std::to_string(sizeof(x)));
	std::cout << "Mi dato es: "+std::to_string(x) << std::endl;
	// Tamaño en bytes de la variable
	std::cout << tamanoDeDato << std::endl;
	// Identificador del tipo
	miTipoDeDato.assign(1, *typeid(x).name());
	std::cout << "El identificador del dato es: "+miTipoDeDato << std::endl;
	return 0;
}
```
La salida esperada para este codigo es la siguiente:\

```bash
Mi dato es: 20
El tamano de mi dato es: 2
El identificador del dato es: s
```
Note que cambiaron los valores para el identificador y el tamaño del dato
en particular ahora la variable ocupa 16 bits o 2 bytes, otro modificador
importante es la palabra ```const`` esta delimita que la inicializacion
de la variable debe ser inmediata y solo se permite inicializar la variable
una unica vez es decir la siguiente expresion:

```cpp
const int x = 20;
x = 20;
```
Corresponde a una expresion invalida debido a que solo se puede inicializar la
variable una unica vez.

# Caracteres y cadenas de caracteres

Los textos en c++ pueden ser representados utilizando datos del tipo
char y string, por razones de simplicidad no se debe preocupar x los chars
en este momento estos seran tratados a profundidad cuando se explique el
concepto de arreglo, lo que si se denotara es la siguiente notacion:


```cpp

std::string miCadena = "Mi cadena";
char misCaracteres = 'Mis caracteres';
```
Note que el dato string se declara con "" y los char con '', esta distincion es
importante en particular los char no son lo mismo que los strings.
