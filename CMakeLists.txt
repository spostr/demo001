# cmake 最低版本需求
cmake_minimum_required(VERSION 3.14)

# 工程名称
project(demo001)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY /data/${PROJECT_NAME}/bin)

add_definitions(-D_GLIBCXX_USE_CXX11_ABI=0 -Wno-deprecated-declarations)

# 包含spdlog的include目录
include_directories(/usr/local/spdlog/include) 

aux_source_directory(src DIR_SRCS)


# 设置
add_compile_options(-std=c++20 -g)


# 编译源码生成目标
add_executable(${PROJECT_NAME} ${DIR_SRCS})


target_link_libraries(${PROJECT_NAME}
        pthread
        rt
        dl
        )

