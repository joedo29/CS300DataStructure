/*
 * Passenger.h
 *
 *  Created on: Oct 20, 2017
 *      Author: joedo
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Passenger{
public:
	string first;
	string last;
	string phone;
	string address;

	// Default Constructor
	Passenger(){}

	// Overload constructor
	Passenger(string first, string last, string phone, string address){
		this -> first = first;
		this -> last = last;
		this -> phone = phone;
		this -> address = address;
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

	const string& getAddress() const {
		return address;
	}

	void setAddress(const string& address) {
		this->address = address;
	}

	friend ostream & operator << (ostream & os, Passenger & c){
		os << c.first << endl << c.last << endl << c.address << endl << c.phone;
		return os;
	}
}; // closes contact class


#endif /* PASSENGER_H_ */
