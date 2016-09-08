/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
using namespace std;

vector<long long int> prime;

void SimpleSieve(long long int limit) {

	bool mark[limit+1];
	memset(mark, true, sizeof(mark));

	for(long long int p=2; p*p<limit; p++) {

		if(mark[p] == true) {
			for(long long int i=p*2; i<limit; i+=p) {
				mark[i] = false;
			}
		}
	}

	for(long long int i=2; i<limit; i++) {
		if(mark[i] == true) {
			prime.push_back(i);
		}
	}

}

int main() 
{
	long long int N = 10000000000, T;
	long long int limit = floor(sqrt(N))+1;

	SimpleSieve(limit);
	scanf("%lld",&T);

	while(T--) {

		long long int lowx, highy;
		scanf("%lld%lld",&lowx,&highy);

		if(lowx == 1) lowx++;

		if(highy <= prime[prime.size()-1]) {

			for(long long int i=0; i<prime.size();i++) {

				if(prime[i] >= lowx && prime[i] <= highy) {
					printf("%lld\n",prime[i]);
				}
			}

		} else {

			limit = highy-lowx+1;

			bool mark[limit];
			memset(mark, true, sizeof(mark));

			for(long long int i=0; i < prime.size(); i++) {
				
 				if(prime[i] > highy) break;
				
				for(long long int j=prime[i]*2; j<=highy; j+=prime[i]) {
					mark[j-lowx] = false;
				}
			}

			for(long long int i=lowx; i<=highy; i++) {

				if(mark[i-lowx] == true) {
					printf("%lld\n",i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
