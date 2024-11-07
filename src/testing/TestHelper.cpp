#include "TestHelper.h"
#include "Result.h"

#include <iostream>

bool TestHelper::runTestWithName(std::string_view name, TestHelper::TestFunction testFunc)
{
    std::cout << "\trunning test " << name << ": ";
    Result result { testFunc() };
    result.print();
    return result.getSuccess();
};
