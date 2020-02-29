cmake_minimum_required(VERSION 3.5)
 
project(miu_plus_aros)

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
        /home/bsek/src/x86/bin/linux-x86_64/tools/crosstools/lib/gcc/x86_64-aros/10.0.0/include/c++ SYSTEM
        /home/bsek/src/x86/bin/linux-x86_64/tools/crosstools/lib/gcc/x86_64-aros/10.0.0/include/c++/x86_64-aros SYSTEM
        /home/bsek/src/x86/bin/linux-x86_64/tools/crosstools/lib/gcc/x86_64-aros/10.0.0/include/c++/backward SYSTEM
        /home/bsek/src/x86/bin/linux-x86_64/tools/crosstools/lib/gcc/x86_64-aros/10.0.0/include SYSTEM
        /home/bsek/src/x86/bin/linux-x86_64/AROS/Developer/include SYSTEM
        /home/bsek/src/x86/bin/linux-x86_64/AROS/Developer/include/aros/posixc SYSTEM
        /home/bsek/src/x86/bin/linux-x86_64/AROS/Developer/include/aros/stdc SYSTEM
)

add_custom_command(TARGET testa POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_BINARY_DIR}/testa /home/bsek/src/x86/bin/linux-x86_64/AROS/)
