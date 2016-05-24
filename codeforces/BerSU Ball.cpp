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
int a[109] = {0}, b[109] = {0};
int smallvalue(int x, int y) {
  if(x <= y) {
    return x;
  } else {
    return y;
  }
}
int main() {
  ios::sync_with_stdio(0);
  long int n, m, limit, x = 0;
  int cnt = 0, flag = 0;
  cin >> n;
  rep(i,1,n) {
    cin >> x;
    a[x]++;
  } cin >> m;
  rep(i,1,m) {
    cin >> x;
    b[x]++;
  }
  rep(i,1,101) {
    if(i == 1) {
      if(a[i] > 0) {
        if(b[i] > 0 && a[i] > 0) {
          flag = smallvalue(a[i],b[i]);
          b[i]-=flag;
          cnt+=flag;
          a[i]-=flag;
        }
        if(b[i+1] > 0 && a[i] > 0) {
          flag = smallvalue(a[i],b[i+1]);
          b[i+1]-=flag;
          cnt+=flag;
          a[i]-=flag;
        }
      }
    } else {
      if(a[i] > 0) {
        if(b[i-1] > 0 && a[i] > 0) {
          flag = smallvalue(a[i],b[i-1]);
          b[i-1]-=flag;
          cnt+=flag;
          a[i]-=flag;
        }
        if(b[i] > 0 && a[i] > 0) {
          flag = smallvalue(a[i],b[i]);
          b[i]-=flag;
          cnt+=flag;
          a[i]-=flag;
        }
        if(b[i+1] > 0 && a[i] > 0 && i!=101) {
          flag = smallvalue(a[i],b[i+1]);
          b[i+1]-=flag;
          cnt+=flag;
          a[i]-=flag;
        }
      }
    }
  }
  cout << cnt << endl;
	return 0;
}
