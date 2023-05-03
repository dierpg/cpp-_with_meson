# Sistemas de construcción.
Retomando lo visto en la unidad 1 hemos visto como agregar código desde un archivo header diferente del archivo main.
Sin embargo, hemos de notar que al crear programas se deben dividir sus distintos componentes en diferentes archivos,
a veces esto toma decenas, cientos e incluso miles de archivos dependiendo del tamaño del proyecto que se desarrolle.

Debido a esto, el método de poner el nombre de cada archivo utilizado en una línea de comandos, es poco práctico en la mayoría
de las situaciones, es aquí donde entra otra herramienta de software para solucionar este problema, el sistema de construccíon o
build system en ingles.

Para los propósitos de este curso se usará meson. A continuación, se describirá el proceso por el cual se establece lo que en
jerga de programadores se conoce como un ambiente de desarrollo.

Antes de realizar este proceso, hay que cumplir una serie de requisitos, dado que este software depende de otras piezas para poder funcionar, en particular se asume lo siguiente:

```
python  version 3.10.4 o superior
cmake version 3.26.3 o  superior
gcc y g++ version 9.4.0 o superior
ninja version 1.11.1 o superior
```
Cabe mencionar, gcc y g++ fueron cubiertos en la anterior unidad, el resto posee instrucciones para su instalación, que pueden ser encontradas en las páginas de sus respectivos proyectos:

```
ninja https://github.com/ninja-build/ninja/wiki/Pre-built-Ninja-packages
cmake https://cmake.org/install/
python https://www.python.org/downloads/

```

Una véz se han instalado estas dependencias, se puede proseguir con la instalación de meson.
