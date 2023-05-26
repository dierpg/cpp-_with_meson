project('cpp-_with_meson', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3',
										'cpp_std=c++17'])


# Required tools and variables
cmake = import('cmake')
cmake_opts = [
	'-DBUILD_SHARED_LIBS=ON'
]

# Directory variables
common_dependencies_dir = meson.source_root() + '/builddir/common-dependencies'
unit_4 = include_directories('unit_4')


# Declare dependencies
deps = []

# options

build_tests = get_option('build_tests')

# Testing suite
if build_tests
  gtest_proj = subproject('gtest')
  gtest_dep = gtest_proj.get_variable('gtest_dep')
	gmock_dep = gtest_proj.get_variable('gmock_dep')
  subdir('tests')
endif

subdir('unit_4')
