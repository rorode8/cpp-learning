
#include <iostream>


int main( ) {


  char ch = 'Q';
  char* pointer = &ch; // p holds the address of ch
  std::cout << *pointer; // outputs the character 'Q'
  ch = 'Z'; // ch now holds 'Z'
  std::cout << *pointer; // outputs the character 'Z'
  *pointer = 'X'; // ch now holds 'X'
  std::cout << ch; // outputs the character 'X'

  double f[5]; // array of 5 doubles: f[0], . . ., f[4]
  int m[10]; // array of 10 ints: m[0], . . ., m[9]
  f[4] = 2.5;
  m[2] = 4;
  std::cout << f[m[2]]; // outputs f[4], which is 2.5

  int a[ ] = {10, 11, 12, 13}; // declares and initializes a[4]
  bool b[ ] = {false, true}; // declares and initializes b[2]
  char chars[ ] = {'c', 'a', 't'}; // declares and initializes c[3]

  //pointers and arrays
  std::cout<<"\n";
  std::cout <<"Pointers and arrays: \n";
  char c[ ] = {'c', 'a', 't'};
  char* p = c; // p points to c[0]
  char* q = &c[0]; // q also points to c[0]
  std::cout << c[2] << p[2] << q[2]; // outputs “ttt”



}
