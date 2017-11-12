//============================================================================
// Name        : LinkedStack.h
// Author      : Joe Do
// Version     : 1.0
// Date        : November 12, 2017
// Copyright   : Your copyright notice
// Description : implement a Stack using LinkedList data structure
//============================================================================

#include <iostream>
using namespace std;

template <class T>
struct node{
    T data;
    node<T>* next;
};

template <class T>
class LinkedStack{
      node<T> *top;
   public:
     LinkedStack(){
       top = NULL;
     }
     void push(T&); // insert item into Stack
     void pop(); // delete item at the top of the Stack
     // bool isFull();
     // bool isEmpty();
     // T stop();
     // void destroy();
     // void copy(LinkedStack<T>&);
     // ~LinkedStack();

};

// Begin push implementation
template <class T>
void LinkedStack<T>::push(T& item){
  node<T> *p;
  p = new node<T>;
  p->data = item;
  p->next = NULL;
  if(top != NULL)
    p->next = top;
  top = p;
}
// finished push implementation

// Begin pop implementation
template <class T>
void LinkedStack<T>::pop(){
  node<T> *p;
  if(top == NULL)
    cout << "Stack is empty";
  p = top;
  top = top->next;
  cout << p->data;
  delete p;
}
// finished pop implementation
