/***********************************************************************
 * Header File:
 *    BOARD: Keep track of the board 
 ************************************************************************/

#pragma once

#include <set>
//#include "position.h"      include any class that is an attribute 
//#include "pieceType.h"     A piece type

// class MoveTest;     include test classes 

/***************************************************
 * BOARD 
 ***************************************************/
class Board
{
public:
    // friend MoveTest;     if needs a test class 

    Board() {
        char board[64] = { 
                'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r',
                'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p',
                ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
                'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P',
                'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'
            };
    }

    // getBoard() return board 

private:
    // array of 64 chars 

};