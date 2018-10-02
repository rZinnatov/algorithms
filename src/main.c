#include <stdio.h>

#include "MergeSort/TestMergeSort.h"
#include "BubbleSort/TestBubbleSort.h"
#include "InsertionSort/TestInsertionSort.h"
#include "LeastCommonMultiple/TestLeastCommonMultiple.h"

#define TITLE(str) printf("\x1b[1m" str "\x1b[0m\n")
#define PASSED "\x1b[32mPassed\x1b[0m"
#define FAILED "\x1b[31mFailed\x1b[0m"
#define TEST(name, method) printf( \
        "\t\t%s: %s\n", \
        name, \
        method() ? PASSED : FAILED \
    );

void main()
{
    TITLE("Test algorithms implementations:");
    

    TITLE("\tLeastCommonMultiple:");
    TEST("MainSuccess", test_leastCommonMultiple_mainSuccess);

    TITLE("\tBubbleSort:");
    TEST("MainSuccess", test_bubbleSort_mainSuccess);

    TITLE("\tInsertionSort:");
    TEST("MainSuccess", test_insertionSort_mainSuccess);

    TITLE("\tMergeSort:");
    TEST("Copy: main success", test_mergeSort_copy_mainSuccess);
    TEST("Merge: equal length", test_mergeSort_merge_equalLength);
    TEST("Merge: first is longer", test_mergeSort_merge_firstIsLonger);
    TEST("Merge: second is longer", test_mergeSort_merge_secondIsLonger);
    TEST("MainSuccess", test_mergeSort_mainSuccess);


    TITLE("Done");
}