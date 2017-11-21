//============================================================================
// Name        : LinkedStack.h
// Author      : Joe Do
// Version     : 1.0
// Date        : November 15, 2017
// Copyright   : Your copyright notice
// Description : Please write a C++ program that reads two very large numbers from the user as two string inputs, and add these two large numbers.
//============================================================================

#include "LinkedStack.h"

int main(){
  LinkedStack<int> s1; // stores fist number
  LinkedStack<int> s2; // stores second number
  LinkedStack<int> sum; // stores sum of two numbers

  cout << "Enter a very large number: ";
  string first;
  cin >> first;

  cout << "Enter a very large number: ";
  string second;
  cin >> second;


  // check to make sure s1 is always larger than or equal to s2
  // Add the larger number to s1 and smaller number to s2
  if(first.length() >= second.length()){
    for(char &c: first){
      int i = c-'0';
      s1.push(i);
    }

    for(char &c: second){
      int i = c-'0';
      s2.push(i);
    }

  }
  else{ // if second number is larger, add to s1
    for(char &c: second){
      int i = c-'0';
      s1.push(i);
    }

    for(char &c: first){
      int i = c-'0';
      s2.push(i);
    }
  }

// Begin doing the computation
  int a1, a2;
  int remain = 0;
  while(!s2.isEmpty()){
    a1 = s1.pop();
    a2 = s2.pop();
    if((a1 + a2) <= 9){
      if((a1 + a2 + remain) > 9){
        int n = (a1 + a2 + remain) % 10;
        sum.push(n);
        remain = 1;
      } else{
        int m = (a1 + a2 + remain);
        sum.push(m);
        remain = 0;
      }
    }

    else{
      int x = ((a1 + a2) % 10 + remain);
      sum.push(x);
      remain = 1;
    }
  }

  while(!s1.isEmpty()){ // add the remaining number from the larger Stack
    a1 = s1.pop();
    if((a1 + remain) > 9){
      int x = (a1 + remain) % 10;
      sum.push(x);
      remain = 1;
    } else{
      int x = a1 + remain;
      sum.push(x);
      remain = 0;
    }
  }

  if(remain==1)
    sum.push(remain);

  cout << "Sum = ";

  // Print out final result from sum stack
  while(!sum.isEmpty()){
    int v = sum.pop();
    cout << v;
  }

} 
