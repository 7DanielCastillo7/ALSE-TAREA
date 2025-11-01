cmake_minimum_required(VERSION 3.10)

project(SistemaCarritoCompras CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(carrito_app src/main.cpp src/Producto.cpp src/CarritoCompras.cpp src/Usuario.cpp)

target_include_directories(carrito_app PUBLIC include)

find_package(Doxygen)
if (DOXYGEN_FOUND)
  doxygen_add_docs(
    doc
    ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in 
    COMMENT "Generando documentación con Doxygen"
  )
endif()