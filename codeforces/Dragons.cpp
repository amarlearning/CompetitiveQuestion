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

struct array {
	int x,y;
};

bool compare(array a, array b) {
	return a.x < b.x;
}

int main()
{
	int s, n, flag=0, i;
	cin>>s>>n;
	array d[n];
	for(i=0;i<n;i++) {
		cin>>d[i].x>>d[i].y;
	}
	sort(d, d+n, compare);
	for(i=0;i<n;i++) {
		if(s > d[i].x) {
			s = s + d[i].y;
		} else {
			flag = 1;
			break;
		}
	}
	if(flag == 0) {cout<<"YES";}
	else {cout<<"NO";}
	return 0;
}
