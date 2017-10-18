/*
 * Assignment01.cpp
 *
 *  Created on: Oct 4, 2017
 *      Author: Joe Do
 *      Purpose of this assignment is to create a phonebook program that allows
 *      users to search, delete, add, and view a list of all contacts.
 */

#include "contact.h"


using namespace std;

contact *phonebook;
int arraySize = 302850;
int n = 0;

void deleteContact(){
	cout << "Enter First and Last Name: ";
	string first, last;
	cin >> first >> last;

	for (int i = 0; i < arraySize; i++){
		if(phonebook[i].first == first && phonebook[i].last == last){
			phonebook[i].first = "";
			phonebook[i].last = "";
			phonebook[i].phone = "";
			cout << "This contact has been deleted!" << endl;
			break;
		}

	} // closes for loop

} // deleteContact

void addContact(){
	cout << "Enter First and Last Name: ";
	string first, last, phone;
	cin >> first >> last;
	cout << "Enter Phone: ";
	cin >> phone;

	//	 CODE BELOW PREVENTS USERS FROM ADDING EXISTING CONTACT
	for (int i = 0; i < arraySize; i++){
		if(phonebook[i].first == first && phonebook[i].last == last){
			cout << "Contact already exist!";
			break;
		} else{
			phonebook[n].first = first;
			phonebook[n].last = last;
			phonebook[n].phone = phone;
			cout << "This contact has been added!" << endl;
			n ++;
			break;
		}
	}

} // closes addContact method

string searchContact(){
	cout << "Enter First and Last Name: ";
	string first, last;
	cin >> first >> last;

	for (int i = 0; i < n; i++){
		if(phonebook[i].first == first && phonebook[i].last == last){
			return "Phone Number: " + phonebook[i].phone;
		}
	}
	return "Contact not found!";
} // closes searchContact method

void loadContact() { // load all contacts to array phonebook
	//int n = 0;
	ifstream file;
	file.open("phonebook.txt");
	string first;
	string last;
	string phone;
	while (!file.eof()) {
		file >> first;
		file >> last;
		file >> phone;

		phonebook[n].first = first;
		phonebook[n].last = last;
		phonebook[n].phone = phone;

		n++; // increment array index by one
	} // closes while loop
} // closes loadContact method

void contactList() {
	int x = 0;
	for (int i = 0; i < n; i++){
		cout<< phonebook[i] << endl;
	}

} // closes contactList method


int main (){

	phonebook = new contact[arraySize];

	loadContact();

	cout << "*** MY PHONE BOOK APPLICATION ***" << endl;
	cout << "Please choose an operation:" << endl;

	string input;
	bool check = 1;

	while(check){
		cout << "A(Add) | S(Search) | D(Delete) | L(List) | Q(Quit): ";
		cin >> input;

		if(input == "L" || input == "l"){
			contactList();
		}

		if(input == "Q" || input == "q"){
			cout << "THANK YOU!";
			check = 0;
		}

		if(input == "s" || input == "S"){
			cout << searchContact();
			cout << endl;
		}

		if (input == "a" || input == "A"){
			addContact();
		}

		if(input == "d" || input == "D"){
			deleteContact();
		}

	}

	return 0;

} // CLOSES MAIN
