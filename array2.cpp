
// we make stack from array
#include<iostream>
using namespace std;

class stackarr{
	public:
	int n;
	int a[100];
	int b[100];
stackarr(int x){
	n =x;
	a[n];
	b[n];
	//Initialise them both to zero as default
	for(int i=0;i<n;i++){
		a[i] = 0;
	}
	for(int i=0;i<n;i++){
		b[i] = 0;
	}
}

// Push and chill
void push(int value){
	//If stack length is 0
	if(n==0){cout << "Stack is empty" << endl; return;}

	//Send all values of array a into array b
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}

	//Fill pos 1 of a and bring all the rest values back
	a[0] = value;
	for(int i=0;i<n-1;i++){
		a[i+1] = b[i];
	}
}

// do enjoy
void pop(){
	//If stack length is 0
	if(n==0){cout << "Stack is empty" << endl; return;}

	//Send all values of array a into array b
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}

	//send all values back from pos 2
	for(int i=0;i<n-1;i++){
		a[i] = b[i+1];
	}
	//del pos 1 value of b and update last element of a to zero
	b[0]=0;
	a[n-1]=0;
}

//how much long yrr
void size(){
	cout << "This stack can store upto " << n << " elements." << endl;
}
//this is empty?
void isEmpty(){
	if(n==0){cout << "This stack is empty."<<endl;}
	else {
	cout << "This stack can never be empty as it will contain zero if you don't give any input"<<endl;
	}
}
//what is upper side?
void top(){
	cout << "The top is " << a[0] << endl;
}
//show me stack
void disp(){
	for(int i=0;i<n;i++){
	cout << a[i] << "->";
	}
	cout << "\b\b  " << endl;
}

};

int main(){
	int n;
	cout << "How long is stack supposed to be?" << endl;
	cin >> n;	
	stackarr s1(n);

	for(int i=1;i<=n;i++){
	s1.push(i);
	}
	s1.disp();
	s1.pop();
	s1.pop();
	s1.disp();
	s1.isEmpty();
	s1.top();
	s1.size();
	
return 0;
}

 
