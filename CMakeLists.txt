cmake_minimum_required(VERSION 3.19)
project(fall2023-csc3380-lecture16)

set(CMAKE_CXX_STANDARD 20)

find_package(FLTK CONFIG REQUIRED)

set(fltk_toolkit_sources
    code/Graph.cpp
    code/GUI.cpp
    code/Simple_window.cpp
    code/Window.cpp
)

add_executable(simple_line code/simple_line.cpp ${fltk_toolkit_sources})
target_link_libraries(simple_line PRIVATE fltk fltk_images)

add_executable(lines code/lines.cpp ${fltk_toolkit_sources})
target_link_libraries(lines PRIVATE fltk fltk_images)

add_executable(color_grid code/color_grid.cpp ${fltk_toolkit_sources})
target_link_libraries(color_grid PRIVATE fltk fltk_images)
