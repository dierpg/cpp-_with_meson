subdir('librerias')
librerias_include = include_directories('librerias')

inline_de_funciones_exe = executable('inline_de_funciones_exe',
'inline_de_funciones.cpp',
link_with: lib_librerias,
install: true,
objects: funciones_src,
include_directories: librerias_include)

recursividad_ejemplo_exe = executable('recursividad_ejemplo_exe',
'recursividad_ejemplo.cpp',
link_with: lib_librerias,
install: true,
objects: funciones_src,
include_directories: librerias_include)

sobrecarga_de_funciones_exe = executable(
'sobrecarga_de_funciones_exe',
'sobrecarga_de_funciones.cpp',
link_with: lib_librerias,
install: true,
objects: funciones_src,
include_directories: librerias_include)
