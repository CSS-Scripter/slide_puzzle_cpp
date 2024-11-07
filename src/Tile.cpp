#include "Tile.h"

#include <iostream>

bool Tile::isEmpty() const { return m_value == 0; };
int  Tile::getNum()  const { return m_value; };

std::ostream& operator<< (std::ostream& out, const Tile& tile) {
    if (tile.getNum() > 9) // if two digit number
        out << " " << tile.getNum() << " ";
    else if (tile.getNum() > 0) // if one digit number
        out << "  " << tile.getNum() << " ";
    else if (tile.getNum() == 0) // if empty spot
        out << "    ";
    return out;
}
