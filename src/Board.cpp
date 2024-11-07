#include "Board.h"

#include <iostream>

constexpr int g_consoleLinesToBottom { 40 };


std::ostream& operator<< (std::ostream& out, const Board& board)
{
    // Force board to bottom
    for (int i { 0 }; i < g_consoleLinesToBottom; ++i) out << '\n';

    // Print actual board
    for (auto& row : board.m_tiles) {
        for (auto& tile : row) out << tile;

        out << '\n';
    }
    return out;
}
