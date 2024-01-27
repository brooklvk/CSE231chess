/***********************************************************************
 * Source File:
 *    King Test : Unit tests for King
 ************************************************************************/

#include "testKing.h" // for PIECE_TEST
#include "king.h"     // for PIECE
#include <cassert>        // for ASSERT

void KingTest::getMoves_free(){
	Board board;

	//white king e5
	King king;
	king.fWhite = true;
	king.position = "37"; // e5
	board.assign(king);

	//EXERCISE
	vector<string> moves = King::getMoves(board);

	//VERIFY
	assert(moves == { e5d6, e5e6, e5f6, e5d5, e5f5, e5d4, e5€4, e5f4 });

	//TEARDOWN
	board.reset();
};
void KingTest::getMoves_blocked() {
	Board board;

	//white king e5
	King king;
	king.fWhite = true;
	king.position = "37"; // e5
	board.assign(king);

    Pawn pawn1;
    pawn1.fWhite = true;
    pawn1.position = "44"; // f4
    board.assign(pawn1);

    Pawn pawn2;
    pawn2.fWhite = true;
    pawn2.position = "45"; // f5
    board.assign(pawn2);

    Pawn pawn3;
    pawn3.fWhite = true;
    pawn3.position = "46"; // f6
    board.assign(pawn3);

    Pawn pawn4;
    pawn4.fWhite = true;
    pawn4.position = "36"; // e4
    board.assign(pawn4);

    Pawn pawn5;
    pawn5.fWhite = true;
    pawn5.position = "38"; // e6
    board.assign(pawn5);

    Pawn pawn6;
    pawn6.fWhite = true;
    pawn6.position = "28"; // d4
    board.assign(pawn6);

    Pawn pawn7;
    pawn7.fWhite = true;
    pawn7.position = "29"; // d5
    board.assign(pawn7);

    Pawn pawn8;
    pawn8.fWhite = true;
    pawn8.position = "30"; // d6
    board.assign(pawn8);

	//EXERCISE
	vector<string> moves = King::getMoves(board);

	//VERIFY
	assert(moves == {});

	//TEARDOWN
	board.reset();
};
void KingTest::getMoves_capture() {
    Board board;

    //white king e5
    King king;
    king.fWhite = true;
    king.position = "37"; // e5
    board.assign(king);

    Pawn pawn1;
    pawn1.fWhite = false;
    pawn1.position = "44"; // f4
    board.assign(pawn1);

    Pawn pawn2;
    pawn2.fWhite = false;
    pawn2.position = "45"; // f5
    board.assign(pawn2);

    Pawn pawn3;
    pawn3.fWhite = false;
    pawn3.position = "46"; // f6
    board.assign(pawn3);

    Pawn pawn4;
    pawn4.fWhite = false;
    pawn4.position = "36"; // e4
    board.assign(pawn4);

    Pawn pawn5;
    pawn5.fWhite = false;
    pawn5.position = "38"; // e6
    board.assign(pawn5);

    Pawn pawn6;
    pawn6.fWhite = false;
    pawn6.position = "28"; // d4
    board.assign(pawn6);

    Pawn pawn7;
    pawn7.fWhite = false;
    pawn7.position = "29"; // d5
    board.assign(pawn7);

    Pawn pawn8;
    pawn8.fWhite = false;
    pawn8.position = "30"; // d6
    board.assign(pawn8);

    //EXERCISE
    vector<string> moves = King::getMoves(board);

    //VERIFY
    assert(moves == {e5d6p, e5e6, e5f6p, e5d5p, e5f5p, e5d4p, e5e4p, e5f4p});

    //TEARDOWN
    board.reset();
};
void KingTest::getMoves_castle_king_moved() {
    Board board;

    //white king e1
    King king;
    king.fWhite = true;
    king.nMoves = 1;
    king.position = "5"; // e1
    board.assign(king);

    Pawn pawn1;
    pawn1.fWhite = true;
    pawn1.position = "12"; // d2
    board.assign(pawn1);

    Pawn pawn2;
    pawn2.fWhite = true;
    pawn2.position = "13"; // e2
    board.assign(pawn2);

    Pawn pawn3;
    pawn3.fWhite = true;
    pawn3.position = "14"; // f2
    board.assign(pawn3);

    Rook rook1;
    rook1.fWhite = true;
    rook1.position = "1"; // a1
    board.assign(rook1);

    Rook rook2;
    rook2.fWhite = true;
    rook2.position = "8"; // h1
    board.assign(rook2);

    //EXERCISE
    vector<string> moves = King::getMoves(board);

    //VERIFY
    assert(moves == { e1f1, eld1 });

    //TEARDOWN
    board.reset();
};
void KingTest::getMoves_castle_rook_moved() {
    Board board;

    //white king e1
    King king;
    king.fWhite = true;
    king.position = "5"; // e1
    board.assign(king);

    Pawn pawn1;
    pawn1.fWhite = true;
    pawn1.position = "12"; // d2
    board.assign(pawn1);

    Pawn pawn2;
    pawn2.fWhite = true;
    pawn2.position = "13"; // e2
    board.assign(pawn2);

    Pawn pawn3;
    pawn3.fWhite = true;
    pawn3.position = "14"; // f2
    board.assign(pawn3);

    Rook rook1;
    rook1.fWhite = true;
    rook1.nMoves = 1;
    rook1.position = "1"; // a1
    board.assign(rook1);

    Rook rook2;
    rook2.fWhite = true;
    rook2.nMoves = 1;
    rook2.position = "8"; // h1
    board.assign(rook2);

    //EXERCISE
    vector<string> moves = King::getMoves(board);

    //VERIFY
    assert(moves == { e1f1, eld1 });

    //TEARDOWN
    board.reset();
};
void KingTest::getMoves_castle_blocked() {
    Board board;

    //white king e1
    King king;
    king.fWhite = true;
    king.position = "5"; // e1
    board.assign(king);

    Pawn pawn1;
    pawn1.fWhite = true;
    pawn1.position = "12"; // d2
    board.assign(pawn1);

    Pawn pawn2;
    pawn2.fWhite = true;
    pawn2.position = "13"; // e2
    board.assign(pawn2);

    Pawn pawn3;
    pawn3.fWhite = true;
    pawn3.position = "14"; // f2
    board.assign(pawn3);

    Pawn pawn4;
    pawn4.fWhite = true;
    pawn4.position = "2"; // b1
    board.assign(pawn4);

    Pawn pawn5;
    pawn5.fWhite = true;
    pawn5.position = "7"; // g1
    board.assign(pawn5);

    Rook rook1;
    rook1.fWhite = true;
    rook1.position = "1"; // a1
    board.assign(rook1);

    Rook rook2;
    rook2.fWhite = true;
    rook2.position = "8"; // h1
    board.assign(rook2);

    //EXERCISE
    vector<string> moves = King::getMoves(board);

    //VERIFY
    assert(moves == { e1f1, eld1 });

    //TEARDOWN
    board.reset();
};
void KingTest::getMoves_castle() {
    Board board;

    //white king e1
    King king;
    king.fWhite = true;
    king.position = "5"; // e1
    board.assign(king);

    Pawn pawn1;
    pawn1.fWhite = true;
    pawn1.position = "12"; // d2
    board.assign(pawn1);

    Pawn pawn2;
    pawn2.fWhite = true;
    pawn2.position = "13"; // e2
    board.assign(pawn2);

    Pawn pawn3;
    pawn3.fWhite = true;
    pawn3.position = "14"; // f2
    board.assign(pawn3);

    Rook rook1;
    rook1.fWhite = true;
    rook1.position = "1"; // a1
    board.assign(rook1);

    Rook rook2;
    rook2.fWhite = true;
    rook2.position = "8"; // h1
    board.assign(rook2);

    //EXERCISE
    vector<string> moves = King::getMoves(board);

    //VERIFY
    assert(moves == { elf1, eld1, e1g1c, e1c1C });

    //TEARDOWN
    board.reset();
};