project('unit-3', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])


# Subprojects
unit_3_project = subproject('ejercicios')
unit_3_exercises = subproject('tests')


# Include dir
install_subdir('ejercicios', install_dir : 'subdir')
install_subdir('tests', install_dir: 'subdir')
