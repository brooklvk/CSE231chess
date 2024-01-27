/***********************************************************************
 * Source File:
 *    Pawn Test : Unit tests for Pawn
 ************************************************************************/

#include "testPawn.h" // for PAWN_TEST
#include "pawn.h"     // for PAWN
#include "board.h"	// for BOARD
#include <cassert>        // for ASSERT

void PawnTest::getMoves_blocked()
{
	//SETUP
	Board board;

	//white pawn d4, black pawn d5 
	Pawn pawn;
	pawn.ifWhite = true;
	pawn.position = "27"; // d4
	board.assign(pawn);
	
	Pawn pawn2;
	pawn2.ifWhite = false;
	pawn.position = "35"; //d5 
	board.assign(pawn2);

	//EXERCISE
	vector<string> moves = Pawn::getMoves(board);

	//VERIFY
	assert(moves == { });

	//TEARDOWN
	board.reset();
}

void PawnTest::getMoves_simple()
{
	//SETUP

	//EXERCISE

	//VERIFY

	//TEARDOWN

}

void PawnTest::getMoves_initial()
{
	//SETUP

	//EXERCISE

	//VERIFY

	//TEARDOWN

}

void PawnTest::getMoves_capture()
{
	//SETUP

	//EXERCISE

	//VERIFY

	//TEARDOWN

}

void PawnTest::getMoves_enpassant()
{
	//SETUP

	//EXERCISE

	//VERIFY

	//TEARDOWN

}

void PawnTest::getMoves_promotion()
{
	//SETUP

	//EXERCISE

	//VERIFY

	//TEARDOWN

}
