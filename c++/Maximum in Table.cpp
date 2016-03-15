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
using namespace std;
int a[15][15] = {0};
int main()
{
	int n, i,j;
	cin>>n;
	for(i=1;i<=n;i++) {
		a[1][i] = 1;
		a[i][1] = 1;
	}
	for(i=2;i<=n;i++) {
		for(j=2;j<=n;j++) {
			a[i][j] = a[i-1][j] + a[i][j-1];
		}
	}
	cout<<a[n][n];
	return 0;
}
