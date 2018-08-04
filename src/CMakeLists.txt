cmake_minimum_required(VERSION 2.6)
project(algorithms)

add_subdirectory(BubbleSort)
add_subdirectory(LeastCommonMultiple)

add_executable(algorithms
    main.c
)

target_link_libraries(algorithms
    bubbleSort
    leastCommonMultiple
)

set_target_properties(algorithms
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIR}"
)