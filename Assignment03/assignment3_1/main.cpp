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
  cout << "Enter 3 number: ";
  int a, b, c;
  cin >> a >> b >> c;
  s.push(a);
  s.push(b);
  s.push(c);
  s.pop();
  s.pop();
  s.pop();

  return 0;
}
