/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>
#include <cctype>
#include <stack>
#include <cmath>
#include <queue>

#define pb push_back
#define pi 3.14159265
#define sc(T) scanf("%d",&T)
#define scl(T) scanf("%ld",&T)
#define scll(a,b) scanf("%lld%lld",&a,&b)
 
using namespace std;

int main(int argc, char const *argv[]) {
	long int T;
	sc(T);
	while(T--) {
		unsigned long long int N, K, sum=0;
		unsigned long long int temp, value;
		scll(N,K);
		for(long int i=1; i<=N; i++) {
			scl(temp);
			sum += temp;
		}
		if(sum%2 == 0 && K == 1) {
		          printf("odd\n");
		} else {
		          printf("even\n");
		}
	}
	return 0;
}