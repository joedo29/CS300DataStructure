//============================================================================
// Name        : LinkedStack.h
// Author      : Joe Do
// Version     : 1.0
// Date        : November 12, 2017
// Copyright   : Your copyright notice
// Description : implement a Stack using LinkedList data structure
//============================================================================
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

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
     T pop(); // delete item at the top of the Stack
     // bool isFull();
     bool isEmpty();
     // T stop();
     // void destroy();
     // void copy(LinkedStack<T>&);
     // ~LinkedStack();

};

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


template <class T>
T LinkedStack<T>::pop(){
  node<T> *p;
  // if(top == NULL)
  //   return "";
  p = top;
  top = top->next;
  return p->data;
  delete p;

}


template <class T>
bool LinkedStack<T>::isEmpty(){
  return top == 0;
}

#endif /* LINKEDLIST_H_ */
