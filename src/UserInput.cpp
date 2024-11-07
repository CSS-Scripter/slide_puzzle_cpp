#include "UserInput.h"

#include <iostream>
#include <limits>

bool UserInput::isValidInput(char c)
{
    return (c == 'w') ||
           (c == 'a') ||
           (c == 's') ||
           (c == 'd') ||
           (c == 'q');
}

void UserInput::clearInput()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

char UserInput::getInput()
{
    while (true)
    {
        char input { };
        std::cin >> input;
        clearInput();
        if (isValidInput(input)) return input;
    }
}
