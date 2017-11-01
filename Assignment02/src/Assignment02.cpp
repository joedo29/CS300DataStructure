//============================================================================
// Name        : Assignment02.cpp
// Author      : JOE DO
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Write a C++ program to set up and maintain the database of an airline corporation.
//				This program should be able to handle the following commands:
//				ADD, DELETE, SEARCH, LIST, QUIT
//============================================================================

#include "LinkedList.h"
#include "Passenger.h"
# include "OrderedLinkedList.h"


OrderedLinkedList<Passenger> *DeltaAirline = new OrderedLinkedList<Passenger> [4];
int main() {
	cout<< "***DELTA AITLINES ***" << endl <<
			"Please choose an operation:" << endl;
	char c;
	cout << "A(Add) | S(Search) | D(Delete) | L(List) | Q(Quit): ";
	cin >> c;
	int flight;
	string first, last, phone, add;
	if(c == 'Q' || c == 'q'){
		cout << "Thanks for visiting Delta Airline!" << endl;
	}

	while(c != 'Q' && c != 'q'){
		switch(c){
		case 'A':
		case 'a': {
			cout << "Enter flight number (100 , 200, 300, 400): ";
			cin >> flight;
			cout << "Enter first name: ";
			cin >> first;
			cout << "Enter last name: ";
			cin >> last;
			cout << "Enter phone number: ";
			cin >> phone;
			cout << "Enter address: ";
			cin.ignore(1000, '\n');
			getline(cin, add);

			Passenger *p = new Passenger (first, last, phone, add);

			// Assign passenger to the correct flight number
			if(flight == 100)
				DeltaAirline[0].insert(*p);
			else if(flight == 200)
				DeltaAirline[1].insert(*p);
			else if(flight == 300)
				DeltaAirline[2].insert(*p);
			else
				DeltaAirline[3].insert(*p);

			break;
		} // closes case 'A'

		case 'L':
		case 'l': {
			// Add customer to enter flight number
			cout << "Enter flight number (100 , 200, 300, 400): ";
			cin >> flight;

			// Print passenger information based on flight number or inform user that the flight has no passenger
			if(flight == 100){
				cout  << DeltaAirline[0];
				if(DeltaAirline[0].isEmpty())
					cout << "We currently do not have any passenger on flight 100." << endl;
			}
			else if(flight == 200){
				cout  << DeltaAirline[1];
				if(DeltaAirline[1].isEmpty())
					cout << "We currently do not have any passenger on flight 200." << endl;
			}
			else if(flight == 300){
				cout  << DeltaAirline[2];
				if(DeltaAirline[2].isEmpty())
					cout << "We currently do not have any passenger on flight 300." << endl;
			}
			else {
				cout  << DeltaAirline[3];
				if(DeltaAirline[3].isEmpty())
					cout << "We currently do not have any passenger on flight 400." << endl;
			}

			break;
		} // closes case 'L'

		case 'S':
		case 's': {
			cout << "Enter first name: ";
			cin >> first;
			cout << "Enter last name: ";
			cin >> last;

			Passenger *p = new Passenger (first, last);
			Passenger p1;

			//			for(int i = 0; i < 4; i++){
			p1 = DeltaAirline[0].search(*p);
			//				if(p1 != NULL)
			//					break;
			//			}
			//			if(p1 != "")
			cout << p1 << endl;
			//			else
			//				cout << "Sorry, we are not able to locate this passenger!" << endl;
			break;

		} // closes case 'S'

		case 'D':
		case 'd': {
			cout << "Enter flight number (100 , 200, 300, 400): ";
			cin >> flight;
			cout << "Enter first name: ";
			cin >> first;
			cout << "Enter last name: ";
			cin >> last;

			Passenger *p = new Passenger (first, last);
			Passenger *p1;
			cout << "before: ";
			// Delete passenger based on flight number
			//			if(flight == 100){
			DeltaAirline[0].deleteItem(*p);

			//				cout << "The passenger is deleted.";
			//			}
			//			else if(flight == 200){
			//				DeltaAirline[1].deleteItem(*p);
			//				cout << "The passenger is deleted.";
			//			}
			//			else if(flight == 300){
			//				DeltaAirline[2].deleteItem(*p);
			//				cout << "The passenger is deleted.";
			//			}
			//			else{
			//				DeltaAirline[3].deleteItem(*p);
			//				cout << "The passenger is deleted.";
			//			}


			break;
		} // closes case 'D'

		} // closes switch

		cout << "A(Add) | S(Search) | D(Delete) | L(List) | Q(Quit): ";
		cin >> c;
		if(c == 'Q' || c == 'q'){
			cout << "Thanks for visiting Delta Airline." << endl;
			cout << "HAVE A NICE DAY!" << endl;
		}
	} // closes while loop

	return 0;
} // closes main() method
