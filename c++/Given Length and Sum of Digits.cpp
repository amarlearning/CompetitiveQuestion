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
long long int a[100]={0};
long long int mem[100]={0};
int main() {
	ios::sync_with_stdio(0);
	int m, sum, i=0, limit=0;
	int target=0, temp=0;
  cin >> m >> sum;
	if(sum == 0 && m > 1) {
		cout <<"-1 -1";
	} else if(m*9 < sum) {
		cout <<"-1 -1";
	} else if(sum == 0 && m == 1) {
		cout <<"0 0";
	} else {
		while(sum > 9) {
			sum -= 9;
			a[i] = 9;
			i++;
		}
		limit=i;
		a[i] = sum;
		rep(j,0,limit) {
			mem[j]=a[j];
		}
		if(a[m-1] == 0) {
			per(i,m-1,0) {
				if(a[i] != 0) {
					target = i;
					break;
				}
			}
			if(a[target] == 1) {
				temp = a[m-1];
				a[m-1] = a[target];
				a[target] = temp;
			}
			else {
				a[m-1] = 1;
				a[target]--;
			}
		}
		per(i,m-1,0) {
			cout <<a[i];
		}
		cout <<" ";
		rep(i,0,m-1) {
			cout <<mem[i];
		}
	}
	return 0;
}
