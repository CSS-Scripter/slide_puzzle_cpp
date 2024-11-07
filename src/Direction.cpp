#include "Direction.h"

#include <iostream>
#include <string_view>

std::string_view Direction::getTypeAsString() const
{
    switch (m_type)
    {
        case Direction::up:     return "up";
        case Direction::right:  return "right";
        case Direction::down:   return "down";
        case Direction::left:   return "left";

        default:                return "???";
    }
}

Direction& Direction::operator- ()
{
    m_type = static_cast<Direction::Type>((m_type + 2) % max_directions);
    return *this;
}

bool Direction::operator== (Direction x)
{
    return x.getType() == getType();
}

std::ostream& operator<< (std::ostream& out, const Direction& direction) {
    out << direction.getTypeAsString();
    return out;
}
