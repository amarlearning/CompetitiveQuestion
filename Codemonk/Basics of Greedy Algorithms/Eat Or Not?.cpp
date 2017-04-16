/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
using namespace std;
 
#ifndef ll
	#define ll long long
#endif

ll int aP[10001] = {0}, aC[10001] = {0}, aF[10001] = {0}, aV[10001] = {0};

int main(int argc, char const *argv[]) {
	
	ll int V, C, F, P;
	scanf("%lld %lld %lld %lld", &V, &C, &F, &P);
	
	bool flag = false;
	
	ll int N;
	scanf("%lld", &N);
	
	for(ll int i = 0; i < N; i++) {
		scanf("%lld %lld %lld %lld", &aV[i], &aC[i], &aF[i], &aP[i]);
	}
	
	for(int i = 0; i < pow(2, N); i++) {
		
		ll int sV = 0, sC = 0, sF = 0, sP = 0;
		
		for(int k = 0; k < N; k++) {
			
			if((i & (1 << k)) > 0) {
				
				sV += aV[k];
				sP += aP[k];
				sC += aC[k];
				sF += aF[k];
				
			}
		}
		
		if(sV == V && sC == C && sP == P && sF == F) {
			flag = true;
			break;
		}
	}
	
	if(flag) 
		printf("YES");
	else
		printf("NO");
	
	return 0;
}