/*
 * Assignment01.cpp
 *
 *  Created on: Oct 4, 2017
 *      Author: Joe Do
 *      Purpose of this assignment is to create a phonebook program that allows
 *      users to search, delete, add, and view a list of all contacts.
 */


#include <sstream>
#include "contact.h"


using namespace std;

contact* phonebook;
int arraySize = 0;

void deleteContact(){
	cout << "Enter Name: ";
	string first, last;
	cin >> first >> last;

	for (int i = 0; i < arraySize; i++){
		if(phonebook[i].first == first && phonebook[i].last == last){
			phonebook[i] = NULL;
			cout << "This contact has been deleted!";
		} else{
			cout << "This contact doesn't exist!";
		}
	}
} // deleteContact

void addContact(){
	cout << "Enter Name: ";
	string first, last, phone;
	cin >> first >> last;
	cout << "Enter Phone: ";
	cin >> phone;

	for (int i = 0; i < arraySize; i++){
		if(phonebook[i].first == first && phonebook[i].last == last){
			cout << "Contact already exist!";
		} else{
			phonebook[arraySize].first = first;
			phonebook[arraySize].last = last;
			phonebook[arraySize].phone = last;
			arraySize *= 2;
			cout << "This contact has been added!";
		}
	}
} // closes addContact method

string searchContact(){
	cout << "Enter Name: ";
	string first, last;
	cin >> first >> last;

	for (int i = 0; i < arraySize; i++){
		if(phonebook[i].first == first && phonebook[i].last == last){
			return phonebook[i].phone;
		}
	}
	return "Contact not found!";
} // closes searchContact method

void loadContact() {
	int n = 0;
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
	int n = 0;
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

		cout<< phonebook[n].first << " " << phonebook[n].last << " " << phonebook[n].phone<<endl;

		n++; // increment array index by one
	} // closes while loop
} // closes contactList method


int main (){
	string countLine = "";
	ifstream file;

	file.open("phonebook.txt");
	while(getline(file, countLine)){
		arraySize++;
	}
	cout << arraySize;

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
