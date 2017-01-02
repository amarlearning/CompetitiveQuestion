#include <iostream>
using namespace std;

int top;

// Function to validate string parentheses!
void validate(char string[], int n, char stack[]) {
	for(int i=0; i < n; i++) {
		
		if(string[i] == '(') {
			top += 1;
			stack[top] = string[i];
		} 
		if(string[i] == ')') {
			if(top == -1) {
				top -= 1;
				break;
			} else {
				top -= 1;
			}
		}
	}

	if(top == -1) {
		cout << "String is balanced!" << endl;
	} else {
		cout << "String is unbalanced!" << endl;
	}
}

int main() {
	
	// Two string balanced and unbalanced string!
	char B_string[] = {'(', 'a', '+', '(', 'b', '-', 'c', ')', ')'};
	char U_string[] = {'(', '(', 'a', '+', 'b', ')'};

	// Stack to store parentheses!
	char stack[20];
	
	// Initialise top to empty string and validate balanced string.
	top = -1;
	validate(B_string, 9, stack);

	// Initialise stack to empty string and validate unbalanced string.
	top = -1;
	validate(U_string, 6, stack);

	return 0;
}