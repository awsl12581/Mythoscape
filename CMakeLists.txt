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

# cmake modules
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
# Find meojson
find_package(meojson REQUIRED)
find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

# srcs
file(GLOB_RECURSE SRC_FILES "${CMAKE_SOURCE_DIR}/src/*.cpp")

add_executable(main
    ${SRC_FILES}
)
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/src)

target_link_libraries(main PRIVATE glfw)
target_link_libraries(main PRIVATE glad::glad)
target_link_libraries(main PRIVATE meojson)
