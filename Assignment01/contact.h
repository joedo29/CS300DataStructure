///*
// * contact.h
// *
// *  Created on: Oct 4, 2017
// *      Author: joedo
// */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
#ifndef CONTACT_H_
#define CONTACT_H_

class contact{
public:
	// Default Constructor
	contact();

	string first;
	string last;
	string phone;

	// Overload constructor
	contact(string, string, string);

}; // closes contact class




#endif /* CONTACT_H_ */
