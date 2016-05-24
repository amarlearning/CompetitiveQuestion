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
long long int a[1009]={0};
int main() {
  int n, max=0, cnt=0, x;
  cin >> n;
  rep(i,1,n) {
    cin >> x;
    if(max < x) max = x;
    a[x]++;
    if(cnt < a[x]) cnt = a[x];
  }
  cout <<cnt<<" ";
  cnt=0;
  rep(i,1,max) {
    if(a[i]!=0)cnt++;
  }
  cout <<cnt;
	return 0;
}
