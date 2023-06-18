# Introduccion a las funciones

Las funciones son un concepto fundamental para realizar tareas
en cualquier lenguaje de programacion cpp no es excepcion. En
este caso particular se deben mencionar algunos detalles, con
el objetivo de hacer uso de esta caracteristica del lenguaje
de manera efectiva.

Por cuestiones de simplicidad se limitara a ver las funciones
en esta unidad como funciones que devuelven datos y funciones
que no devuelven datos, la razon detras de esto esta dada por
caracteristicas que seran expuestas en la siguiente unidad
(especificamente sobre el uso de memoria y referencias).


# Archivos de encabezado

Al definir funciones en un archivo de encabezado
(archivos con nomenclatura hpp, cc) es buena practica
definir un ```alcance``` es decir sobre que ```namespace```
esta definida esta funcion, esto es necesario para
evitar problemas a la hora de usar funciones con
el mismo nombre, esto es necesario para lograr que
el compilador distinga entre distintas funciones
con el mismo nombre.


```cpp

namespace ejemplo {


}

```

En este caso las funciones definidas en ```ejemplo```
tienen un alcance dentro de ese ```namespace```, en el
caso de que se quiera hacer uso de funciones definidas
en el se debe hacer uso de la siguiente sintaxis
```cpp

ejemplo::funcion_a_llamar

```
Esta notacion recibe el nombre de ```namespace scope``` [[1]](1).


# Sintaxis basica

La estructura para declarar una funcion en cpp
es ```tipo de retorno``` ```nombre de funcion```
```argumentos dentro de parentesis``` a
continuacion se presenta un ejemplo de funcion
que no retorna ningun valor.

```cpp
#include <iostream>

namespace ejemplo {
	void helloWorld(){
    std::cout << "Hello World!" << std::endl;
    return;
	}
}
```
En este caso nuestro tipo de retorno es ```void```
lo que quiere decir que la funcion no retorna ningun
valor. Note que esta funcion no posee ningun argumento,
a continuacion se presenta un ejemplo de una funcion que
toma dos argumentos y retorna un argumento, asuma que la
funcion anterior se encuentra en el ```namespace```
ejemplo:

```cpp
int suma(int a, int b){
	return a + b;
}
```

# Sobrecarga de funciones
En el ejemplo anterior la funcion suma, posee dos
argumentos. Note que el tipo de asignado a los
argumentos es ```int``` es decir entero.

Es decir en el caso de que se quiera realizar una
suma con numeros no enteros, la funcion no se podria
utilizar. A continuacion se define una suma para
numeros usando el tipo float:

```cpp
float suma(float a, float b){
	return a + b;
}
```
En el archivo funciones de la carpeta librerias encontrara un
archivo header que contiene dos definiciones para ```suma```,
a esta capacidad de para definir dos objetos dentro del mismo
namespace se le conoce como sobrecarga de funciones.
Es importante recordar que se deben repetar los tipos de los
argumentos es decir si se pasa por ejemplo un dato de tipo ```int```
y otro de tipo ```double``` esto resultara en un error a la hora
de compilar.

# inline functions
En c++ existen distintas formas de declarar funciones, se debe
destacar lo que se conoce como ```inline functions```.
A continuacion se presenta un ejemplo:
```cpp
	inline void inlineHelloWorld(){
	  std::cout << "Hello inline!" << std::endl;
    return;
	}
```

# Referencias

<a id="1">[1]</a>
A tour of c++, Second Edition Bjourne Stroustrup

<a id="2">[2]</a>
https://en.cppreference.com/w/cpp/language/inline
