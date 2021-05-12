cmake_minimum_required(VERSION 3.5)
 
project(miu_plus_aros)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unused-parameter -fpermissive -D__AROS__ -fno-exceptions")

set(CMAKE_CXX_STANDARD 17)

set(sources
        src/main.cpp src/MainArea.cpp src/MainArea.h src/ZuneApplication.cpp src/ZuneApplication.h)
add_subdirectory(muiplus)

add_executable(testa ${sources})

if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_link_libraries(testa PUBLIC zune muimaster intuition dos locale utility mui exec graphics autoinit amiga axrt
            /usr/lib/x86_64-linux-gnu/startup.o
            /usr/lib/x86_64-linux-gnu/axrt.ld
            )
    set(CMAKE_EXE_LINKER_FLAGS "-specs=/usr/lib/x86_64-linux-gnu/axrt.specs")
    target_include_directories(testa PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/muiplus/src/include>
            "/usr/include/axrt"
            )
else()
    target_link_libraries(testa zune muimaster mui)
    target_include_directories(testa PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/muiplus/src/include>
            /home/bsek/src/x86/bin/linux-x86_64/AROS/Developer/include SYSTEM
            /home/bsek/src/x86/bin/linux-x86_64/AROS/Developer/include/aros/posixc SYSTEM
            /home/bsek/src/x86/bin/linux-x86_64/AROS/Developer/include/aros/stdc SYSTEM
            )
    add_custom_command(TARGET testa POST_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_BINARY_DIR}/testa /home/bsek/src/x86/bin/linux-x86_64/AROS/)
endif ()
