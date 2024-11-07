#ifndef TEST_HELPER_H
#define TEST_HELPER_H

#include "Result.h"

#include <functional>
#include <string_view>

namespace TestHelper {
    using TestFunction = std::function<Result()>;
    bool runTestWithName(std::string_view name, TestFunction testFunc);
};

#endif
