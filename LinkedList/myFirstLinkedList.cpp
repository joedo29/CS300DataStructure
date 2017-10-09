#include "Point.h"

template <class T>
struct node{
	T data;
	node *next;
};



// PROBLEM 2
//READ AN INTEGER X, SEARCH FOR IT IN A LINKEDLIST, IF FOUND ADD 3 TO IT


//PROBLEM 1
// CREATE A LINKED LIST IN FORWARD/BACKWARD DIRECTION
// Problem: input integers into a linked list where the input ends with -99

//void createLinkedListBackward(){
//
//
//	node *head = NULL, *curr, *last;
//	cout << "Enter a number: " ;
//	int number;
//	cin >> number;
//	while(number != -99){
//		// create a new node
//		curr = new node;
//		curr -> data = number;
//		curr -> next = head;
//		head = curr;
//
//		cout << "Enter a number: " ;
//		cin >> number;
//	} // closes while loop
//	curr = head;
//	while(curr != NULL){
//		cout << curr -> data << endl;
//		curr = curr -> next;
//	}
//}; // closes createLinkedListBackward
//
//void createLinkedListForward(){
//	node *head = NULL, *curr, *last;
//	cout << "Enter a number: " ;
//	int number;
//	cin >> number;
//	while(number != -99){
//		// create a new node
//		curr = new node;
//		curr -> data = number;
//		curr -> next = NULL;
//		if (head == NULL){
//			//list is empty
//			head = curr;
//			last = curr;
//		} else{
//			last -> next = curr;
//			last = curr;
//		}
//
//		// begin problem 2
//		cout << "Enter a number: " ;
//		cin >> number;
//		curr = head;
//		while(curr != NULL && curr -> data != number){
//			curr = curr -> next;
//		}
//		if (curr == NULL){
//			cout << "not found";
//		} else {
//			curr -> data += 3;
//		}
//		// finished problem 2
//
//	} // closes while loop
//
//
//
//
//	curr = head;
//	while(curr != NULL){
//		cout << curr -> data << endl;
//		curr = curr -> next;
//	}
//}; // closes createLinkedListForward method


int main(){
	node<Point> * head = new node<Point>;
	Point p(2,3);
	head -> data = p;
	head -> next = NULL;
	cout << head-> data.getY() << endl;
//	createLinkedListForward();
//	createLinkedListBackward();
	return 0;
} // closes main method
