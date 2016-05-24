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
long long int a[100009];
int main() {
  long int n,m, ans=0, x=0;
  cin >> n >> m;
  set<int> s;
  rep(i,1,n) {
    cin >> a[i];
  }
  per(i,n,1) {
    s.insert(a[i]);
    a[i] = s.size();
  }
  rep(i,1,m) {
    cin >> x;
    cout <<a[x]<<endl;
  }
	return 0;
}
