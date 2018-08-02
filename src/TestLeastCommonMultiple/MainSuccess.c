#define CTEST_MAIN
#include <ctest/ctest.h>
#include <LeastCommonMultiple/LeastCommonMultiple.h>

CTEST(suite, test1) {
    ASSERT_EQUAL(80, lcm(16, 20));
}