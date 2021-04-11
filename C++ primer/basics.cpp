#include <cstdlib>
#include <iostream>
/* This program inputs two numbers x and y and outputs their sum */
int main( ) {
  int x,y;
  std::cout << "Please enter two number";
  std::cin >> x >> y;
  int  s = x+y;
  std::cout << "Their sum is: " << s << std::endl;
  return EXIT_SUCCESS;

}
