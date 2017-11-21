//============================================================================
// Name        : main.h
// Author      : Joe Do
// Version     : 1.0
// Date        : November 12, 2017
// Copyright   : Your copyright notice
// Description : use this main method to test LinkedStack.h implementation
//============================================================================

#include "LinkedStack.h"

LinkedStack<int> s;
int main() {
  cout << "Enter 4 number: ";
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  s.push(a);
  s.push(b);
  s.push(c);
  s.push(d);

  cout <<"Stack size is: "<< s.size() << endl; // test stack size

  cout << "Top item of the stack is: " << s.stop() << endl; // test printing the top item of a stack

  cout << "Pop the top item: " << s.pop() << endl; // test popping item at the top of the Stack

  cout << "The top item is now: " << s.stop() << endl;

  return 0;
}
