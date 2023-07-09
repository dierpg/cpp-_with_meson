# Estructuras de control

En términos generales cuando un programa se ejecuta se busca realizar
una serie de ```instrucciones``` en un orden particular, esto en la
literatura recibe el nombre de ```algoritmo```, sí el lector esta interesado
un tratamiento formal del tema puede ser encontrado en [[1]](1).

Esta unidad describirá lo que se conoce como estructuras de control,
estas son una pieza fundamental en la implementación de los algoritmos
para cualquier lenguaje de programación.

# Tipos de estructuras de control

Los tipos de estructuras de control pueden ser divididas en dos tipos
```selección``` y ```repetición```, su representación en el lenguaje
esta dada por palabras especiales que examineramos a continuacion.

# Estructuras de selección

## if

Considere el siguiente código:

```cpp

#include <iostream>

int main(){
	bool flag = false;

	if(flag){
		std::cout << "Me ejecuto cuando flag es verdadero." << std::endl;
	}
	return 0;
}

```
Este código no despliega ningun valor, sin embargo si el valor de flag
pasa de falso a verdadero su salida es la siguiente:

```bash
Me ejecuto cuando flag es verdadero.
```
El condicional if recibe el nombre de condicional y mueve la ejecución al contexto definido
entre los corchetes, sí la condición entre sus paréntesis.

```mermaid
graph TD;
    ejecucion_llega_al_if-->evaluacion_de_condicion;
		evaluacion_de_condicion-->ejecuto_lo_que_esta_dentro_de_corchetes;
		evaluacion_de_condicion-->continuo_la_ejecucion;
		ejecuto_lo_que_esta_dentro_de_corchetes-->continuo_la_ejecucion;
```

## if/else
El condicional if posee una versión extendida que se presenta a continuación:

```cpp

#include <iostream>

int main(){
	bool flag = false;

	if(flag){
		std::cout << "Me ejecuto cuando flag es verdadero." << std::endl;
	}else{
		std::cout << "Me ejecuando cuando flag es falso." << std::endl;
	}

	return 0;
}

```

```mermaid
graph TD;
    ejecucion_llega_al_if-->evaluacion_de_condicion;
		evaluacion_de_condicion-->ejecuto_lo_que_esta_dentro_de_corchetes_del_if;
		evaluacion_de_condicion-->ejecuto_lo_que_esta_dentro_de_corchetes_del_else;
		ejecuto_lo_que_esta_dentro_de_corchetes_del_if-->continuo_la_ejecucion;
		ejecuto_lo_que_esta_dentro_de_corchetes_del_else-->continuo_la_ejecucion;
```

Esta sintaxis es la habitual, sin embargo existen los conocidos como operadores
ternarios que cumplen una función similar al if pero se usan en la asignación
de valores a una variable, antes de mostrar un ejemplo de esto se presentarán
algunos de los operadores necesarios para construir expresiones lógicas (una descripción exhaustiva de los operadores disponibles para expresiones lógicas puede ser consultado en [[2]](2) y  [[3]](3))

### Operadores para expresiones lógicas

```
Igualdad
==
Desigualdad
!=
Mayor
<
Menor
>
Mayor o igual
<=
Menor o igual
>=
Y booleano
&&
O booleano
||
Negacion booleana
!

```

A continuación se presentan algunos ejemplos haciendo uso de
los condicionales if:

```cpp
// Las siguientes expresiones logicas son equivalentes
#include <iostream>

int main(){
	bool flag = false;

	if(!flag){
		std::cout << "Me ejecuto cuando flag es falso." << std::endl;
	}

	if(flag!=true){
		std::cout << "Me ejecuando cuando flag es falso." << std::endl;
	}

	if(flag==false){
		std::cout << "Me ejecuto cuando flag es falso." << std::endl;
	}

	return 0;
}

```
El código anterior tendría la siguiente salida:

```bash
Me ejecuto cuando flag es falso.
Me ejecuto cuando flag es falso.
Me ejecuto cuando flag es falso.
```

### Operadores ternarios

El operador ternario es similar al if/else anteriormente expuesto,
a continuación se presenta un ejemplo de su uso.

```cpp
#include <iostream>
#include <string>
int main(){

	std::string message;
	bool flag = true;
	flag ? message = "verdadero" : message = "falso";
	std::cout << message << std::endl;
	return 0;
}
```

La salida del siguiente código sería la siguiente:
```bash
verdadero
```
Como se aprecia en el ejemplo, los casos de la condicional se separan
por el caracter ':' y el código ejecutará la condición de la izquierda
si la condición lógica expuesta es verdadera, de otro modo se procederá
con el código a la derecha.

