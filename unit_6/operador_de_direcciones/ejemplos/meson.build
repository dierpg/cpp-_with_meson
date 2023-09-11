subdir('librerias')
include_libraries = include_directories('librerias')

ejemplo_6_1_exe = executable('ejemplo_6.1_exe', 'ejemplo_6.1.cpp',
link_with: librerias,
install: true,
objects: funciones_src,
include_directories: include_libraries)

ejemplo_6_2_exe = executable('ejemplo_6.2_exe', 'ejemplo_6.2.cpp',
link_with: librerias,
install: true,
objects: funciones_src,
include_directories: include_libraries)

ejemplo_6_3_exe = executable('ejemplo_6.3_exe','ejemplo_6.3.cpp',
link_with: librerias,
install: true,
objects: funciones_src,
include_directories: include_libraries)
