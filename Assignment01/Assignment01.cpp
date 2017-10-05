
#include "contact.h"

using namespace std;

int main (){
	string first;
	string last;
	string phone;
	string* array = new string[5];
	int arraySize = 5;
	int n = 0;

	ifstream file;
	file.open("phonebookmini.txt");

	while(!file.eof()){
		file >> first;

		file >> last;

		file >> phone;
		contact a(first, last, phone);
		array[n] = a;
		n++;
	} // closes while loop

	cout << array[0]<< endl;



//	for (int i = 0; i < arraySize; ++i){
//		file >> array[i];
//	}

//	cout << "value at index 10 is: " << array[10] << endl << endl;
// PATRICIA JOHNSON 973437


	// HOW TO SEARCH
//	cout << "enter name: ";
//	string input;
//	cin >> input;
//
//	for(int i = 0; i < arraySize; i++){
//		if (array[i].find(input, 0) != std::string::npos){
//			cout << "Found It !!! " << array[i] << endl;
//		} else{
//			cout << "Not Found!";
//			break;
//		}
//	}




//	cout << "MY PHONEBOOK APPLICATION" << endl;
//	cout << "Please choose an operation:" << endl;
//	cout << "A (Add) | S (Search) | D (Delete) | L (List) | Q (Quit): " << endl;
//	cout << "enter name: ";
//	//string input;
//	cin >> input;
//	file >> input;
//	cout << endl;
//	cout << "enter phone number: ";
//	int inputNumber;
//	cin >> inputNumber;
//	file >> inputNumber;




	return 0;

} // CLOSES MAIN
