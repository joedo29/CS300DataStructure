/*
 * Assignment04.cpp
 *
 *  Created on: Nov 22, 2017
 *      Author: Joe Do
 *      Purpose of this assignment is to create a phonebook program using BinarySearchTree that allows
 *      users to search, load text file, add new contact, view a list of all contacts and filter contact.
 */

#include "contact.h"
#include "BinarySearchTree.h"

using namespace std;

BinarySearchTree<contact> tree;

void addContact(){
	cout << "Enter First and Last Name: ";
	string first, last, phone;
	cin >> first >> last;
	cout << "Enter Phone: ";
	cin >> phone;
  contact *p = new contact (first, last, phone);
  tree.insert(*p);
	cout << first << " " << last << " has been added to our PHONEBOOK system." << endl;
}


string searchContact(){
	cout << "Enter First and Last Name: ";
	string first, last;
	cin >> first >> last;
	contact *c = new contact(first, last);

	if(tree.search(*c)){
		c = tree.found(*c);
		return "Phone Number: " + c->getPhone();
	}

	else
		return "Contact not found!";
}

void filterContact(){
	cout << "Enter First and Last Name: ";
	string first, last;
	cin >> first >> last;
	contact *c = new contact(first, last);

	tree.filterTree(*c);
}

void loadContact() { // load all contacts to a BinarySearchTree
	ifstream file;
	string fName;
	cout << "Enter Filename: ";
	cin >> fName;
	file.open(fName);

	string first;
	string last;
	string phone;
	while (!file.eof()) {

		file >> first;
		file >> last;
		file >> phone;

		contact *p = new contact (first, last, phone);
	  tree.insert(*p);

	}
}

double calculateElapseTime() {
	clock_t begin = clock();
//code_to_time
	searchContact();
	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	return elapsed_secs;
}

int main (){
	cout << "*** MY PHONE BOOK APPLICATION ***" << endl;
	cout << "Please choose an operation:" << endl;

	string input;
	bool check = 1;

	while(check){
    cout << "A(Add) | L(Load) | S(Search) | F(Filter) | P(Print) | Q(Quit): ";
		cin >> input;

    if (input == "a" || input == "A"){
    	addContact();
    }

		if(input == "P" || input == "p"){
			tree.inOrder();
		}

		if(input == "L" || input == "l"){
			loadContact();
		}

		if(input == "s" || input == "S"){
			cout << searchContact() << endl;
		}

		if(input == "f" || input == "F"){
			filterContact();
		}

    if(input == "Q" || input == "q"){
			cout << "THANKS FOR USING OUR PHONEBOOK APPLICATION!";
			check = 0;
		}

	}

	return 0;

}
