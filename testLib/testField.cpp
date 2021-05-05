//you just need to edit in this file

#include "test.h"
//write your test at here
//-----------------------

int getHalf(int value){//example
      return value/2;
}

void test(){//you need to pass this test function into tester
      Test::expectate(getHalf(2),1);
}
//

void Test::call(){
      //tester(your test);
      tester(test);//call it here
}