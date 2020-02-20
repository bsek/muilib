cmake_minimum_required(VERSION 3.5)
 
project(miu_plus_aros)
 
SET(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unused-parameter -fpermissive")

set(CMAKE_CXX_STANDARD 17)

set(sources
        "src/main.cpp"
        src/MainWindow.cpp src/MainWindow.h src/Buttons.cpp src/Buttons.h src/ImageArea.cpp src/ImageArea.h)

add_subdirectory(muiplus)
add_subdirectory(zunegui)

add_executable(testa ${sources})
target_link_libraries(testa muiplus zunegui)
target_include_directories(testa PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/muiplus/src/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/zunegui/src/include>
        )

add_custom_command(TARGET testa POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_BINARY_DIR}/testa /home/bsek/src/x86/bin/linux-x86_64/AROS/)
