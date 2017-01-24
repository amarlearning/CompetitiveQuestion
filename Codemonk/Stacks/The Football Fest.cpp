/* 
	Question Link : https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/the-football-fest-6/description/
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int top = -1;

void push(long int stack[], int Player) {
	top += 1;
	stack[top] = Player;
}

void pop(long int stack[]) {
	long int temp = top;
	temp -= 1;
	top += 1;
	stack[top] = stack[temp];
}

void lastPossessing(long int stack[]) {
	cout << "Player " << stack[top] << endl;
}

int main(int argc, char const *argv[])
{
	long int T;
	scanf("%ld",&T);
	while(T--)
	{	
		long long int N, Player;
		scanf("%ld%ld",&N, &Player);
		
		long int stack[1000000] = {0};
		push(stack, Player);

		char cases;

		for (long int i = 0; i < N; ++i)
		{
			cin >> cases;

			if (cases == 'P')
			{
				cin >> Player;
				push(stack, Player);
			}
			else
			{
				pop(stack);
			}
		}
		lastPossessing(stack);
	}
	return 0;
}