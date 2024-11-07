#ifndef BOARD_H
#define BOARD_H

#include "Tile.h"

#include <iostream>

class Board
{
private:
    static constexpr int s_size { 4 };
    Tile m_tiles[s_size][s_size] {
        {{15}, {14}, {13}, {12}},
        {{11}, {10}, {9 }, {8 }},
        {{7 }, {6 }, {5 }, {4 }},
        {{3 }, {2 }, {1 }, {0 }},
    };

public:
    friend std::ostream& operator<< (std::ostream& out, const Board& board);
};

#endif
