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
long long int a[500000];
int main() {
	ios::sync_with_stdio(0);
	long long int n, m, i, temp=0, flag=0;
  long long int max=0,min=0, rem=0;
  cin >> n >> m;
  if(m == 1) {
    for(i=1;i<n;i++) {
      min += i;
    }
    max = min;
  } else {
    if(n%m == 0) {
      temp = n/m;
      min = temp*(temp-1)/2;
      min *= m;
    } else {
      temp = n/m;
      rem = n%m;
      min = (temp+1)*(temp)/2;
      min *= rem;
      flag = temp*(temp-1)/2;
      min += flag*(m-rem);
    }
    temp = n-m+1;
    max = temp*(temp-1)/2;
  }
  cout << min << " " << max;
	return 0;
}
