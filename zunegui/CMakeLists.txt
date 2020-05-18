cmake_minimum_required(VERSION 3.5)
project("zunegui")

set(SOURCES_ZUNEGUI 
    "src/Application.cpp"
    "src/Button.cpp"
)
set(HEADERS_ZUNEGUI
    "src/include/Application.h"
    "src/include/Button.h"
)

add_library(zunegui STATIC ${SOURCES_ZUNEGUI} ${HEADERS_ZUNEGUI})
target_link_libraries(zunegui muiplus )

if (${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_include_directories(zunegui PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../muiplus/src/include>
            /usr/include/axrt
            )
    target_link_libraries(zunegui muiplus)
else()
    target_include_directories(zunegui PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../muiplus/src/include>
            )
    target_link_libraries(zunegui muiplus)
endif()
