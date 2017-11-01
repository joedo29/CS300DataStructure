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

	// Overload constructor with two items
	Passenger(string first, string last){
		this -> first = first;
		this -> last = last;
	}

	// Overload constructor with four items
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
		// FATMA SERCE [12345 SE 48th St Issaquah WA] [ +14251234567]
		os << c.first << " " << c.last << " [" << c.address << "]" << " " << "[+1" << c.phone << "]";
		return os;
	}

	friend bool operator< (const Passenger& a, const Passenger& b){
		return a.last < b.last;
	}

	friend bool operator> (const Passenger& a, const Passenger& b){
		return a.last > b.last;
	}

	friend bool operator== (const Passenger& a, const Passenger& b){
		return a.first + a.last == b.first + b.last;
	}

}; // closes contact class


#endif /* PASSENGER_H_ */
