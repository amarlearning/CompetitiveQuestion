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
#define mod 1000000007
using namespace std;

long int gcd(long int a, long int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}
int main(int argc, char const *argv[]) {
	long int T;
	scanf("%ld",&T);
	while(T--) {
	    long int N;
	    long long int a[1000];
	    scanf("%ld",&N);
	    for(long int i = 1; i <= N; i++) {
	        scanf("%lld",&a[i]);
	    }
	    sort(a+1, a+N+1);
        long long int ma=0, bash;
        for(long int i=1; i<N; i++) {
            for(long int j=i+1; j<=N; j++) {
                long long int l = gcd(a[i],a[j]);
                bash = (a[i]*a[j]);
                bash /= l;
                if(ma == 0) {
                    ma = bash;
                } else {
                    if(bash < ma) 
                        ma = bash;
                }
            }
        }
        cout << ma << endl;
	}
	return 0;
}
