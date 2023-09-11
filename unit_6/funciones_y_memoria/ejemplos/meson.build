subdir('librerias')
include_libraries = include_directories('librerias')

ejemplo_6_4_exe = executable('ejemplo_6.4_exe', 'ejemplo_6.4.cpp',
link_with: librerias,
install: true,
objects: funciones_src,
include_directories: include_libraries)
