
/***********************************************************************
 * Source File:
 *    Test Runner 
 ************************************************************************/

#include "testRunner.h"		// for RunTest 
#include "testMove.h"	// for MOVE_TEST
#include "testPosition.h"	// for POSITION_TEST 
#include "testPawn.h" // for PAWN_TEST
#include "testKing.h"     // for KING_TEST
#include <cassert>        // for ASSERT

void RunTest::run()
{
	MoveTest move;
	move.run();

	PositionTest position;
	position.run();

	PawnTest pawn;
	pawn.run();

	KingTest king;
	king.run();
}