#ifndef TEST___H
#define TEST___H

#include <iostream>

namespace Test{
      bool istrue(bool thing);
      bool isfalse(bool thing);
      void tester(void(*f)());
      
      template<typename T>
      bool expectate(T thing, T expect){
            if(thing == expect){
                  std::cout<<"expect : |"<<expect<<"| <equal with> value : |";
                  std::cout<<thing<<"| >> pass"<<std::endl;
                  std::cout<<std::endl;
                  return true;
            }else{
                  std::cout<<"expect : |"<<expect<<"| <not equal with> value : |";
                  std::cout<<thing<<"| >> not pass"<<std::endl;
                  std::cout<<std::endl;
                  return false;
            }
      }

      void call();
} // namespace test

#endif