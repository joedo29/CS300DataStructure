#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main (){
	ifstream file;
	file.open("phonebook.txt");
	cout << "MY PHONEBOOK APPLICATION" << endl;
	cout << "Please choose an operation:" << endl;
	cout << "A (Add) | S (Search) | D (Delete) | L (List) | Q (Quit): " << endl;
	cout << "enter name: ";
	string input;
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
