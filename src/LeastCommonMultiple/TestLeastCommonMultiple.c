#include "TestLeastCommonMultiple.h"

int test_leastCommonMultiple_mainSuccess() {
    return
        lcm(16, 20) == 80 &&
        lcm(20, 16) == 80 &&
        lcm(5, 3) == 15 &&
        lcm(3, 5) == 15 &&
        lcm(12, 8) == 24 &&
        lcm(8, 12) == 24
    ;
}