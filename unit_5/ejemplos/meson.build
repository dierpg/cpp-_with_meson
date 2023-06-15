librerias_include = include_directories('ejemplos')

lib_librerias = shared_library('librerias',
include_directories: librerias_include,
install: true)


sobrecarga_de_funciones_exe = executable(
'sobrecarga_de_funciones_exe',
'sobrecarga_de_funciones.cpp',
link_with: lib_librerias)
