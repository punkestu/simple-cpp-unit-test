#include "test.h"

bool Test::istrue(bool thing){
      if(thing){
            std::cout<<"pass : its true"<<std::endl;
            std::cout<<std::endl;
            return true;
      }else{
            std::cout<<"not pass : its false"<<std::endl;
            std::cout<<std::endl;
            return false;
      }
}

bool Test::isfalse(bool thing){
      if(!thing){
            std::cout<<"pass : its false"<<std::endl;
            std::cout<<std::endl;
            return true;
      }else{
            std::cout<<"not pass : its true"<<std::endl;
            std::cout<<std::endl;
            return false;
      }
}

void Test::tester(void(*f)()){
      f();
}