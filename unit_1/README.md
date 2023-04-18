# Flujo de trabajo en un lenguaje compilado

C++ es un lenguaje de alto nivel, compilado de tipado estatico fuerte, si estas comenzando en las ciencias de la computacion todo
esto te puede sonar como palabreria asi que ¿que significa realmente todo esto?.

En este curso encontrara la respuesta a esta pregunta y muchas otras cosa, empecemos con alto nivel lo que esteo significa es que el lenguaje
es independiente de la arquitectura del computador en el que se ejecute.

Para generar un ejecutable hay una serie de pasos y software que es requerido, en terminos general el proceso es el siguiente:

```mermaid
graph TD;
    escribir_codido-->compilar_codigo;
		compilar_codigo-->es_el_codigo_correcto?;
		es_el_codigo_correcto?-->si;
		es_el_codigo_correcto?-->no;
		si-->tienes_un_ejecutable;
		no-->arreglar_errorres;
		arreglar_errorres-->compilar_codigo;
```

Para hacer esto posible se requiere de software especial, para propositos de esta seccion
hablaremos del linker y el compilador.

# Que es un compilador

Segun laplante "The compiler bridges the semantic gap between the
high-level program that the user requires to be executed
and the low-level instructions that a computer can understand" [[1]](1) en otras palabras el compilador
"traduce" el codigo a uina arquitectura especifica (que en este caso es x86), el compilador a utilizar en este curso es gcc.
s
# Instalando gcc

Asumiendo que se esta usando ubuntu (es un requisito), se deben ejecutar los siguientes comandos en la terminal en orden.
```bash
sudo apt-get update && sudo apt-get upgrade
sudo apt-get install gcc g++
```
Si encuentras problemas en la instalacion se le aconseja leer la salida de la termina, esta le dara pistas si esto no funciona.
# Nuestro primer programa

En esta carpeta cree una nueva carpeta llamada test (esta carpeta sera ignorada por git), dentro cree
un archivo llamado main.cpp (lo usual es llamar main al punto de entrada principal de nuestro programa),
el codigo en c++ se encuentra en archivos con la siguiente nomenclatura .ccp y .hpp el segundo se refiere a archivos de fichero (aqui es donde normalmente se definen las bibliotecas), por ahora escriba
lo siguiente en el archivo.
```cpp
#include <iostream>

int main(){
	std::cout << "Hello world"!;
	return 0;
}
```
Despues de esto ejecute lo siguiente en la terminal.
```bash
g++ main.cpp -o main
ls -lah
```
Notara que aparece un nuevo archivo dentro de la carpeta que es el ejecutable correspondiente al programa, tambien preste atencion a la primera columna de las letras esto corresponde a las operaciones permitidas para el archivo puede encontrar mas sobre esto aqui [[2]](2), ahora escriba lo siguiente en la terminal.
```bash
./main
```
Deberia obtener la siguiente salida "Hello World", preste atencion
a la primera linea del codigo tiene lo siguiente
```#include <iostream>``` con esto lo que querimos decir es que hacemos una llamada al header iostream de la biblioteca estandar de c++.
# Primer archivo de ficheros.
Ahora cree un archivo llamado myheader.hpp y escriba lo siguiente en el
```cpp
#include <iostream>

void hello(){
	std::cout << "Hello me" << std::endl;
	return;
}
```
Ahora agregue esto en el archivo main.cpp, de manera que se vea de la siguiente manera.
```cpp
#include <iostream>
#include "myheader.hpp"

int main(){
	std::cout << "Hello world" << std::endl;
	hello();
	return 0;
}
```
Ahora en la terminal escriba lo siguiente:
```bash
g++ main.cpp myheader.hpp -o main
./main
```

Debio obtener la siguiente salida:
```
Hello world
Hello me
```
Lo anterior es el proceso por el cual se añade un header file al proceso de compilacion (al escribir header files se deben tomar en cuenta los header guards pero por razones de simplicidad este tema se tocara en el futuro.).

## Referencias
<a id="1">[1]</a>
Philllip A. Laplante
Enciclopedia of Computer Science and Technology Second Edition Volume I, p233.

<a id="2">[2]</a>
https://www.guru99.com/file-permissions.html .
