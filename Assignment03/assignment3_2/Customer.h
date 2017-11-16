//============================================================================
// Name        : Customer.h
// Author      : Joe Do
// Version     : 1.0
// Date        : November 12, 2017
// Copyright   : Your copyright notice
// Description : create a customer class that stores first and last name and print out the full name
//============================================================================

#include <iostream>

using namespace std;
#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer{
public:
  string first;
  string last;

    // Default Constructor
  Customer(){}

    // Overload constructor
  Customer(string first, string last){
    this->first = first;
    this->last = last;
  }

  const string& getFirst() const {
		    return first;
  }

  void setFirst(const string& first) {
		this->first = first;
	}

	const string& getLast() const {
		return last;
	}

	void setLast(const string& last) {
		this->last = last;
	}

  string getName(){
    return this->first + " " + this->last;
  }

};
#endif /* CUSTOMER_H_ */
