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
	assert(moves == {});

	//TEARDOWN
	board.reset();
}

void PawnTest::getMoves_simple()
{
	//SETUP
	Board board;

	//white pawn b4
	Pawn pawn;
	pawn.ifWhite = true;
	pawn.position = "25"; //b4
	board.assign(pawn);

	//EXERCISE
	vector<string> moves = Pawn::getMoves(board);

	//VERIFY
	assert(moves == {"b4b5"});

	//TEARDOWN
	board.reset();
}

void PawnTest::getMoves_initial()
{
	//SETUP
	Board board;

	//white pawn b2
	Pawn pawn;
	pawn.ifWhite = true;
	pawn.position = "9"; //b2
	board.assign(pawn);

	//EXERCISE
	vector<string> moves = Pawn::getMoves(board);

	//VERIFY
	assert(moves == {"b2b3","b2b4"});

	//TEARDOWN
	board.reset();
}

void PawnTest::getMoves_capture()
{
	//SETUP
	Board board;

	//white pawn b6
	Pawn pawn;
	pawn.ifWhite = true;
	pawn.position = "41"; //b6
	board.assign(pawn);

	//black pawn a7, b7, c7
	Pawn pawn2;
	pawn2.ifWhite = false;
	pawn2.position = "48"; //a7
	board.assign(pawn2);

	Pawn pawn3;
	pawn3.ifWhite = false;
	pawn3.position = "49"; //b7
	board.assign(pawn3);

	Pawn pawn4;
	pawn4.ifWhite = false;
	pawn4.position = "50"; //c7
	board.assign(pawn4);

	//EXERCISE
	vector<string> moves = Pawn::getMoves(board);

	//VERIFY
	assert(moves == {"b6a7p","b6c7p"});

	//TEARDOWN
	board.reset();
}

void PawnTest::getMoves_enpassant()
{
	//SETUP
	Board board;

	//white pawn b5
	Pawn pawn;
	pawn.ifWhite = true;
	pawn.position = "33"; //b5
	board.assign(pawn);
	
	//black pawn b6
	Pawn pawn2;
	pawn2.ifWhite = false;
	pawn2.position = "41"; //b6
	board.assign(pawn2);

	//black pawn a6, c6 lastmove = 1 
	Pawn pawn3;
	pawn3.ifWhite = false;
	pawn3.position = "40"; // a6
	pawn3.lastMove = 1;
	board.assign(pawn3);

	Pawn pawn4;
	pawn4.ifWhite = false;
	pawn4.position = "42"; // c6
	pawn4.lastMove = 1;
	board.assign(pawn4);

	//EXERCISE
	vector<string> moves = Pawn::getMoves(board);

	//VERIFY
	assert(moves == {"b5c6E","b5a6E"});

	//TEARDOWN
	board.reset();
}

void PawnTest::getMoves_promotion()
{
	//SETUP
	Board board;

	//white pawn b7
	Pawn pawn;
	pawn.ifWhite = true;
	pawn.position = "49"; //b7
	board.assign(pawn);

	//EXERCISE
	vector<string> moves = Pawn::getMoves(board);

	//VERIFY
	assert(moves == {"b7b8Q"});

	//TEARDOWN
	board.reset();
}
