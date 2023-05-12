# Datos y variables

En los lenguajes de programación existe el concepto de variable, una variable
almacena los datos sobre los cuales esta operando el programa. Un ejemplo de esto
sería el siguiente:

```cpp
#include <iostream>

int main(){
	int x = 20;
	std::cout << x;
	return 0;
}

```

En este caso hablamos de la variable x como una variable ```tipada``` , note que el tipo es int en el ejemplo significa que la variable es de tipo entero, la expresión:
```cpp
int x = 0;
```
Se denomina inicialización de la variable.
Según la variable, esta permite una serie de ```operaciones``` y posee ciertas ```propiedades```.
Estas pueden ser examinadas haciendo uso de palabras que cumplen funcionalidades específicas en
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
Debería obtener la siguiente salida en la terminal:

```bash
Mi dato es: 20
El tamano de mi dato es: 4
El identificador del dato es: i
```
La primera línea devuelve el dato que fue almacenado en la variable,
la segunda nos da el tamaño en bytes que ocupa el dato en memoria y
la tercera nos indica el nombre que recibe el tipo de dato de la variable
(este puede cambiar según el compilador y arquitectura por lo que si no se
usa gcc se deben revisar los implementation defined behaviours).

Como puede observar, la declaración de una variable inicia por su tipo seguido
del nombre que asignamos para la variable, sin embargo al hacer uso de variables
también se puede modificar su comportamiento con modificadores:

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
La salida esperada para este código es la siguiente:\

```bash
Mi dato es: 20
El tamano de mi dato es: 2
El identificador del dato es: s
```
Note que cambiaron los valores para el identificador y el tamaño del dato.
En particular ahora la variable ocupa 16 bits o 2 bytes. O
Otro modificador importante es la palabra ```const`` , esta delimita que la inicialización
de la variable debe ser inmediata y solo se permite inicializar la variable
una única vez, es decir la siguiente expresión:

```cpp
const int x = 20;
x = 20;
```
Corresponde a una expresión inválida debido a que solo se puede inicializar la
variable una única vez.

# Caracteres y cadenas de caracteres

Los textos en c++ pueden ser representados utilizando datos del tipo
char y string, por razones de simplicidad no se debe preocupar x los chars
en este momento estos serán tratados a profundidad cuando se explique el
concepto de arreglo, lo que si se denotará es la siguiente notación:


```cpp

std::string miCadena = "Mi cadena";
char misCaracteres = 'Mis caracteres';
```
Note que el dato string se declara con "" y los char con '', esta distinción es
importante. En particular los char no son lo mismo que los strings.
