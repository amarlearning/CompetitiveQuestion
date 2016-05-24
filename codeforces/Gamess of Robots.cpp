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
	long long int n, k, x;
  long long int i=1, temp=0;
  cin >> n >> k;
  rep(i,1,n) {
    cin >> a[i];
  }
  while(1) {
    x = (i*(i+1))/2;
    if(k <= x) break;
    else i++;
  }
  i--;
	temp = (i*(i+1))/2;
	k = k - temp;
  cout << a[k];
	return 0;
}
