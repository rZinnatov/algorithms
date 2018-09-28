cmake_minimum_required(VERSION 2.6)
project(algorithms)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(MergeSort)
add_subdirectory(BubbleSort)
add_subdirectory(InsertionSort)
add_subdirectory(LeastCommonMultiple)

add_executable(algorithms
    main.c
)

target_link_libraries(algorithms
    mergeSort
    bubbleSort
    insertionSort
    leastCommonMultiple
)

set_target_properties(algorithms
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIR}"
)