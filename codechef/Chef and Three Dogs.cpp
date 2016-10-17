/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	scanf("%d",&T);
	while(T--) {
		long long int s, v;
		scanf("%lld%lld",&s,&v);
		float timex = 2*s;
		timex /= (3*v);
		printf("%f\n",timex); 
	}
	return 0;
}
