#include "ll.cpp"

class stack{
	public:
	Node* top;
	LinkedList l1;
	
	//Construct
	stack(){
		top=l1.head;
	}

	//Functions
	
	void push(int value){
		//insertAt(int pos, int value)
		l1.insertAt(1,value);
		// Top = new_head
		top = l1.head;
	}

	//Delete from upper side
	void pop(){
		//void deleteAt(int pos)
		l1.deleteAt(1);
		//top = new_head
		top = l1.head;
	}

	//Box is empty?
	bool isEmpty(){
		if(top == NULL){return true;}
		return false;
	}

	//the size is to more
	void size(){
		//Use countItems
		l1.countItems();
	}

	//what is upper side
	void topDisplay(){
		cout << "The top is " << l1.head->data << endl;
	}

	// ohh god display
	void display(){
		l1.display();
	}
};

    
