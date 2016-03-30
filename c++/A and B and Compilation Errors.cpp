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
int main() {
  long long int n, i, y;
  unsigned long long int ta=0,tb=0,tc=0;
  cin >> n;
  rep(i,1,n) {
    cin >> y;
    ta += y;
  }
  rep(i,1,n-1) {
    cin >> y;
    tb += y;
  }
  rep(i,1,n-2) {
    cin >> y;
    tc += y;
  }
  cout <<ta-tb<<endl;
  cout <<tb-tc<<endl;
	return 0;
}
