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

	long int T;
	scanf("%ld", &T);

	while(T--) {
		ll int N, K, temp, total = 0;
		scanf("%lld %lld", &N, &K);

		for(ll int i=0; i < N; i++) {
			scanf("%lld", &temp);
			vec.push_back(temp);
		}
		
		sort(vec.begin(), vec.end());
		
		temp = 0;
		
		for(ll int i=0; i < vec.size(); i++) {
			total += vec.at(i);
			if(total >= K)
				break;
			else
				temp += 1;
		}
		printf("%lld\n", temp);
		vec.clear();
	}

	return 0;
}