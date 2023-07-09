# Compilacion

En esta carpeta encontrara un archivo llamado
meson.build, las instrucciones para compilar
los archivos presentes en esta carpeta.
El comando a utilizar es el siguiente:
```bash
meson setup builddir
cd builddir
meson compile
```
Esto crea una carpeta llamada builddir que
contiene los archivos necesarios para realizar
la compilacion.

# Archivo meson.build

Si se examina el archivo meson.build
se notara que la primera linea contiene
lo siguiente:
```python
project('ejemplos',
'cpp',
version: '0.1',
# Flags del compilador.
default_options: ['warning_level=3'
,'cpp_std=c++17']
)
```
Con esto queremos decir que este es el archivo principal
de construccion, para este ejemplo nos preocuparemos
solo de este archivo sin embargo es posible crear
proyectos en carpetas anidadas con archivos meson.build,
estos son especificos para los archivos contenidos en esa
carpeta y utilizarlos como parte de un archivo principal
de meson, estos seran desarollados en las unidades
siguientes.
# NOTA
Se le indica a markdown que es codigo de python,
para mantener el estilo en la presentacion de markdown
sin embargo meson posee su propio DSL basado en python.
# Argumentos de project
Los primeros dos argumentos dentro de project
corresponden a ```nombre_del_proyecto``` y
```lenguaje_del_proyecto.```.
# Flags del compilador
Note que en el codigo anterior tenemos los siguientes
valores para el array ```default_options```
```
warning_level=3
cpp_std=c++17
```
Estos corresponden a flags que estamos pasando al compilador,
se recomienda revisar la documentacion al respecto [[1]](1), [[2]](2).

# Generacion de ejecutables
Otro aspecto a tomar en cuenta es como se le indica
al sistema de construccion que genere los ejecutables.
Para realizar esta tarea se hace uso de la funcion
```executable``` en este caso el primer argumento
corresponde al nombre del ejecutable y el segundo
es el nombre del archivo, se debe tomar en cuenta
que en este caso los archivos estan dentro del mismo
directorio por lo que no se debe especificiar su ruta
u otros parametros.

# Referencias
<a id="1">[1]</a>
https://gcc.gnu.org/onlinedocs/gcc/Option-Summary.html

<a id="2">[2]</a>
https://mesonbuild.com/Adding-arguments.html
