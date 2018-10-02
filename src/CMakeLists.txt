cmake_minimum_required(VERSION 2.6)
project(algorithms)

set(CMAKE_BUILD_TYPE Debug)

add_subdirectory(3party/zz-test/src/ZZTest)

add_subdirectory(MergeSort)
add_subdirectory(BubbleSort)
add_subdirectory(InsertionSort)
add_subdirectory(LeastCommonMultiple)

include_directories(3party/zz-test/src/ZZTest)
target_include_directories(mergeSort PUBLIC 3party/zz-test/src/ZZTest)
target_include_directories(bubbleSort PUBLIC 3party/zz-test/src/ZZTest)
target_include_directories(insertionSort PUBLIC 3party/zz-test/src/ZZTest)
target_include_directories(leastCommonMultiple PUBLIC 3party/zz-test/src/ZZTest)

add_executable(algorithms
    main.c
)

target_link_libraries(algorithms
    zz-test
    mergeSort
    bubbleSort
    insertionSort
    leastCommonMultiple
)

set_target_properties(algorithms
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIR}"
)