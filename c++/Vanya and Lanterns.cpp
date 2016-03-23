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
long long int a[1005];
int main() {
	int n;
  float min=0, x=0;
  long long int l;
  cin >> n >> l;
  rep(i,1,n) cin >> a[i];
  sort(a+1,a+n+1);
  if(n == 1) {
    min = a[n] - 0;
    if(min < l - a[n]) {min = l - a[n];}
  } else {
    rep(i,2,n) {
      if(i == 2 && a[i-1]!=0) {min = a[i-1];}
      x = a[i] - a[i-1];
      if(min < (x/2)) {min = x/2;}
    }
    if(a[n] != l) {
      if(min < (l - a[n]))
        min = l - a[n];
    }
  }
  printf("%.10f",min);
	return 0;
}
