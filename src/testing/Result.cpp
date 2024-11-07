#include "Result.h"

#include <iostream>

void Result::print()
{
    if (m_passed) std::cout << "passed!\n";
    else {
        std::cout << "failed: \n";
        for (auto& reason : m_failures) {
            std::cout << "\t - " << reason << '\n';
        }
    }
}
