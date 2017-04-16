/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
using namespace std;

#ifndef ll
	#define ll long long
#endif

vector <ll int> vec;

int main(int argc, char const *argv[]) {
	
	int T;
	scanf("%d", &T);
	while(T--) {
		ll int N, temp, cnt = 0;
		scanf("%lld", &N);
		
		for(int i=0; i < N; i++) {
			cin >> temp;
			vec.push_back(temp);
		}
		
		for(int i=0; i < vec.size(); i++) {
			if(vec.at(i) % 2 != 0)
				cnt++;
		}
		
		if(cnt % 2 == 0)
			printf("Yes\n");
		else
			printf("No\n");
			
		vec.clear();
		
	}
	return 0;
}