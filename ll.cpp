#include<iostream>
using namespace std;

class Node{
	public:
	//Data
	int data;
	//Pointer to next Node
	Node* next;
	//Constructor that makes ptr to NULL
	Node(){
		next = NULL;
	}
	
};

class LinkedList{
	public:
	//Head + Nodes inside linked with each other
	
	//Head -> Node type pointer
	Node* head;
	Node* tail;
	
	//Construct
	LinkedList(){
		head = NULL;
		tail = NULL;
	}
	//Circles inside linked with each other
	//Rules how circles will be connected or linked
	
	//insert
	void insert(int value){
		//If 1st node is added
		Node* temp = new Node;
		// Insert value in the node
		temp->data = value;
		// 1st Node only
		if(head==NULL){
			head = temp;
		}
		
		// Any other Node
		else{
			tail->next = temp;
		}
		tail = temp;
		
	}
	
	void insertAt(int pos, int value){
		//Create a node
		Node* temp = new Node;

		//Storing the data
		temp-> data = value;

		//If ll is empty
		if(head==NULL){
			head = temp;
			tail = temp;
		}
		else{
			// Reach the place before the pos
			Node* current = head;
			int i =1;
			while(i<pos-1){
				i++;
				current = current->next;
				if(current==NULL){
					cout << "This position has not yet been created." << endl;
					cout << "Insert function might help you in this case." << endl;
					return;
				}
			}

			if(pos!=1){
			//moving pointers like magic!
			temp->next = current->next;
			current->next = temp;
				if(current == tail){tail = current->next;}
			}
			// Update the code for 1st pos.
			else{temp->next = head;
			head = temp;}
		}
	}

	//Delete at any position
	void deleteAt(int pos){
		//When there is no element in LL
		if(head==NULL){
			cout << "You're deleting way too much!" << endl;
			cout << "Please stop." << endl;
			cout << endl;
		}

		//Deleting the first pos
		else if(pos == 1){
			Node* temp = head;
			head = head->next;
			temp->next = NULL;
			delete temp;
		}
	
		else{
			// Reach the place before the pos
			Node* current = head;
			int i =1;
			while(i<pos-1){
				i++;
				current = current->next;
				
			}

			// Reach the place at the pos
			Node* temp = head;
			int j =1;
			while(j<pos){
				j++;
				temp = temp->next;
				if(temp==NULL){
					cout << "This position has not yet been created." << endl;
					cout << "Insert function might help you in this case." << endl;
					return;
				}
			}
			
			//Moving pointers like magic!
			current->next = temp->next;
			delete temp;
		}
	}

	//Deletion of last element
	void del(){
		//store tail in temp
		Node* temp = tail;
		
		//When there is no element
		if(head == NULL){
			cout << "You're deleting way too much!" << endl;
			cout << "Please stop." << endl;
			cout << endl;
		}
		//When there is only one element
		if(head == tail){
			head = NULL;
			tail = NULL;
		}
		
			
		else{			
			//Node before tail has to point to NULL
			Node* current = head;
			
			while(current->next != tail){
				current = current->next;
			}
			current->next = NULL;

			//update tail
			tail = current;
		}

			//delete temp
			delete temp;
		
	}

	//Count the number of items in the list
	void countItems(){
		// Writing a loop to count
		int count = 0;
		Node* curr=head; 
		while(curr != NULL){
			count++;
			curr = curr->next;
			}
		cout << "Number of items = " << count << endl;
	}
	
	//Display
	void display(){
		Node* current = head;
		
		while(current != NULL){
			cout << current->data << "->";
			current = current->next;
		}
		cout << "NULL" << endl;
	}

};



