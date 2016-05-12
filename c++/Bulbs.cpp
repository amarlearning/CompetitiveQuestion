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
long long int bulb[110]={0};
int main() {
	ios::sync_with_stdio(0);
	int n, m, x, temp=0, flag=0;
  cin >> n >> m;
  rep(i,1,n) {
    cin >> x;
    rep(i,1,x) {
      cin >> temp;
      bulb[temp] = 1;
    }
  }
  rep(i,1,m) {
    if(bulb[i] == 0) flag=1;
  }
  if(flag == 1)
    cout << "NO";
  else
    cout << "YES";
	return 0;
}
