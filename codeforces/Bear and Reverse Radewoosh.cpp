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
int p[100]={0},t[100]={0};
long int limak = 0, Radewoosh=0;
long long int timecount = 0, x;
int main() {
	int n, c, i;
	cin >> n >> c;
	rep(i,1,n) {
		cin >> p[i];
	}	rep(i,1,n) {
		cin >> t[i];
	}
	rep(i,1,n) {
		timecount += t[i];
		x = p[i] - c*timecount;
		if(x < 0) {x = 0;}
		limak += x;
	}
	timecount = 0;
	for(i=n;i>0;i--) {
		timecount += t[i];
		x = p[i] - c*timecount;
		if(x < 0) {x = 0;}
		Radewoosh += x;
	}
	if(limak == Radewoosh) {cout<<"Tie";}
	else if(limak > Radewoosh) {cout <<"Limak";}
	else {cout <<"Radewoosh";}
	return 0;
}
