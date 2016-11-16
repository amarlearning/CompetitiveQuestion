/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime>
#include <assert.h>
#define pi 3.14159
#define MOD 1000000007
using namespace std;
 
long long int fast_exp(long long int N) {
	long long int result = 1;
    if( N == 0)
       return 1;
    result = fast_exp(N/2)%MOD;       
    if (N%2 == 0)
        return (result%MOD)*(result%MOD)%MOD;
    else
    {
        if(N > 0)
            return (2*(result%MOD)*(result%MOD))%MOD;
        else
            return ((result%MOD)*(result%MOD))%MOD/2;
    }
}

int main(int argc, char const *argv[]) {
	long int T;
	scanf("%ld",&T);
	while(T--) {
		long long int N;
		scanf("%lld",&N);
		long long int solution = fast_exp(N-1);
		if (N==1) 
			printf("0\n");
		else 
			printf("%lld\n",solution - 2);
	}
    return 0;
}
