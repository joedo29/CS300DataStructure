/*
 * OrderedLinkedList.h
 *
 *  Created on: Oct 20, 2017
 *      Author: joedo
 */


#ifndef ORDEREDLINKEDLIST_H_
#define ORDEREDLINKEDLIST_H_

#include "LinkedList.h"
#include "Passenger.h"
#include <iostream>
using namespace std;

template <class T>
class OrderedLinkedList : public LinkedList<T>{
	//private:
	//	OrderedLinkedList(const OrderedLinkedList&) = delete; //copy constructor


public:
	void insert(T&);
	void deleteItem(T&);
	T& search(T&);
	//	OrderedLinkedList<T>& operator=(OrderedLinkedList<T>&);
	//		template <class U>
	//		friend ostream& operator<<(ostream& os, OrderedLinkedList<U>& list);
	//~OrderedLinkedList();
};

//template <class T>
//ostream& operator<<(ostream& os, OrderedLinkedList<T>& list){
//	node<T> *p = list.head;
//	while(p!= NULL){
//		os<<p->data<<" "<<endl;
//		p = p->next;
//	}
//}

// Begin delete method
template<class T>
void OrderedLinkedList<T>::deleteItem(T& item){
	if(this->head == NULL){
		cout << "This passenger doesn't exist.";
	}
	node<T> *p = this->head;
	if(p->data == item){

	}
}
//
//	}
//	if(this->head == NULL)
//		cout<<"Contact doesn't exist";
//	else{
//		if(this->head->data == item){
//			node<T>* p = this->head;
//			this->head = this->head->next;
//			delete p;
//			this->count--;
//			if(this->head==NULL) this->last = NULL;
//		}else{
//			node<T>* p = this->head;
//			node<T>* q = p->next;
//			while(q->data != NULL && q->data != item){
//				p = q;
//				q = q->next;
//			}
//			if(q!=NULL){
//				p->next = q->next;
//				this->count--;
//				if(this->last == q) this->last = p;
//				delete q;
//			}
//		}
//	}
//} // closes delete method



// Begin search method
template <class T>
T& OrderedLinkedList<T>::search(T& item){ // this method return true/false
	node<T> *p = this->head;
	bool found = 1;

	while(p != NULL && !found){
		if(p->data == item){
			found = 1;
		}
		else
			p = p->next;
	}

	if(found)
		return p->data;


} // closes search method



// Begin insert method
template <class T>
void OrderedLinkedList<T>::insert(T& item){ // This method adds newly item into a list in ascending order based on last name
	node<T> *temp = new node<T>;
	temp->data = item;
	temp->next = NULL;

	node<T> *p = new node<T>;
	node<T> *q = new node<T>;

	// inserted item is the first time
	if(this->head == NULL){
		this->head  = temp;
		if(this->last  == NULL) this->last = temp;
	}

	// inserted item is smaller than head
	else if(item < this->head->data){
		temp -> next = this->head ;
		this->head  = temp;
	}

	// inserted item is bigger than last
	else if(item > this->last->data){
		this->last  -> next = temp;
		this->last = temp;
	}
	else{
		// inserted item is somewhere in the middle
		p = this->head ;
		while(p!= NULL && p->data < item)
		{
			q = p;
			p = p->next;
		}
		q->next = temp;
		temp->next = p;
	}
	this->count++;

} // closes insert method


// Begin overring deleteItem method
// template <class T>


// Begin overriding search method
// template <class T>




#endif /* ORDEREDLINKEDLIST_H_ */
