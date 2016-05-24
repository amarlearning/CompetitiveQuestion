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
long long int a[102][102]={0},cnt[102]={0};
int main() {
  int n, m, i, j;
  long long int max=0,temp=1;
  cin >> n >> m;
  rep(i,1,m)
    rep(j,1,n)
      cin >> a[i][j];
  rep(i,1,m) {
    rep(j,1,n) {
      if(max < a[i][j]) {
        max = a[i][j];
        temp = j;
      }
    }
    cnt[temp]++;
    max=0;temp=1;
  }
  max = 0;
  temp = 1;
  rep(i,1,n) {
    if(max < cnt[i]) {
      max = cnt[i];
      temp = i;
    }
  }
  cout << temp << endl;
	return 0;
}
