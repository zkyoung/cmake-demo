set(SOURCE_FILES Main.cpp)

include_directories(${cmake-demo_SOURCE_DIR}/vectormath)
link_directories(${cmake-demo_BINARY_DIR}/vectormath)

add_executable(demo ${SOURCE_FILES})
target_link_libraries(demo vectormath)