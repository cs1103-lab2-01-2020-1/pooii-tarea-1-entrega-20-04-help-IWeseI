cmake_minimum_required(VERSION 3.16)
project(tarea_help)

file(GLOB SOURCES "src/*" "template/*" )

add_executable(tarea_help ${SOURCES})
