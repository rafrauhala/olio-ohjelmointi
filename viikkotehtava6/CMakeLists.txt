cmake_minimum_required(VERSION 3.16)

project(viikkotehtava6 LANGUAGES C)

add_executable(viikkotehtava6 main.c)

include(GNUInstallDirs)
install(TARGETS viikkotehtava6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
