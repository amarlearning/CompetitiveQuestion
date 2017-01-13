#include <iostream>
#include <stack>

using namespace std;

int a[500020];

int main(int argc, char const *argv[]) {
	int N;
	cin >> N;
	int result=0;
	int a[500020];
	for(int i=1; i <= N; i++) {
		cin >> a[i];
	}
	stack<int> st;
	s.push(0);
	for(int i=1; i <= N; i++)
	{
		if(a[i] > 0) {
			st.push(i);
		}
		else
		{
			int index = st.top();
			st.pop();
			
			if(a[index] == -a[i]) {
				if(!st.empty()) {
					result = max(result, i-s.top());
				}
				else {
					st.push(i);
				}
			}
			else {
				st.push(i);
			}
		}
	}
	cout << result << endl;
	return 0;
}