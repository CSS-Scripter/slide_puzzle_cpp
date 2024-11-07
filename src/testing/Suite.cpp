#include "Suite.h"
#include "Direction_test.h"

#include <iostream>

void Testing::runTests() {
    bool success { true };
    std::cout << "==== Running test suite ==========\n";
    std::cout << "1) Direction.cpp\n";
    success &= DirectionTest::runTests();

    if (success) std::cout << "*) All tests passed!\n";
    else         std::cout << "*) Some tests failed!\n";
    std::cout << "==================================\n";
}