## switch
La estructura de control switch es utilizada cuando es necesario evaluar
una lista de posibles casos como se muestra a continuación:
```cpp

#include <iostream>
#include <string>

int main(){

	std::string message;

	int arg = 0;

	switch(arg){
		case 1:
			message = "1";
			break;
		case 2:
			message = "2";
			break;
		default:
			message = "default";
	}
	std::cout << message << std::endl;
	return 0;
}
```
El siguiente diagrama detalla los posibles resultados
segun el valor de 'arg':


```mermaid
graph TD;
    condiciones-->arg_igual_a_1;
		condiciones-->arg_igual_a_2;
		condiciones-->arg_distinto_a_casos;
		arg_igual_a_1-->message_igual_a_1;
		arg_igual_a_2-->message_igual_a_2;
		arg_distinto_a_casos-->message_igual_a_default;

```
Note en la sintaxis la presencia de la palabra ```break```
esta interrumpe la ejecución, al llegar a esa línea en particular
del switch y sale de la ejecucion de los corchetes, esto es
importante dado que de otro modo no importaría el valor de arg
siempre se ejecutaría el caso ```default```, también se debe
recalcar que si se hace uso de switch este debe incluir el
caso default.

# Estructuras de repetición
Las tres estructuras básicas de repetición en cpp
son el for, while y do while se empezará por el for.
## for
El for loop permite realizar la misma instrucción una cantidad n
de veces, para esta estructura se cuenta con las siguientes variables
que controlan el ```estado``` de la iteración:
```
expresión inicial
condición de finalización
expresión de actualización
```
A continuación se presenta un ejemplo básico de esta estructura
```cpp

#include <iostream>
#include <string>

int main(){
	int forLimit = 5;
	// int i = 0 corresponde a nuestra expresion inicial
	// i < forLimit corresponde a la condicion de finalizacion
	// i++ corresponde a la expresion de actualizacion
	for(int i = 0; i<forLimit; i++){
		std::cout << i << std::endl;
	}
	return 0;
}

```
La salida de este código es la siguiente:
```bash
0
1
2
3
4
```

## while
El while posee una condición lógica que establece si se ejecuta o no,
tome como ejemplo el siguiente código, note que la condición es que
conditionArg sea igual a 5.

```cpp
#include <iostream>
#include <string>

int main(){
	int conditionArg = 5;
	// Dato a cambiar dentro del while
	int i = 0;

	while(conditionArg==5){
		std::cout << i << std::endl;
		i++;
		if(i==6){
			conditionArg--;
		}
	}
	std::cout << conditionArg << std::endl;
	return 0;
}
```
En este caso el código desplegará los números enteros del 0 al 6,
y cuando este llegue a 6 saldra del while para desplegar 4.
Note que si el valor de i no incrementará despues de mostrar su valor
actual el código seguiría ejecutandose sin parar, otro aspecto a tomar
en cuenta es que los while son estructuras de repetición dependientes
de la condición lógica usada en el caso de que esta no sea cierta
el código dentro de este no se ejecutará.

## do while
La estructura do while es usada cuando necesitamos al menos
una ejecución de las instrucciones y no sabemos si la condición
lógica descrita se cumple o no. El do while ejecutará el código
y después de su primera ejecución verificará el valor de verdad
de la condición, si este es verdadero continuará con otra iteración
hasta que su condición sea falsa.

```cpp

#include <iostream>
#include <string>

int main(){
	int conditionArg = 0;
	do{
		std::cout << "Evaluando condicion" << std::endl;
		if(conditionArg==5){
			std::cout << "Condicion falsa." << std::endl;
		}
		std::cout << "Condicion cierta." << std::endl;
		// incremento de conditionArg
		conditionArg++;
	}while(conditionArg!=5);
	std::cout << conditionArg << std::endl;
	return 0;
}
```
La salida del código seria la siguiente:

```bash
Evaluando condicion
Condicion cierta.
Evaluando condicion
Condicion cierta.
Evaluando condicion
Condicion cierta.
Evaluando condicion
Condicion cierta.
Evaluando condicion
Condicion cierta.
5
```

# Comentarios finales.

En esta sección no se examino el comportamiento de
palabras designadas del lenguaje cpp para interrumpir
el comportamiento de las estructuras de repetición,
en particular ```continue``` y ```break```, se recomienda
al lector estudiar esto por su cuenta.

# Referencias

<a id="1">[1]</a>
Philllip A. Laplante
Enciclopedia of Computer Science and Technology Second Edition Volume II, p110.

<a id="2">[2]</a>
https://www.cs.fsu.edu/~myers/c++/notes/control1.html

<a id="3">[3]</a>
https://en.cppreference.com/w/cpp/language/expressions
