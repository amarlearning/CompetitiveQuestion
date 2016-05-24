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
  long long int v;
};
vector<long long int> v;
long long int query[100010];
int main() {
	ios::sync_with_stdio(0);
	long long int n, m, total=0, x;
  	cin >> n;
  	twillo a[n];
  	rep(i,1,n) {
    	cin >> a[i].v;
   	 	total += a[i].v;
      v.push_back(total);
  	}
	  cin >> m;
	  rep(i,1,m) {
	    cin >> x;
      cout << distance(v.begin(), lower_bound(v.begin(), v.end(), x))+1 << endl;
	  }
	return 0;
}
