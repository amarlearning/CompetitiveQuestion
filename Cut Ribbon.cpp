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
#define per(i,n,a) for (int i=n;i>=a;i--)
using namespace std;
long long int a[500000];
int main() {
	ios::sync_with_stdio(0);
  int n, a, b, c, x;
	long int temp = 0, max = 0;
	cin >> n >> a >> b >> c;
	rep(i,0,4000) {
		rep(j,0,4000) {
			x = a*i + b*j;
			if(n - x >= 0 && (n - x)%c == 0) {
				temp = i + j + (n-x)/c;
			}
			if(max < temp) max = temp;
			temp = 0;
		}
	}
	cout << max <<endl;
	return 0;
}
