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
#define max(a,b) (a > b ? a : b)
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,n,a) for (int i=n;i>=a;i--)
using namespace std;
long long int cnt[4]={0};
int main() {
	ios::sync_with_stdio(0);
	long long int a,b,c,d, cal=0,x,len;
  cin >> a >> b >> c >> d;
  string s;
  cin >> s;
  len = s.length()-1;
  rep(i,0,len) {
    x = (int)s[i]-48;
    x -= 1;
    cnt[x]++;
  }
  cal += cnt[0]*a + cnt[1]*b;
  cal += cnt[2]*c + cnt[3]*d;
  cout << cal <<endl;
	return 0;
}
