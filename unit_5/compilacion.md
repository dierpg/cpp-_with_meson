# Compilacion de ejemplos.

El proceso de creacion de archivos para ordenar la
compilacion, esta dado por el uso de funciones dentro
de meson que establecen el orden de operaciones sobre
la creacion de objetivos de construccion.
A falta de una mejor traduccion usaremos el anglicismo
```build_target``` como se presenta en la documentacion
del sistema de construccion.

# Build Targets

Un build target es el objeto que se genera apartir de
una ```fuente``` o ```src```, los ```src``` son los archivos
utilizados por el build_target.

# Incluir archivos build externos

La estructura a la hora de leer un archivo de build,
esta dada por el archivo padre del ```proyecto```.
Tome como ejemplo el primer archivo dentro de esta unidad

```python

project('unit_5','cpp', version: '0.1',
default_options : ['warning_level=3',
'cpp_std=c++17'])

subdir('ejemplos')
```

El archivo padre contiene la definicion del proyecto como tal,
despues de esto se procede a utilizar ```subdir```.
Lo que se busca es que el archivo padre tome las instrucciones
descritas en el archivo hijo en el subdirectorio ejemplos.

Al examinar el archivo de build en ejemplos encontramos lo
siguiente:
```python
subdir('librerias')
librerias_include = include_directories('librerias')
```
En este caso cargamos otro archivo de build desde
```librerias``` sus contenidos a continuacion:
```python
funciones_src = files(['funciones.hpp'])

lib_librerias = static_library('funciones.hpp',
sources: funciones_src)
```
Aqui añadimos files que funciona como un source en
lib_librerias y este a su vez es un build target.
Con esto logramos que se compartan los componentes
de este archivo con el anterior, el archivo anterior
depende de componentes de este en particular en sus
```executables``` solo examineramos el primero dado
que los demas realizan exactamente lo mismo:
```python
inline_de_funciones_exe = executable('inline_de_funciones_exe',
'inline_de_funciones.cpp',
link_with: lib_librerias,
install: true,
objects: funciones_src,
include_directories: librerias_include)
```

Preste atencion a la opcion link_with, objects y
include directories. Estas son utilizdas para
indicar que se debe hacer linking contra
lib_librerias, objects establece que archivos
utiliza el ejecutable y include directories
establece donde se encuentran estos elementos.
