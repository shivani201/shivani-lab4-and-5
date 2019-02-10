

//we make 2 queue from 1 stack
#include"queue using LL.cpp"

class stbyq{
	public:
	Node* top;
	queue q1;
	queue q2;
	//Construct
	stbyq(){
		top=q1.end;
	}
//do push 
void push(int value){
	//Use enqueue
	q1.enqueue(value);
}

//Let's do
void pop(){
	//if stack is empty
	if(q1.end==NULL){
		cout<< "You're removing too much! STOP!" << endl;
		return;
	}
	else{
		//Take all the elements to q2(except last element of q1)
		while(q1.end->next!=NULL){
			q2.enqueue(q1.front->data);
			q1.dequeue();
		}
		//Delete last element
		q1.dequeue();
		//Take everything back to q1
		while(q2.end!=NULL){
			q1.enqueue(q2.front->data);
			q2.dequeue();
		}
	}
}

//box empty
bool isEmpty(){
	q1.isEmpty();
}

//how much long
void size(){
	q1.size();
}

//what is in upper side??
void topdisdp(){
	cout << "The top is " << q1.end->data << endl;
}

// ohh god it's display
void display(){
	q1.display();
}

};

  
