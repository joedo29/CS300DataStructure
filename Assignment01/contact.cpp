/*
 * contact.cpp
 *
 *  Created on: Oct 4, 2017
 *      Author: joedo
 */

#include "contact.h"

contact::contact(){

}
contact::contact (string _first, string _last, string _phone){
	first = _first;
	last = _last;
	phone = _phone;
}

const string &contact::getFirst() const {
    return first;
}

void contact::setFirst(const string &first) {
    contact::first = first;
}

const string &contact::getLast() const {
    return last;
}

void contact::setLast(const string &last) {
    contact::last = last;
}

const string &contact::getPhone() const {
    return phone;
}

void contact::setPhone(const string &phone) {
    contact::phone = phone;
}

void print(contact contact1) {
    cout << contact1.getFirst() << " " << contact1.getLast() << " "<< contact1.getPhone() << endl;
}

void arrayOfContact();