#include "cppunit/TestRegistry.h"
#include "cppunit/TextTestResult.h"
#include "cppunit/Test.h"

#include "BoardGame.h"
#include "Chess.h"

#include "BoardGameTest.h"
#include "ChessTest.h"


#include <vector>
#include <iostream>


BoardGameTest<BoardGame> bgt("BoardGameTest<BoardGame>");
ChessTest<Chess> ct("ChessTest<Chess>");


using namespace CppUnit;




int 
main(int argc, char** argv)
{
  TextTestResult res;

  vector<Test*> tests=TestRegistry::getRegistry().getAllTests();

  for(vector<Test*>::iterator it=tests.begin();
      it!=tests.end(); ++it) {
    
    (*it)->run(&res);

  }
  cout << res << endl;
  
  return 0;
}
