# Direcciones de memoria
Durante la ejecucion de un programa, las variables
declaradas se ubican en memoria, c++ posee una sintaxis
especial para obtener la direccion en memoria que ocupa
la variable, para este cometido se hace uso del simbolo ```&```.

La sintaxis del lenguaje es variada para el uso de este
simbolo y no todo el tiempo se interpreta de la misma
manera por el compilador por lo que a continuacion se
presentaran algunos ejemplos.


# Obteniendo la direccion de una variable

Si se quiere saber la direccion de una variable
se puede obtener de la siguiente manera.

```cpp
#include <iostream>
int main(){
	int var = 999;
	std::cout << "La direccion de var es: " << &var << std::endl;
	return 0;
}
```
