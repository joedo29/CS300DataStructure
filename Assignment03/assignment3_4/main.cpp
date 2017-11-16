//============================================================================
// Name        : main.cpp
// Author      : Joe Do
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Write a C++ program which reads a positive number from the user and
// displays the decimal digits of an integer in reverse order.
//============================================================================

#include <iostream>
#include "Stack.h"
#include <assert.h>
using namespace std;

// recursive method to convert a number
void reverseDigits(int i){
  if(i == 0) // base case
    cout << 0;

  if(i == 1) // base case
    cout << 1;

  if(i % 10 == i) // base case
    cout << i;

  else{
    cout << i % 10; // 256 % 10 = 6
    reverseDigits(i / 10); // 256 / 10 = 25
  }
} // closes reverseDigits method

// Non-recursive method
// void reverseDigits(string s){
//   Stack<char> numbers;
//
//   for (char & c : s)
//     numbers.push(c);
//
//   while(!numbers.isEmpty())
//     cout<<numbers.pop();
// }

int main() {
  int i;
  cout << "Enter a number: ";
  cin >> i;

  reverseDigits(i);
	return 0;
}
