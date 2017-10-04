#include <iostream>
#include <fstream>
#include <string>
//#include <vector>
using namespace std;

int main (){
	ifstream file;
	file.open("phonebookmini.txt");
	string* array = new string[50];
	for (int i = 0; i < 50; ++i){
		file >> array[i];
	}
//	std::cout << "Length of array = " << sizeof(array)/sizeof(array[0]) << std::endl;
	cout << "value at index 10 is: " << array[10] << endl << endl;
//	for (int i = 0; i < 10; ++i){
//		cout << array[i] << endl;
//	}
	cout << "enter name: ";
	string input;
	cin >> input;




	cout << "MY PHONEBOOK APPLICATION" << endl;
	cout << "Please choose an operation:" << endl;
	cout << "A (Add) | S (Search) | D (Delete) | L (List) | Q (Quit): " << endl;
	cout << "enter name: ";
	//string input;
	cin >> input;
	file >> input;
	cout << endl;
	cout << "enter phone number: ";
	int inputNumber;
	cin >> inputNumber;
	file >> inputNumber;



//	ofstream outfile("output.txt");
//	outfile << 2*a << " " << 2*b;



	return 0;

}
