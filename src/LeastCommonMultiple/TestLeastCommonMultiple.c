#include "TestLeastCommonMultiple.h"

int test_leastCommonMultiple_mainSuccess() {
    return
        lcm(16, 20) == 80 &&
        lcm(5, 3) == 15 &&
        lcm(8, 12) == 24
    ;
}