#include "Direction_test.h"
#include "TestHelper.h"
#include "Result.h"
#include "../Direction.h"

#include <iostream>

Result testNegativeTurnaryOperator() {
    Result result { };
    result.assert(-Direction{ Direction::up    }, Direction{ Direction::down  });
    result.assert(-Direction{ Direction::right }, Direction{ Direction::left  });
    result.assert(-Direction{ Direction::down  }, Direction{ Direction::up    });
    result.assert(-Direction{ Direction::left  }, Direction{ Direction::right });

    return result;
};

bool DirectionTest::runTests() {
    bool success { true };

    success &= TestHelper::runTestWithName("Negative Turnary Operator", testNegativeTurnaryOperator);

    return success;
};
