#include <iostream>
using namespace std;

// Globally defining the top element.
int top = -1;

// Function to check whether stack is empty or not! 
int isEmpty() {
	if(top == -1) 
		return true;
	else
		return false;
}

// Function to know the size of stack!
int size() {
	return (top + 1);
}

// Fucntion to push element into the stack!
void push(int stack[], int x, int n) {
	if(top == n-1) {
		cout << "Stack is full, try popping first!" << endl;
	} else {
		top += 1;
		stack[top] = x;
	}
}

// Function to remove top element from stack.
void pop() {

	if( isEmpty() ) {
		cout << "Stack is already empty" << endl;
	} else {
		top -= 1;
	}
}

// To find current top element of stack.
void topElement(int stack[]) {
	if( isEmpty() ) {
		cout << "Stack is empty, try popping some elements" << endl;
	} else {
		cout << "Element at top of stack is " << stack[top];	
	}
}

int main() {

	// Defining an array of size 3.
	int stack[3];

	// Pushing 3 elements into the stack back to back!
	push(stack, 5, 3);
	push(stack, 6, 3);
	push(stack, 9, 3);

	// Now if we push one more time, we get overflow message!
	push(stack, 8, 3);

	// Now lets see whats the size of stack!
	cout << "Size of stack is : " << size() << endl;

	// As we know that stack is already full, lets do some poping!
	for(int i=0; i < 3; i++) {
		pop();
	}

	// As we know that stack is empty now, lets check underflow condition!
	pop();

	// Before finishing up, lets check the size again!
	cout << "Size of stack is : " << size() << endl;

	return 0;
}