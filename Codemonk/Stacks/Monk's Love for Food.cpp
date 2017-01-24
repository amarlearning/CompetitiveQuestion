/*
	Question Link : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/tutorial/
*/

#include <iostream>
using namespace std;

long int top = -1;

void push(long int stack[], long int cost) {
	top += 1;
	stack[top] = cost;
}

void pop(long int stack[])
{

	if(top == -1) {
		cout << "No Food" << endl;
	}
	else
	{
		cout << stack[top] << endl;
		top -= 1;
	}

}

int main() {

	long int Query;
	cin >> Query;

	long int cases, cost, stack[100100] = {0};

	for (long int i = 0; i < Query; ++i)
	{
		cin >> cases;
		if(cases == 1) 
		{
			pop(stack);
		}
		else 
		{
			cin >> cost;
			push(stack, cost);
		}
	}

	return 0;
}