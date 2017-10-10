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
#include "extra.h"

using namespace std;
contact* array;
int arraySize = 0;

char userInput() {
    char userInput;
    cout << "A(Add) | S(Search) | D(Delete) | L(List) | Q(Quit): ";
    cin >> userInput;
    return userInput;
}
void print(contact contact1) {
    cout << contact1.getFirst() << " " << contact1.getLast() << " "<< contact1.getPhone() << endl;
}

void arrayOfContact() {
    int n = 0;
    ifstream file;
    file.open("phonebookmini.txt");
    string first;
    string last;
    string phone;
    while (!file.eof()) {
        file >> first;
        file >> last;
        file >> phone;

        array[n].first = first;
        array[n].last = last;
        array[n].phone = phone;

        n++; // increment array index by one
    } // closes while loop
} // closes arrayOfContact method


void contactList(){
    ifstream file;
    file.open("phonebookmini.txt");

    string first;
    string last;
    string phone;

    while (!file.eof()){
        file >> first;
        file >> last;
        file >> phone;
        contact a (first, last, phone);
        print (a);
    }
} // closes contactList method

contact* addContact(string first, string last, string phone){
    delete array;
    array = new contact[arraySize];
    arrayOfContact();
    contact contact1(std::move(first), std::move(last), std::move(phone));

    ofstream output("phonebookmini.txt");
    for (int i = 0; i < arraySize; i++) {
        contact1 = array[i];
        output << contact1.getFirst() << " " << contact1.getLast() << " " << contact1.getPhone() << endl;
    }

    array[arraySize - 1] = contact1;

    return array;

} // closes addContact method

string contactLookup(string lookup){
    string first, last;
    istringstream convert(lookup);
    convert >> first;
    convert >> last;

    for (int i = arraySize - 1; i >= 0; i--){
        if (array[i].getFirst() == first && array[i].getLast() == last){
            return array[i].getPhone();
        }
    }

    return "Sorry, the name you entered doesn't exist in this phone book! Please try again!";
} // closes contactLookup method

int main (){
    cout << "*** MY PHONE BOOK APPLICATION ***" << endl;
    cout << "Please choose an operation:" << endl;

    string countLine;
    ifstream file;
    file.open("phonebookmini.txt");
    while(getline(file, countLine)){
        arraySize ++;
    }

    array = new contact[arraySize];

    arrayOfContact();

    bool quit = false;
    char input;

    while (!quit){
        input = userInput();
        switch (input){
            default: "Sorry, the name you entered doesn't exist in this phone book! Please try again!";

            case 'q':{
                quit = true;
            } // finish quit
                break;

            case 'l':{
                contactList();
            } // finished list
                break;

            case 'a':{
                arraySize++;
                string first, last, phone;
                cout << "Enter first name: ";
                cin >> first;
                cout << "Enter last name: ";
                cin >> last;
                cout << "Enter phone: ";
                cin >> phone;
                array[arraySize - 1].first;
                array[arraySize - 1].last;
                array[arraySize - 1].phone;
                addContact(first, last, phone);
                cout << endl;
            } // finished adding
                break;

            case 's':{
                string lookup;
                cout << "Enter First Name: ";
                getline(cin, lookup);
                string result = contactLookup(lookup);
                cout << result << endl;
            } // finished searching
                break;

            case 'd':{
                string dcontact;
                cout << "Please enter contact name: ";
                getline(cin, dcontact);
                array = deleteContact(dcontact);
                arraySize--;

            } // finished deleting contact
                break;

        } // closes switch

    } // closes while loop

    return 0;

} // CLOSES MAIN
