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
long long int a[500000];

unsigned long long int fast_power(unsigned long long int x,unsigned long long int y) {
    unsigned long long int number = 1;
    while (y!=0) {
        if(y & 1)
            number = number * x;
        y >>= 1;
        x = x * x;
      }
    return number;
}
int main() {
  unsigned long long int n, max = 0, min = 10000000000001, cntmin=0;
  long long int cntmax = 0,x;
  cin >> n;
  rep(i,1,n) {
    cin >> x;
    if(x == max)
      cntmax++;
    else if(max < x) {
        cntmax = 1;
        max = x;
      }
    if(x == min)
        cntmin++;
    else if(min > x) {
      min = x;
      cntmin=1;
    }
  }
  if(min == max) {
    cout <<"0 "<<(n*(n-1))/2;
  }else {
  cout <<max-min<<" "<<cntmax*cntmin;}
	return 0;
}
