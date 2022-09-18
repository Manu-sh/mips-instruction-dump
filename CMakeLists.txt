cmake_minimum_required(VERSION 3.17)
project(main C)
set(CMAKE_C_STANDARD 11)

set(INC_PATH  ${PROJECT_SOURCE_DIR}/include)
set(SRC_PATH  ${PROJECT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME}
        main.c
        ${SRC_PATH}/mips/instruction/helper.c
        ${SRC_PATH}/mips/register/helper.c
)

target_include_directories(${PROJECT_NAME} PUBLIC ${INC_PATH})
target_compile_options(${PROJECT_NAME}
        PRIVATE
            -Wall -Wextra
            -Wno-unused-function -pipe -pedantic
            -fstack-protector-all -fstack-protector-strong
            -O3 -ffast-math -funroll-loops -march=native
)
