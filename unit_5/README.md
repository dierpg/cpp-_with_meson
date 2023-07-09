# Introduccion a las funciones

Las funciones son un concepto fundamental para realizar tareas
en cualquier lenguaje de programación, cpp no es excepción. En
este caso particular se deben mencionar algunos detalles, con
el objetivo de hacer uso de esta característica del lenguaje
de manera efectiva.

Por cuestiones de simplicidad se limitará a ver las funciones
en esta unidad como funciones que devuelven datos y funciones
que no devuelven datos, la razón detras de esto esta dada por
características que serán expuestas en la siguiente unidad
(especificamente sobre el uso de memoría y referencias).


# Archivos de encabezado

Al definir funciones en un archivo de encabezado
(archivos con nomenclatura hpp, cc) es buena práctica
definir un ```alcance``` es decir sobre que ```namespace```
esta definida esta función, esto es necesario para
evitar problemas a la hora de usar funciones con
el mismo nombre, es decir para lograr que
el compilador distinga entre distintas funciones
con el mismo nombre.


```cpp

namespace ejemplo {


}

```

En este caso las funciones definidas en ```ejemplo```
tienen un alcance dentro de ese ```namespace```. En el
caso de que se quiera hacer uso de funciones definidas
en el ```namespace``` se debe hacer uso de la siguiente sintaxis
```cpp

ejemplo::funcion_a_llamar

```
Esta notación recibe el nombre de ```namespace scope``` [[1]](1).


# Sintaxis básica

La estructura para declarar una función en cpp
es ```tipo de retorno``` ```nombre de función```
```argumentos dentro de parentesis```. A
continuacián se presenta un ejemplo de función
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
, lo que quiere decir que la función no retorna ningún
valor. Note que esta función no posee ningún argumento.
A continuación se presenta un ejemplo de una función que
toma dos argumentos y retorna un argumento, asuma que la
función anterior se encuentra en el ```namespace```
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
Se recomienda al lector revisar las diferencias
entre ```inline``` y las funciones normales a
nivel de ejecucion [[2]](2).

# Funciones recursivas

Una funcion recursiva esta definido usando la misma funcion
como parte de su definicion, esto permite que se pueda replicar
el comportamiento de los ciclos mediante el uso de funciones
recursivas. Sin embargo estas normalmente no especifican el
numero de veces que se ejecuta dicha funcion por ejemplo:

```cpp
int factorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}
```
Algunas de las ventajas sobre este estilo a la hora de programar
es que el codigo recursivo puede resultar en menos lineas de codigo.
Sin embargo esto no necesariamente es una ventaja, ya que esto depende
de la aplicacion.

Se recomienda al lector revisar [[3]](3).


# Referencias

<a id="1">[1]</a>
A tour of c++, Second Edition Bjourne Stroustrup

<a id="2">[2]</a>
https://en.cppreference.com/w/cpp/language/inline

<a id="3">[3][/a]
High-Level Synthesis Made Eazy, Benjamin Carrion Schaefer.
Page 37.
