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
struct twillo {
	unsigned long long int h,r;
};
struct dizzy {
	unsigned long long int m,t,r;
};
bool compare(dizzy a, dizzy b) {
	return a.m < b.m;
}
set<unsigned long long int> s;
typedef set<unsigned long long int> sull;
int main() {
	ios::sync_with_stdio(0);
	unsigned long long int n, w, l;
	cin >> n >> w >> l;
	unsigned long long int compareLength = 0, temp=0, median=0;
	unsigned long long int minMonth=0, loop=0, maxMonth=0, flag=0, j;
	unsigned long long int terminate=0, totalRate=0, requiredWood=0;
	unsigned long long int extraMonth=0;
	twillo store[n];
	dizzy calc[n];
	rep(i,1,n) {
		cin >> store[i].h >> store[i].r;
		totalRate += store[i].r;
	}
	rep(i,1,n) {
		if(store[i].h >= l) {
			compareLength += store[i].h;
		}
	}
	if(compareLength >= w) {
		cout <<"0"<<endl;
	} else {
		rep(i,1,n) {
		  temp = l/store[i].r;
		  temp *= store[i].r;
		  temp += store[i].h;
		  if(temp >= l) {
		    calc[i].m = l/store[i].r;
		    calc[i].t = temp;
		    calc[i].r = store[i].r;
		  } else {
		    calc[i].m = l/store[i].r + 1;
		    temp = (calc[i].m * store[i].r) + store[i].h;
		    calc[i].t = temp;
		  }
		  s.insert(calc[i].m);
		  calc[i].r = store[i].r;
		}
		loop = minMonth = calc[1].m;
		maxMonth = calc[n].m;
		flag = 0;
		if(n <= 10000 && w <= 10000 && l <= 10000) {
		for(j=1;;j++) {
		    compareLength = 0;
		    temp = 0;
		    rep(i,1,n) {
		      temp = (store[i].r * j) + store[i].h;
		      if(temp >= l) compareLength += temp;
		    }
		    if(compareLength >= w) break;
		}
		minMonth = j;
		// minimum number of months needed.
		cout << minMonth <<endl;
		} else {
			// Let's sort the structure of random calculation. :P
			compareLength = 0;
			sort(calc+1,calc+n+1,compare);
			loop = calc[n].m;
			rep(i,1,n) {
					temp = (store[i].r * loop) + store[i].h;
					if(temp >= l) compareLength += temp;
			}
			if(compareLength >= w) {
				loop = minMonth = calc[1].m;
				maxMonth = calc[n].m;
				flag = 0;
			// This is a infinite loop, you better start worrying. :P :D
			while (true) {
				// resetting the values
				j = 1;
				compareLength = 0;
				// some random calculation. consider ignoring it.
				// B'coz it's hard to explain them in comments.
				while(true) {
					if(calc[j].m < minMonth) {
						temp = minMonth - calc[j].m;
						compareLength += (calc[j].t + (temp * calc[j].r));
					} else {
						compareLength += calc[j].t;
					}
					if(j == n) break;
					if(calc[j+1].m > minMonth) break;
					j++;
				}
				if(compareLength >= w) {
					break;
				} else {
					minMonth++;
				}
			}
			// minimum number of months needed.
			cout << minMonth <<endl;
			}
			else {
				terminate = calc[n].m;
				requiredWood = w - compareLength;
				if(requiredWood%totalRate == 0) {
					extraMonth = requiredWood/totalRate;
				} else {
					extraMonth = requiredWood/totalRate;
					extraMonth += 1;
				}
				terminate += extraMonth;
				// minimum number of months needed.
				cout << terminate <<endl;
			}
		}
	}
	return 0;
}
