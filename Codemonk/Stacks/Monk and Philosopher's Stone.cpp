#include <iostream>
#include <stack>
using namespace std;

#ifndef ll
#define ll long long
#endif

long int a[101000];

int main(int argc, char const *argv[]) {
	long int Number, Q, X;
	ll int j = 1, CC = 0;
	ll int total = 0;
	stack<long int> st;
	string str;
	cin >> Number;
	for (long int i = 1; i <= Number; ++i) {
		cin >> a[i];
	}
	cin >> Q >> X;
	for (long int i = 1; i <= Q && j <= Number; ++i) {
		cin >> str;
		if(str[0] == 'H') {
			st.push(a[j]);
			total += a[j];
			CC++;
			j++;
		} else {
			total -= st.top();
			CC--;
			st.pop();
		}
		if(total == X) {
			break;
		}
	}
	if(total == X) {
		cout << CC << endl;
	} else {
		cout << "-1" << endl;
	}
	return 0;
}