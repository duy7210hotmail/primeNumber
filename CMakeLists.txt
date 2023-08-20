# Cmake configuration
cmake_minimum_required(VERSION 3.10)

# Project Name
set (TARGET "PRIME_NUMBER_APPLICATION")
PROJECT (${TARGET})

# Specify The C++ standard
set ( CMAKE_CXX_STANDARD 11)
set ( CMAKE_CXX_STANDARD_REQUIRED True)

# Library
set (LOGIC ./lib/logic.cpp)
set (PNCHECK ./lib/pncheck.cpp)

#target_include_directories(lib) # What is it

# Local library configuration 
add_library (lib ${LOGIC} ${PNCHECK})
add_subdirectory (lib)

# add the executable
add_executable (application ./main/main.cpp)

target_link_libraries (application PUBLIC lib)
target_include_directories (application PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/lib"
  )


## Create a build folder
# cd to build folder 
# cmake [CMakeLists.txt file location]
# cmake --build .
