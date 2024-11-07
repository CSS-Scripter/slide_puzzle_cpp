#ifndef DIRECTION_H
#define DIRECTION_H

#include <iostream>
#include <string_view>

class Direction
{
public:
    enum Type {
        up,
        right,
        down,
        left,

        max_directions,
    };

private:
    Type m_type { };

public:
    Direction(Type type)
    : m_type { type }
    {};

    Type getType() const { return m_type; };
    std::string_view getTypeAsString() const;

    Direction& operator- ();
    bool operator== (Direction x);
};

// Forward declare non-friend << operator
std::ostream& operator<< (std::ostream& out, const Direction& direction);

#endif
