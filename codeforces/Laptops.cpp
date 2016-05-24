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
struct twillo {
  long long int x,y;
};
bool compare(twillo a, twillo b) {
  return a.x < b.x;
}
long long int a[500000];
int main() {
	ios::sync_with_stdio(0);
  long int n, flag = 0;
  cin >> n;
  twillo a[n];
  rep(i,1,n) {
    cin >> a[i].x >> a[i].y;
  }
  sort(a+1,a+n+1,compare);
  rep(i,2,n) {
    if(a[i-1].x < a[i].x && a[i-1].y > a[i].y) {
      cout <<"Happy Alex";
      flag = 1;
      break;
    }
  }
  if(flag == 0) {
    cout << "Poor Alex";
  }
	return 0;
}
