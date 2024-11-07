#define NDEBUG
#ifndef NDEBUG

// * RUN MAIN APPLICATION *

#include "Board.h"
#include "UserInput.h"

#include <iostream>

int main()
{
    Board board {};
    std::cout << board;

    while (true)
    {
        char input { UserInput::getInput() };
        std::cout << "Valid command: " << input << '\n';

        if (input == 'q') break;
    }

    std::cout << "\n\nBye!\n\n";

    return 0;
}

#else

// * RUN TEST SUITE *

#include "testing/Suite.h"
int main()
{
    Testing::runTests();
    return 0;
}

#endif
