#include <bits/stdc++.h>
#include <stack>

using namespace std;

#ifndef ll
	#define ll long long
#endif

ll int H[1010000];
ll int Span[1010000];

int main(int argc, char const *argv[]) {
	long int T;
	cin >> T;
	while(T--) {
		ll int N;
		cin >> N;
		stack<long long int> st;
		for (int i = 1; i <= N; ++i) {
			cin >> H[i];
		}
		st.push(1);
		Span[1] = 1;
		for (int i = 2; i <= N; ++i)
		{
			while(st.size() && H[st.top()] <= H[i]) {
				st.pop();
			}

			Span[i] = (st.empty()) ? (i) : (i - st.top());
			st.push(i);

		}
		for (int i = 1; i <= N; ++i)
		{
			cout << Span[i] << " ";
		}
		cout << endl;
	}
	return 0;
}