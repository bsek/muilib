cmake_minimum_required(VERSION 3.5)
 
project(miu_plus_aros)
 
SET(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unused-parameter -fpermissive")

set(CMAKE_CXX_STANDARD 17)

set(sources
        "src/main.cpp"
        src/MainWindow.cpp src/MainWindow.h src/Buttons.cpp src/Buttons.h src/ImageArea.cpp src/ImageArea.h)

add_subdirectory(muiplus)

add_executable(test.exe ${sources})
target_link_libraries(test.exe muiplus)
target_include_directories(test.exe PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/muiplus/src/include>
        )

if (AMIGAOS4)
   # add_custom_command(TARGET test.exe POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_BINARY_DIR}/test.exe /mnt/c/Users/Public/Documents/Amiga\ Files/Shared/Workbench)
else()
    add_custom_command(TARGET test.exe POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_BINARY_DIR}/test.exe /home/bsek/src/AROS-mirror/x86_64/bin/linux-x86_64/AROS/)
endif ()
