cmake_minimum_required(VERSION 3.5)

project(Zlatopolskys-tasks LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory("Chapter1/")
add_subdirectory("Chapter2/")
add_subdirectory("Chapter3/")

add_custom_target(ProjectRelatedFiles SOURCES
    .astylerc
)
