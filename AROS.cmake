set(CMAKE_SYSTEM_NAME Generic)

set(CMAKE_SHARED_LIBRARY_LINK_${lang}_FLAGS "-lpthread")
set(CMAKE_SHARED_LIBRARY_LINK_C_FLAGS "")
set(CMAKE_SHARED_LIBRARY_LINK_CXX_FLAGS "-fpermissive")

SET(CMAKE_EXE_LINKER_FLAGS "-static-libstdc++")

set(CMAKE_C_COMPILER x86_64-aros-gcc)
set(CMAKE_CXX_COMPILER x86_64-aros-g++)
