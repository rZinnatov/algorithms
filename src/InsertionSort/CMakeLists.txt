add_library(insertionSort
    InsertionSort.c
    TestInsertionSort.c
)
target_link_libraries(insertionSort
    zz-test
)