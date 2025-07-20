cmake_minimum_required(VERSION 3.22)

project(Mythoscape
    VERSION 0.1
    DESCRIPTION "Mythoscape Game Engine"
    HOMEPAGE_URL "https://github.com/awsl12581/Mythoscape"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

add_executable(main
    src/main.cpp
)
target_link_libraries(main PRIVATE glfw)
target_link_libraries(main PRIVATE glad::glad)
