project('cpp-_with_meson', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3'])


# Subprojects
unit_3_project = subproject('unit_3')


# Include dir
install_subdir('ejercicios', install_dir : 'ejercicios')

# Declare dependencies
deps = []

# Testing suite
if get_option('build_tests')
  gtest_proj = subproject('gtest')
  gtest_dep = gtest_proj.get_variable('gtest_dep')
  subdir('tests')
endif
