cmake_minimum_required(VERSION 3.16)

project(vviikkotehtava6 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vviikkotehtava6 main.cpp)

include(GNUInstallDirs)
install(TARGETS vviikkotehtava6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
