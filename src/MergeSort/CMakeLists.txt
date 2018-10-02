add_library(mergeSort
    MergeSort.c
    TestMergeSort.c
)
target_link_libraries(mergeSort
    zz-test
)