/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	long int T;
	cin >> T;
	while(T--) {
		char s, ch;
		cin >> s;

		vector<char> solution;
		stack<char> variable;

		int brackets = 1;
		while(brackets!=0) {
			cin >> ch;

			if(ch == '(') brackets++;
			else {
				if(ch == ')') {
					brackets--;
					solution.push_back(variable.top());
					variable.pop();
				} else {
					if (ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^' || ch=='%' || ch=='_' || ch=='|' || ch==';' || ch=='?'|| ch=='~')
					{
						variable.push(ch);
					} else {
						solution.push_back(ch);
					}
				}
			}
		}
		for(long int i=0;i<solution.size();i++) {
			cout << solution.at(i);
		}
		cout<<endl;
	}
	return 0;
}
