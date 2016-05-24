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
int main() {
	ios::sync_with_stdio(0);
  long long int rem=0;
  long long int n, min=0, max=0;
  cin >> n;
  min = n/7*2;
  rem = n%7;
  max = min;
  if(rem == 6) {
     min++;
  }
  if(rem > 0) {
    max += (rem > 2 ? 2 : rem);
  }
  cout <<min <<" "<<max;
	return 0;
}
