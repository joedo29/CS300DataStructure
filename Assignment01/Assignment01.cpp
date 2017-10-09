
#include "contact.h"

using namespace std;
char userInput() {
	char userInput;
	cout << "A(Add) | S(Search) | D(Delete) | L(List) | Q(Quit): ";
	cin >> userInput;
	return userInput;
}

void print(contact contact1) {
	cout << contact1.getFirst() << " " << contact1.getLast() << " " << contact1.getPhone() << endl;
}

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
		print(a);
	}
} // closes contactList method

int main (){
	cout << "*** MY PHONE BOOK APPLICATION ***" << endl;
	cout << "Please choose an operation:" << endl;
	string first;
	string last;
	string phone;

	contact* array = new contact[4];

	int n = 0;
	int arraySize = 4;
	ifstream file;
	file.open("phonebookmini.txt");

	while(!file.eof()){
		file >> first;
		file >> last;
		file >> phone;

		array[n].first = first;
		array[n].last= last;
		array[n].phone = phone;

		n++; // increment array index by one
	} // closes while loop

	bool quit = 0;
	char input;

	while (!quit){
		input = userInput();
		switch (input){
		case 'q':{
			quit = 0;
		} // finish quit

		case 'l':{
			contactList();
		} // finished list

		} // closes switch

	} // closes while loop

	return 0;


	/*	string line, name;

	cout<<"Enter a name: ";

	cin>>name;
    cout << name << endl;

	cout<<"Enter a line:";

	cin.ignore(1000, '\n');

	getline(cin, line);

	cout<<line << endl;*/

	/*	while (!quit){
		cout << "A (Add) | S (Search) | D (Delete) | L (List) | Q (Quit): ";
		cin >> input;
		if (input == "Q" || input == "q"){
			break;
		}
		if (input == "S" || input == "s"){
			cout << "Enter first name: " ;
			cin >> first;
			cout << "Enter last name: " ;
			cin >> last;
		}
		if (input == "A" || input == "a"){
			cout << "Enter first name: " ;
			cin >> first;
			cout << "Enter last name: " ;
			cin >> last;
			cout << "Enter phone number: " ;
			cin >> phone;
			contact *newArray = new contact [++arraySize];
			for (int i = 0; i < arraySize - 1; ++i){
				newArray[i].first = array[i].first;
				newArray[i].last= array[i].last;
				newArray[i].phone= array[i].phone;

			}
			newArray[arraySize - 1].first = first;
			newArray[arraySize - 1].last = last;
			newArray[arraySize - 1].phone = phone;
			delete array;
		} // closes if statement
	}*/ // closes while loop



} // CLOSES MAIN
