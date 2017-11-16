//============================================================================
// Name        : BarberShop.cpp
// Author      : Joe Do
// Version     : 1.0
// Date        : November 12, 217
// Copyright   : Your copyright notice
// Description : use two stacks to implement this program, and I cannot use any other data structure
// Explain your algorithm: addCustomer will simply add customer to the first stack s1
// nextCustomer will first check to see if stack s2 isEmpty. If it does, transfer all customer from s1 to s2
// When calling nextCustomer and stack s2 !isEmpty, simply pop out the top value of the stack.
//============================================================================

#include "LinkedStack.h"
#include "Customer.h"

class BarberShop{
  LinkedStack<Customer> s1;
  LinkedStack<Customer> s2;
public:
  void addCustomer(Customer&);
  Customer nextCustomer();
};
void BarberShop::addCustomer(Customer& customer){
//write your code here
  s1.push(customer);

}
Customer BarberShop::nextCustomer(){
//write your code here
  if(!s2.isEmpty())
    return s2.pop();

  else{ // s2 isEmpty
    while(!s1.isEmpty()){
      Customer c = s1.pop();
      s2.push(c);
    }
    return s2.pop();
  }
}
