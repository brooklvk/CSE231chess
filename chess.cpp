/***********************************************

Main Chess game runner.
Modified from the original chess.cpp written by Br. Helfrich.

************************************************/

using namespace std;

#include "uiInteract.h"   // for Interface
#include "uiDraw.h"       // for draw*
#include <set>            // for STD::SET
#include <cassert>        // for ASSERT
#include <fstream>        // for IFSTREAM
#include <string>         // for STRING
#include <iostream>       
#include "testRunner.h"	  // for unit tests 

int main() {
    // run all unit tests 
    RunTest test;
    test.run();
    cout << "All tests passed.";

    return 0;
}