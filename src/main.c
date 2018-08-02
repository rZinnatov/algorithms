#include <stdio.h>

#define CTEST_MAIN

#include <ctest/ctest.h>

int main(int argc, const char *argv[])
{
    int result = ctest_main(argc, argv);

    printf("\nDone\n");
    return result;
}