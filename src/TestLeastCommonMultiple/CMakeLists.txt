add_library(testLeastCommonMultiple
    ${3PARTY_DIR}/ctest/ctest.h
    MainSuccess.c
)
target_include_directories(testLeastCommonMultiple
	PUBLIC ${3PARTY_DIR}
    PUBLIC ${CMAKE_SOURCE_DIR}
)