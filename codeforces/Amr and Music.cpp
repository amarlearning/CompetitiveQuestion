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
struct twello {
  int x,y;
};
bool compare (twello a, twello b) {
  return a.x < b.x;
}
twello days[200];
int main() {
  long int n, k, sum=0, cnt=0;
  cin >> n >> k;
  rep(i,1,n) {
    cin >> days[i].x;
    days[i].y = i;
  }
  sort(days+1,days+n+1,compare);
  rep(i,1,n) {
    sum = sum + days[i].x;
    if (sum <= k) {
      cnt++;
    }else {
      break;
    }
  }
  cout <<cnt <<endl;
  rep(i,1,cnt) {
    cout <<days[i].y<<" ";
  }
	return 0;
}
