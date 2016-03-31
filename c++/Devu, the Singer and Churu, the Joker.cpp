/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
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
#define rep(i,a,n) for (int i=a;i<=n;i++)
using namespace std;
long long int a[500000];
int main() {
	int n, total=0, i;
	long long max=0,compute=0;
	cin >> n >> total;
	rep(i,1,n) {
		cin >> a[i];
		max += a[i];
	} compute = (n-1)*10+max;
	if(compute > total) {
		cout <<"-1"<<endl;
	} else {
		total -= max;
		cout << total/5<<endl;
	}
	return 0;
}
