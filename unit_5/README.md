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





# Referencias


<a id="1">[1]</a>
A tour of c++, Second Edition Bjourne Stroustrup
