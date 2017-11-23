/*
* contact.h
*
*  Created on: Nov 23, 2017
*      Author: joedo
*/

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
#ifndef CONTACT_H_
#define CONTACT_H_

class contact{
public:
    string first;
    string last;
    string phone;

    // Default Constructor
    contact(){}

    // Overload constructor
    contact(string first, string last){
    	   this -> first = first;
    	   this -> last = last;
    }

    // Overload constructor
    contact(string first, string last, string phone){
    	   this -> first = first;
    	   this -> last = last;
    	   this -> phone = phone;
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

	const string& getPhone() const {
		return phone;
	}

	void setPhone(const string& phone) {
		this->phone = phone;
	}

	friend ostream & operator << (ostream & os, contact & c){
		os << c.first << " " << c.last << " " << c.phone;
		return os;
	}

  friend bool operator< (const contact& a, const contact& b){
    return a.last < b.last;
  }

  friend bool operator> (const contact& a, const contact& b){
    return a.last > b.last;
  }

  friend bool operator== (const contact& a, const contact& b){
    return a.first + a.last == b.first + b.last;
  }
}; // closes contact class


#endif /* CONTACT_H_ */
