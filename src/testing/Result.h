#ifndef RESULT_H
#define RESULT_H

#include <vector>
#include <string>
#include <sstream>
#include <type_traits>

class Result
{
private:
    bool m_passed { true };
    std::vector<std::string> m_failures { };

public:
    Result() = default;

    template <typename T>
    void assert(T actual, T expected)
    {
        if (expected == actual) return;

        m_passed = false;

        std::ostringstream reason;
        reason << "expected '" << toString(expected) << "' but got '" << toString(actual) << '\'';
        m_failures.push_back(reason.str());
    }

    void print();
    bool getSuccess() { return m_passed; };

private:
    template <typename T>
    std::string toString(const T& value)
    {
        if constexpr (std::is_same_v<T, std::string> || std::is_same_v<T, const char*>)
        {
            return value;
        }
        else if constexpr (std::is_arithmetic_v<T>)
        {
            return std::to_string(value);
        }
        else
        {
            std::ostringstream oss;
            oss << value;
            return oss.str();
        }
    }
};

#endif
