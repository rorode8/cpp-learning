#include <cstdlib>
#include <iostream>
/* This program inputs two numbers x and y and outputs their sum */

enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };
enum Mood { HAPPY = 3, SAD = 1, ANXIOUS = 4, SLEEPY = 2 };

int main( ) {
  /*

  int x,y;
  std::cout << "Please enter two number";
  std::cin >> x >> y;
  int  s = x+y;
  std::cout << "Their sum is: " << s << std::endl;
  Mood today = HAPPY;
  Mood yesterday = SAD;
  if(today > yesterday){
    std::cout << yesterday << "\n";
  }else{
    std::cout << today << "\n";
  }
  return EXIT_SUCCESS;
  */


  char ch = 'Q';
  char* p = &ch; // p holds the address of ch
  std::cout << *p; // outputs the character ’Q’
  ch = 'Z'; // ch now holds ’Z’
  std::cout << *p; // outputs the character ’Z’
  *p = 'X'; // ch now holds ’X’
  std::cout << ch; // outputs the character ’X’

}
