//============================================================================
// Name        : LinkedStack.h
// Author      : Joe Do
// Version     : 1.0
// Date        : November 20, 2017
// Copyright   : Your copyright notice
// Description : implement a Stack using LinkedList data structure
//============================================================================
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>
#include <assert.h>

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
     void push(T&);
     T pop();
     int size() const;
     bool isEmpty();
     T stop();
     void destroy();
   protected:
     int _size = 0;

};



// This method will check whether a stack isEmpty
template <class T>
bool LinkedStack<T>::isEmpty(){
  return top == 0;
}


// This method will return the stack size
template <class T>
int LinkedStack<T> ::size() const{
  return _size;
}


// This method allows users to add item into a stack
template <class T>
void LinkedStack<T>::push(T& item){
  node<T> *p;
  p = new node<T>;
  p->data = item;
  p->next = NULL;
  if(top != NULL)
    p->next = top;
  top = p;
  _size++;
}


// this method will display an item at the top of a stack without deleting it
template <class T>
T LinkedStack<T>::stop(){
   assert(!isEmpty() && "Whoops, it looks like the stack is empty");
   if(!isEmpty()){
     node<T> *p;
     p = top;
     return p->data;
     delete p;
   }
}

// This method will return and remove an item at top of a stack
template <class T>
T LinkedStack<T>::pop(){
  assert(!isEmpty() && "Looks like the stap is empty" );
  node<T> *p;
  p = top;
  top = top->next;
  return p->data;
  delete p;
  _size--;
}

// Destroy the stack
template <class T>
void LinkedStack<T>::destroy(){
  top = 0;
}


#endif /* LINKEDLIST_H_ */
