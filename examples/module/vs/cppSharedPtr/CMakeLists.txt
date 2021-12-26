# CMakeList.txt : CMake project for cppSharedPtr, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cppSharedPtr")

add_compile_options("/std:c++latest")
add_compile_options("/experimental:module")
add_compile_options("/MD")

# Add source to this project's executable.
 
add_executable (cppSharedPtr "mymodule.ixx" "mymodule.cpp" "cppSharedPtr.cpp" )

# TODO: Add tests and install targets if needed.
