cmake_minimum_required(VERSION 3.10)
project(Kc)

# Especifica la versión de C++
set(CMAKE_CXX_STANDARD 17)

# Añade el directorio lib a los directorios de inclusión
include_directories(./src/lib)
include_directories(./src/myVisitor)

# Incluye los encabezados del runtime de ANTLR
include_directories(/usr/local/antlr4-runtime/local/include/antlr4-runtime)

# Añade la biblioteca del runtime de ANTLR
link_directories(/usr/local/antlr4-runtime/local/lib)

#incluir encambezados de llvm
include_directories($ENV{LLVM18I})

# Busca todos los archivos .cpp en src/lib
file(GLOB LIB_SOURCES "./src/lib/*.cpp")

# Añade la ruta de los archivos fuente
set(SOURCE_FILES
    ./src/main.cpp
    ./src/myVisitor/KCVisitor.cpp
    ${LIB_SOURCES}
)

# Crea el ejecutable
add_executable(Kc ${SOURCE_FILES})

# Añade los directorios de búsqueda de las bibliotecas para el proyecto Kc
target_link_directories(Kc PUBLIC $ENV{LLVM18L})

# Enlaza el runtime de ANTLR y LLVM con tu proyecto
target_link_libraries(Kc antlr4-runtime LLVM)
