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
int a[1009]={0},cnt[1009]={0},temp[1009]={0};
int main() {
  int n, i, c=1, max=0;
  int flag=0, result=0;
  cin >> n;
  flag = n;
  rep(i,1,n) {
    cin >> a[i];
    cnt[a[i]]++;
    if(max < a[i]) {max = a[i];}
  }
  while(flag != 0) {
    rep(i,1,max) {
      if(cnt[i] >= 1) {
        temp[c] = i;
        cnt[i]--;
        flag--;
        c++;
      }
    }
  }
  rep(i,1,n-1) {
    if(temp[i] < temp[i+1]){ result++;}
  }
  cout << result;
	return 0;
}
