cmake_minimum_required(VERSION 2.6)
project(algorithms)

add_subdirectory(LeastCommonMultiple)
add_subdirectory(TestLeastCommonMultiple)

add_executable(algorithms
    ${3PARTY_DIR}/ctest/ctest.h
    main.c
)

target_link_libraries(algorithms
    leastCommonMultiple
    testLeastCommonMultiple
)
target_include_directories(algorithms
	PUBLIC ${3PARTY_DIR}
)

set_target_properties(algorithms
	PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY "${OUTPUT_DIR}"
)