# Sistemas de construcción.
Retomando lo visto en la unidad 1 hemos visto como agregar código desde un archivo header diferente del archivo main.
Sin embargo, hemos de notar que al crear programas se deben dividir sus distintos componentes en diferentes archivos,
a veces esto toma decenas, cientos e incluso miles de archivos dependiendo del tamaño del proyecto que se desarrolle.

Debido a esto, el método de poner el nombre de cada archivo utilizado en una línea de comandos, es poco práctico en la mayoría
de las situaciones, es aquí donde entra otra herramienta de software para solucionar este problema, el sistema de construcción o
build system en inglés.

Para los propósitos de este curso se usará meson. A continuación, se describirá el proceso por el cual se establece lo que en
jerga de programadores se conoce como un ambiente de desarrollo.

Antes de realizar este proceso, hay que cumplir una serie de requisitos, dado que este software depende de otras piezas para poder funcionar, en particular se asume lo siguiente:

```
python  version 3.10.4 o superior
cmake version 3.26.3 o  superior
gcc y g++ version 9.4.0 o superior
```
Cabe mencionar, gcc y g++ fueron cubiertos en la anterior unidad, el resto posee instrucciones para su instalación, que pueden ser encontradas en las páginas de sus respectivos proyectos:

```
cmake https://cmake.org/install/
python https://www.python.org/downloads/

```

Una véz se han instalado estas dependencias, se puede proseguir con la instalación de meson.
Inserte los siguientes comandos en la terminal
```bash
sudo apt install build-essential
sudo apt install meson ninja-build
```
Con esto meson ya esta instalado, ahora vamos a utilizar el código de la sección anterior, dentro de la carpeta test cree un archivo con el siguiente nombre meson.build, en el debe agregar lo siguiente:
```meson
# project keyword
project('test', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])

# exe para ejecutables
exe = executable('main', 'main.cpp', 'myheader.hpp',
  install : true)
```
Note que el archivo comienza con la palabra project (para denotar el proyecto sobre el que se esta trabajando), la palabra después de la segunda coma, denota el lenguaje que se esta usando, en este caso cpp, version denota la versión de nuestro programa y default_options establece las flags que se pasan al compilador.

Exe lo usamos para denotar el tipo de programa a compilar, note que en esta sección añadimos main
como el nombre del ejecutable a producir al final del proceso.

Ahora necesitamos de una serie de comandos para producir el ejecutable, dentro de la carpeta test de la unidad 1 ejecute lo siguiente:

```bash
meson setup builddir
cd builddir
meson install .
```

Obtendra una respuesta como la siguiente:

```
ninja: Entering directory `.'
[2/2] Linking target main.
Installing main to /usr/local/bin
Installation failed due to insufficient permissions.
Attempting to use polkit to gain elevated privileges...
Error executing command as another user: Not authorized

This incident has been reported.
```
Esto es normal, no se preocupe, el archivo ejecutable fue creado dentro de la carpeta builddir pero lo que esta notificación está dando a entender, es que se intento hacer una copia del ejecutable en la carpeta /usr/local/bin que es la opción por default donde se colocan los archivos al "instalar", esto se puede cambiar a conveniencia para más informacián se puede consultar [1](1), ahora sí ejecuta el archivo deberá obtener:
```
Hello world
Hello me
```
Sí bien se añaden pasos extra en el proceso de creación de un ejecutable, se debe destacar que el utilizar un sistema de construcción ayuda en la organización y automatización del proceso de desarrollo de software, dado que permite expresar la manera en la que se espera que se replique el software, de una manera en la que todos los participantes del proceso son capaces de volver a aplicar los mismos pasos y pueden ser guiados mediante la documentación del sistema en particular.

## Referencias
<a id="1">[1]</a>
https://mesonbuild.com/Installing.html
