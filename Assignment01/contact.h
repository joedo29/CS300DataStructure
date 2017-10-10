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
    string first;
    string last;
    string phone;

    // Default Constructor
    contact();

    // Overload constructor
    contact(string, string, string);

    const string &getFirst() const;

    void setFirst(const string &first);

    const string &getLast() const;

    void setLast(const string &last);

    const string &getPhone() const;

    void setPhone(const string &phone);

    void arrayOfContact();

    void print(contact contact1);

    void contactLookup(string lookup);

}; // closes contact class




#endif /* CONTACT_H_ */
