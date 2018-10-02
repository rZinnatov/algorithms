#include <stdio.h>

#include <zz-test.h>

#include "MergeSort/TestMergeSort.h"
#include "BubbleSort/TestBubbleSort.h"
#include "InsertionSort/TestInsertionSort.h"
#include "LeastCommonMultiple/TestLeastCommonMultiple.h"

void main()
{
    TITLE("Test algorithms implementations:");
    

    TITLE("\tLeastCommonMultiple:");
    TEST("\tMainSuccess", test_leastCommonMultiple_mainSuccess);

    TITLE("\tBubbleSort:");
    TEST("\tMainSuccess", test_bubbleSort_mainSuccess);

    TITLE("\tInsertionSort:");
    TEST("\tMainSuccess", test_insertionSort_mainSuccess);

    TITLE("\tMergeSort:");
    TEST("\tCopy: main success", test_mergeSort_copy_mainSuccess);
    TEST("\tMerge: equal length", test_mergeSort_merge_equalLength);
    TEST("\tMerge: first is longer", test_mergeSort_merge_firstIsLonger);
    TEST("\tMerge: second is longer", test_mergeSort_merge_secondIsLonger);
    TEST("\tMainSuccess", test_mergeSort_mainSuccess);


    TITLE("Done");
}