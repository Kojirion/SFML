find_package (Threads)

set(SRCROOT "${PROJECT_SOURCE_DIR}/benchmark/src")

SET(SRC
    "${SRCROOT}/Main.cpp"
    "${SRCROOT}/String.cpp"
    "${SRCROOT}/Vector.cpp"
    "${SRCROOT}/Rect.cpp"
    "${SRCROOT}/Font.cpp"
)

message(${PROJECT_SOURCE_DIR})

include_directories("${PROJECT_SOURCE_DIR}/include")
include_directories("${PROJECT_SOURCE_DIR}/extlibs/benchmark/include")

add_executable(sfmlbenchmark ${SRC})

target_link_libraries(sfmlbenchmark sfml-graphics sfml-window sfml-audio sfml-network sfml-system
                      ${CMAKE_BINARY_DIR}/extlibs/benchmark/src/libbenchmark.so
                      ${CMAKE_THREAD_LIBS_INIT}
                      )
