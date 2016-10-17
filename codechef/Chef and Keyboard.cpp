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
		long int N, M, C, cnt=0;
		scanf("%ld%ld%ld",&N,&M,&C);
		for(int i=1;i<=N;i++) {
			for(int j=1;j<=M;j++) {
				if(i*j == C) {
					cnt++;
				}
				if(i*j > C) break;
			}
		}
		printf("%ld\n",cnt);
	}
	return 0;
}
