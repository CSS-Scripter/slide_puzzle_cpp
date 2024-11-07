#ifndef TILE_H
#define TILE_H

#include <iostream>

class Tile
{
private:
    int m_value { };

public:
    Tile(int value): m_value { value } {};

    bool isEmpty() const;
    int  getNum()  const;
};

std::ostream& operator<< (std::ostream& out, const Tile& tile);

#endif
